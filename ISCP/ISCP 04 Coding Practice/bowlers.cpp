/*https://www.codechef.com/problems/BOWLERS*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int T,m,p,q,s;
    cin>>T;
    while(T--)
    {
        cin>>m>>p>>q;
        s=p*q;
        if(m<=s && p>1)
        {
            int temp=1;
            for(int i=0;i<m;i++,temp++)
            {
                cout<<temp<<" ";
                if(temp==p)
                    temp=0;
            }
        }else if(p==1 && m==1)
            cout<<"1";
        else
            cout<<"-1";

        cout<<endl;

    }

}