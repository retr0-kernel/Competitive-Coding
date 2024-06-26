/*https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&category=Arrays&sortBy=submissions*/


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        sort(array.begin(), array.end());
        int num = 1;
        for(int i=0;i<n;i++){
            if(array[i]==num){
                num++;   
            }
            else{
                return num;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}