/*https://www.codechef.com/problems/CIELRCPT*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int>ar={1,2,4,8,16,32,64,128,256,512,1024,2048};
	int t;
	cin>>t;
	while(t--)
	{
	    int bill;
	    cin>>bill;
	    int j=ar.size()-1;
	    int finalcount=0;
	    while(bill!=0)
	    {
	        if(bill>=ar[j])
	        {
	            bill=bill-ar[j];
	            finalcount++;
	        }
	        else
	        {
	            j--;
	        }
	    }
	    cout<<finalcount<<endl;
	}
	return 0;
}