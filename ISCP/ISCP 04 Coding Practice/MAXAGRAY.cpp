/*https://www.codechef.com/problems/MAXAGRY*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define int        long long
#define fl(n)      for (int i = 0; i < n; i++)
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define endl       '\n'
const int mod   =  1000000007;
const int INF = 1e9 + 5;


signed main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    if(k >= n/2){
	        cout<<n*(n-1)/2<<endl;
	    } else{
	        int i = n - 2*k;
	        cout<<n*(n-1)/2 - i*(i-1)/2<<endl;
	    }
	}
}