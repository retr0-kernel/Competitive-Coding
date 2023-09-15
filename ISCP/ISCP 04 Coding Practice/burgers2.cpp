/*https://www.codechef.com/problems/BURGERS2*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int k;
	cin>>k;
	while(k--){
	    int a,b,p,q;
	    cin>>a>>b>>p>>q;
	    int ca,cb;
	    if(q<a*p) 
	    cout<<-1<<endl;
	    else{
	        cb=(q-a*p)/(b-a);
	        if(cb>p) cb=p;
	        ca=p-cb;
	        cout<<ca<<" "<<cb<<endl;
	    }
	}
	return 0;
}