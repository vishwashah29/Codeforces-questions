#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            A.push_back(a);
        }
        sort(A.begin(),A.end());
        int left=0;
        int right=n-1;
        vector<int> B;
        int flag=0;;
        while(left<right)
        {
            if(flag==0)
            {
                B.push_back(A[left]);
                left=left=1;
                flag=1;
            }
            else if(flag==1)
            {
                B.push_back(A[right]);
                right=right-1;
                flag=0;
            }
        }
        reverse(B.begin(),B.end());
        for(i=0;i<n;i++)
        {
            cout<<B[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}