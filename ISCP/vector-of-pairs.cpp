#include <bits/stdc++.h>

using namespace std;
bool comparator(pair<int, int> a, pair<int, int> b)
{
    return (a.second < b.second) ? true : false;
}
int main()
{
    vector<pair<int, int>> v;
    int n;
    cout << "Enter no of activities :";
    cin >> n;
    cout << n;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> p;
        cout << "Enter start and end time :" << i;
        cin >> p.first >> p.second;
        v.push_back(p);
    }
    sort(v.begin(), v.end(), comparator);
    int c = 1, q = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i].first >= v[q].second)
        {
            c++;
            q = i;
        }
    }
    cout << c;
    return 0;
}