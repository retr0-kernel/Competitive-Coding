Input :- arr[] = [1, 10, 10, 10, 20, 20, 40] x =20
Ouput :- 4

Input :- arr[] = [1, 10, 20, 30] x =15
Ouput :- -1
## Naive Solution
We traverse the array and compare each element with x. If we find it, we return back the index or else we return -1.

```
int firstOccurence(int arr[], int n, int x){
	for(int i=0;i<n;i++){
		if(arr[i]==x) return i;
	}
	return -1;
}
```

Time Complexity - O(n)
Space Complexity - O(1)
## Better Solution (Recursive)

```
int firstOccurence(int arr[], int low, int high, int x){
	if(low>high){
		return -1;
	}
	else {
		int mid = (low+high)/2;
		if(arr[mid]>x){
			return firstOccurence(arr, low, mid-1, x);
		}
		else if{
			return firstOccurence(arr, mid+1, high, x);
		}
		else{
			if(mid==0 || arr[mid-1] != arr[mid]) return mid;
			else{
				return firstOccurence(arr, low, mid-1, x);
			}
		}
	}
}
```

Time Complexity - O(log n)
Although the recursive solution is better solution but it involves function call overhead which can be further optimized.
## Best Solution (Iterative)

```
int firstOccurence(int arr[], int n, int x){\
	int low =0, high = n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]>x){
			high = mid - 1;
		}
		else if (arr[mid]<x) {
			low = mid + 1;
		}
		else {
			if(mid==0|| arr[mid-1]!=arr[mid]){
				return mid;
			}
			else {
				high = mid -  1;
			}
		}
	}
	return -1;
}
```