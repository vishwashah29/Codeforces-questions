#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,a;
    cin>>t;
    for(int x=0;x<t;x++)
    {
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            A.push_back(a);
        }
        int max=0;
        int indexmax;
    
        for(int i=0;i<n;i++)
        {
            if(A[i]>max)
            {
                max=A[i];
                indexmax=i;
            }
        }
        
        k=0;
        vector<int> index;
        int attempt=1;
        
here:
        int countleft=0,countright=0;
        vector<int> flag1(n+1,0);
       
        
        for(int i=0;i<max;i++)
        {
            flag1[A[i]]=flag1[A[i]]+1;
        }
        
        for(int j=1;j<=max;j++)
        {
            if(flag1[j]==1)
            {
                countleft=countleft+1;
            }
        }
        
        if(countleft==max)
        {
            vector<int> flag2(n+1,0);
            
            for(int i=max;i<n;i++)
            {
                flag2[A[i]]=flag2[A[i]]+1;
            }
        
            for(int j=1;j<=n-max;j++)
            {
                if(flag2[j]==1)
                {
                    countright=countright+1;
                }
            }
            
            if(countright==n-max)
            {
                k=k+1;
                index.push_back(max);

            }
        }

        if(attempt<2)
        {
            attempt=attempt+1;
            max=n-max;
            goto here;
        }        
        
              
        if(index.size()>0)
        {
            cout<<k<<endl;
            for(int j=0;j<index.size();j++)
            {
                   
                cout<<index[j]<<" "<<n-index[j]<<endl;
            }
                
        }
        else
        {
            cout<<"0"<<endl;
        }


    }
    return 0;
}
	    
	
