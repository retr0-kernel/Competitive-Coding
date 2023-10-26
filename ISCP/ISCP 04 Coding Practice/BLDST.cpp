/*https://www.codechef.com/problems/BLDST*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,m;
	    cin>>n>>m;
	    int a[m];
	    int sum=0;
	    for(int j=0;j<m;j++){
	        cin>>a[j];
	        sum+=a[j];
	    }
	    int ans = n*(m-1);
        if((sum-ans) < 0){
            cout<<0<<endl;
        }
        else{
            cout<<sum-ans<<endl;
        }
	    
	}
	return 0;
}