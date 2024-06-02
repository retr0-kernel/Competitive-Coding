Input :- arr[] = [10, 15, 20, 20, 40, 40] x =20
Ouput :- 3

Input :- arr[] = [5, 8, 8, 10, 10] x =10
Ouput :- -4

## Naive Solution

We will traverse the array from the right side (nth index) and return the index where we find the element.

Time Complexity :- O(n)
Space Complexity :- O(1)

## Better Solution (Recursive)

We will use Recursive Binary Search.

```
int lastOccurence(int arr[], int low, int high, int x, int n){
	if(low>high) return -1;
	int mid = (low+high)2;
	if(arr[mid]>x){
		return lastOccurrence(arr, low, mid-1, n);
	}
	else if(arr[mid]<x){
		return lastOccurrence(arr, mid+1, high, n);
	}
	else {
		if(mid == n-1|| arr[mid]!=arr[mid+1]){
			return mid;
		}
		else{
		return lastOccurrence(arr, mid+1, high, n);
		}
	}
	return -1;
}

```

Time Complexity :- O(log n)
Space Complexity :-  O(log n)

## Best Solution (Iterative)

```
int lastOccurence(int arr[], int n, int x){\
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
			if(mid == n-1|| arr[mid]!=arr[mid+1]){
				return mid;
			}
			else {
				low = mid + 1;
			}
		}
	}
	return -1;
}
```