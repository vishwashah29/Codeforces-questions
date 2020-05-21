#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        //int sum=0,count=0;
        //vector<vector <int>> A;
        vector<int> flag(n+1,0);
        /*for(int i=0;i<n+1;i++)
        {
            cout<<flag[i]<<" ";
        }
        cout<<endl;*/
        int left=-1;
        for(int i=0;i<n;i++)
        {
            int min=n+1;
            cin>>k;
            
            for(int j=0;j<k;j++)
            {
                cin>>a;
                //cout<<a<<endl;
                if(a<min && flag[a]==0)
                {
                    min=a;
                }
               // A[i].push_back(a);
            }
            //cout<<min;
            if(min==n+1)
            {
                left=i;
            }
            else
            {
                flag[min]=1;
            }
            
           /* for(int i=0;i<n+1;i++)
            {
                cout<<flag[i]<<" ";
            }
            cout<<endl;
            */
        }
        if(left==-1)
        {
             cout<<"OPTIMAL"<<endl;
        }
        else
        {
            cout<<"IMPROVE"<<endl;
            cout<<left+1<<" ";
            for(int i=1;i<=n;i++)
            {
                if(flag[i]==0)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
        
        

    



    }
       return 0;
}