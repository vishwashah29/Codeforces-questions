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
        vector<int> flag1(n+1,0);
        k=0;
        vector<int> index;
        for(int i=0;i<n;i++)
        {
            flag1[A[i]]=flag1[A[i]]+1;
            int countleft=0,countright=0;
            for(int j=1;j<=i+1;j++)
            {
                if(flag1[j]==1)
                {
                    countleft=countleft+1;
                }
            }
            if(countleft==i+1)
            {
                //cout<<countleft<<" ";
                vector<int> flag2(n+1,0);
                for(int j=i+1;j<n;j++)
                {
                    flag2[A[j]]=+1;
                }

                for(int j=1;j<=n-i-1;j++)
                {
                    if(flag2[j]==1)
                    {
                        countright=countright+1;
                    }
                }
                if(countright==n-i-1)
                {
                    k=k+1;
                    index.push_back(i+1);

                }
            }
            

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
	    
	
