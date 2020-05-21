#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a;
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
        vector<int> B(n,0);
        int step=1;
       

        while(step<=n)
        {
            std::vector<int>::iterator itr = std::find(A.begin(), A.end(), step);
            int index=std::distance(A.begin(),itr);
            if(index==n-1)
            {
                B[n-1]=1;
            }
            else if(index!=n-1)
            {
                int temp,count=0;
                for(int j=step;j<n;j++)
                {
                    if(B[j]==0)
                    {
                        temp=j;
                        count=count+1;
                        break;
                        
                    }
                }
                if(count==0)
                {
                    B[index]=1;
                }
                else if(count>0)
                {
                    std::vector<int>::iterator itr = std::find(A.begin(), A.end(), step+1);
                    int indexnext=std::distance(A.begin(),itr);
                    //int indexnext=std::distance(A.begin(),step+1);
                    if(temp==indexnext)
                    {
                        B[index]=1;
                        //continue;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                        break;
                    }
                    
                }
            }
            step=step+1;
            
        }
        if(step==n+1)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
