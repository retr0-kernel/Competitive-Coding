//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int>res;
        
        int flag = 0;
        int first = 0;
        int current_sum = 0;
        for(int i=0;i<n;i++){
            current_sum=current_sum+arr[i];
            
            while(current_sum>s){
                current_sum=current_sum-arr[first];
                first++;
            }
            if(current_sum==s&&s!=0){
                flag=1;
                res.push_back(first+1);
                res.push_back(i+1);
                break;
            }
            else{
                flag=0;
            }
        }
        if(flag==1){
            return res;
        }
        else{
            res.push_back(-1);
            return res;
        }
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends