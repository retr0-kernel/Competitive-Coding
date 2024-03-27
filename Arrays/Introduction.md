An array will contain only one kind of datatype, that is will contain only similar elements. It can be defined as :- 

```
int arr[6]
```
or in languages like `Java`,

```
int arr[]=new int[6]
```

If we define this inside a `main()` function it will accomodate garbage values for all given postions. But if we define it outside of `main()` function that is define it globally then it would accomodate all values with `0`.

A maximum length of array that can be defines as `10^6`, that is, `int arr[10^6]` inside `main()` function. Outside, that is `globally` it will `10^7` that is, `int arr[10^7]`. 

Now in an array elements can be accessed using there `index`, where the first index is `0` and the last index is `size-1`.
An example loop would be 

```
for(int i=0;i<n-1;i++){
    print(arr[i]);
}
```

In the computer memory, the first index is stored at a random address `x` and then elements are stored followed by `x+1`, `x+2`......`x+n`.

```
Find the largest element in an array
arr[] = [3, 2, 1, 5, 2]
```

```
So a brute force solution to this is sorting the array in an ascending order and then printing the last element.

T.C - O(nlogn)
S.C - O(1)
```

```
A better approach to this would be defining a variable largest and initializing it first element. Now check with each element, if its less or equal then leave, if it's greater than then update the largest element variable. Do this till the end of array and then print the variable.
Pseudocode for this:

largest=a[0];
for(int i=0;iNn;i++){
    if(a[i]>largest){
        largest=a[i];
    }
}
print(largest);

T.C - O(n)
```

