In Binary Search we try to find midpoint. We mark the first index as `low` and the last index as `high`. Our midpoint will be 

```
mid = (low+high)/2
```

Now for a given value of x, we will compare for three cases. 

| Case 1 | arr[mid] == x | Return the mid element                                                                                                   |
| ------ | ------------- | ------------------------------------------------------------------------------------------------------------------------ |
| Case 2 | arr[mid] > x  | Skip all the elements from mid to last. We repeat the steps where we keep the same low but we change the high = (mid-1)  |
| Case 3 | arr[mid] < x  | Skip all the elements from first to mid. We repeat the steps where we keep the same high but we change the low = (mid+1) |
