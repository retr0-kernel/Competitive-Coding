#include <iostream>
#include "tools.h"

using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int x, a[3];
	    cin>>x;
	    
	    for (int i=0; i<3; i++) {
	        cin>>a[i];
	    }
	    sort(a, a+3);
	    
	    cout<< (x-1)*a[0] + a[1] <<endl;
	}
	return 0;
}
