#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,m,n;
    cin>>t;
    for(int x=0;x<t;x++)
    {
        cin>>n>>m;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            
            for(int j=0;j<m;j++)
            {
                if(flag==0)
                {
                    cout<<"B";
                    flag=1;
                }
                else if(flag==1)
                {
                    if(i==n-1 && (n*m)%2==0 && j==0 &&m%2==1)
                    {
                        cout<<"B";
                        flag=0;
                    }
                    else if(i==n-1 && (n*m)%2==0 && j==1 &&m%2==0)
                    {
                        cout<<"B";
                        flag=0;
                    }
                    else
                    {
                        cout<<"W";
                        flag=0;
                    }
                    
                }
               
            }
            cout<<endl;
            
        }

    }
    return 0;
}