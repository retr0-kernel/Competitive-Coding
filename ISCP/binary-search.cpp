#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    int target;
    cin >> target;
    int low = 0;
    int high = v.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] == target)
        {
            cout << "Found at index " << mid << endl;
            break;
        }
        else if (v[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (low > high)
    {
        cout << "Not found" << endl;
    }
    return 0;
}