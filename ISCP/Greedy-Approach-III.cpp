#include <bits/stdc++.h>
using namespace std;

class Activity
{
public:
  int start_time;
  int end_time;
  Activity(int start_time, int end_time)
  {
    this->start_time = start_time;
    this->end_time = end_time;
  }
};
int activity_selection(vector<Activity> activities)
{
  int n = activities.size();
  vector<int> dp(n, 1);
  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (activities[i].start_time > activities[j].end_time)
      {
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
  }
  return *max_element(dp.begin(), dp.end());
}
int main()
{
  int n;
  cout << "Enter n: " << endl;
  cin >> n;
  vector<Activity> activities;
  for (int i = 0; i < n; i++)
  {
    int start_time, end_time;
    cin >> start_time >> end_time;
    activities.push_back(Activity(start_time, end_time));
  }
  int no_of_activities = activity_selection(activities);
  cout << "No of activities: " << no_of_activities << endl;
  return 0;
}