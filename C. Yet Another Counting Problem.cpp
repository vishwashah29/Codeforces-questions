#include<bits/stdc++.h>
using namespace std;
 
int fintgcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    else if(b==0)
    {
        return a;
    }
    else if(a==b)
    {
        return a;
    }
    else
    {
        if(a>b)
            return(gcd(a-b,b));
        return(gcd(a,b-a));
    }
}
 
int main()
{
   int t;
   int a,b,q,l,r;
   cin>>t;
   while(t--)
   {
       cin>>a>>b>>q;
       int gcd=findgcd(a,b);
       int lcm=(a*b)/gcd;
       vector<int> A(q,0);
       for(int i=0;i<q;i++)
       {
           cin>>l>>r;
           if(r<b)
           {
               A.push_back(0);
           }
           else
           {
               int count=0;
               if(r<lcm) (count=r-b+1);
               else
               {
                   for(int j=lcm;j<=r;j=j+lcm)
                   {
                        if(j>=l)
                        {
                            for(int k=0;k<b;k++)
                            {
                                if((j+k)<=r) count++;
                            }
                        }
                       
                   }
               }
               A.push_back(count);
               
           }
          
       }
       for(int i=0;i<q;i++)
       {
            cout<<A[i]<<" "<<;
       }
       cout<<endl;
   }
   
    
   
   
        
   
   
    return 0;
}
