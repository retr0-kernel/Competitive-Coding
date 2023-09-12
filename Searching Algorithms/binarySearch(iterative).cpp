/*
1. Divide the search space into two halves by finding the middle index
2. Compare the middle element with the key
3. If key is found terminate
4. If key is not found then two sub-parts
    - if key < middle element, then the left side is usede for next search.
    - if key > middle element, then the right side is usede for next search.
5. The process is continued until the key is found and the total search space is exausted.
*/

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - 1) / 2;
        if (arr[m] == x)
        {
            return m;
        }
        if (arr[m] < x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return -1;
}

int main(void)
{
    int n;
    cout << "Enter the number of elements in the array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter " << n << "elements in sorted order: " << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter value to be searched : " << endl;
    cin >> x;

    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in the array"
        : cout << "Element is present in the array at index" << result;
    return 0;
}
/*
Time Complexity: 
Best Case: O(1)
Average Case: O(log N)
Worst Case: O(log N)
Auxiliary Space: O(1), If the recursive call stack is considered then the auxiliary space will be O(logN).*/