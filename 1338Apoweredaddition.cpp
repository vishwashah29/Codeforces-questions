#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        vector<int> A;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            A.push_back(a);
        }
        sort(A.begin(),A.end());
        int count=0;
        if(x<A[0])
        {
            cout<<x;
            //count=count+(A[0]-1);
        }
        else if(x>=A[0])
        {
            count=A[0];
            x=x-A[0]+1;
                
          
               for(int i=1;i<n;i++ && x>0)
               {
                   if(A[i]==A[i-1])
                   {
                       int diff=0;
                   }
                   else
                   {
                       int diff=A[i]-A[i-1]-1;
                   }                   
                   
                   if(x>=diff)
                   {
                       count=A[i];
                       x=x-diff;
                   }
                   else if(x<diff)
                   {
                       count=count+x;
                       x=0;
                   }
               }
            cout<<count<<endl;
        }
       
           
        
        
   }
   return 0;
}