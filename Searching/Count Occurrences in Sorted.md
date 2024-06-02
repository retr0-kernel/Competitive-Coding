
Input : arr[] = [10, 20, 20, 20, 30, 30] ; x = 20
Output :- 3

Input : arr[] = [10,  10, 10, 10, 10] ; x = 10
Output :- 5

A naive solution for this problem is linearly traversing through the array and count elements encountered.

## Better Solution 

```
int countOc(int arr[], int n, int x){
	int first = firstOccurrence(arr, n, x);
	if(first == --1) return 0;
	else {
		return (lastOccurrence(arr, n, x) - first + 1);
	}
}
```

Time Complexity :- O(log n)