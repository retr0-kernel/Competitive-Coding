/*https://www.codechef.com/problems/HIGHSCORE*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    int n,a,b,c,d;
	    cin >>n;
	    cin>>a >>b>>c>>d;
	    cout<< max({a,b,c,d})<<endl;
	}
	return  0;
}