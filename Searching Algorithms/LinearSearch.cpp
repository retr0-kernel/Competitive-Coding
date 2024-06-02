#include <bits/stdc++.h>

using namespace std;
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements, one by one:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element you want to search for: ";
    cin >> key;
    int result = linearSearch(arr, n, key);
    if (result != -1)
    {
        cout << "Element " << key << " found at index " << result << endl;
    }
    else
    {
        cout << "Element " << key << " not found in the array." << endl;
    }
    return 0;
}
/*can also use find() in c++ stl but same complexity*/