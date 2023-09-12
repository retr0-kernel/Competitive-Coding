/*Given an array with all distinct elements, find the largest three elements. Using Partial Sort of C++ STL*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " distinct elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    partial_sort(arr.begin(), arr.begin() + 3, arr.end(), greater<int>());
    cout << "The largest three elements are: ";
    for (int i = 0; i < 3; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}