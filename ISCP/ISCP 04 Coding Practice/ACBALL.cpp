/*https://www.codechef.com/problems/ACBALL*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string x,y;
	    cin>>x>>y;
	    for(int i=0;i<=x.length()-1;i++){
	        if(x[i]==y[i] && x[i]=='W'){
	            cout<<"B";
	        }
	        else if(x[i]==y[i] && x[i]=='B'){
	            cout<<"W";
	        }
	        else {
	            cout<<"B";
	        }
	        
	    }
	    cout<<endl;
	}
	return 0;
}