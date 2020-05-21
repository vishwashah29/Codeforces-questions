#include<bits/stdc++.h>
using namespace std;

int binary_search(int left,int right,int value,vector<long long int> sum)
{
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(sum[mid]==value) return sum[mid]%10;
        else if(sum[mid]>value)
        {
            left=mid+1;
            binary_search(left,right,value,sum);
        }
        else
        {
            right=mid-1;
            binary_search(left,right,value,sum);
        }
        
    }
    return -1;
}

int main()
{
    int n,a;
    
        cin>>n;
       
        vector<int> A;
        
        for(int i=0;i<n;i++)
        {
            cin>>a;
            A.push_back(a);
            
        }
       
        long long int total=0;
        
        
        vector<long long int> sum(n,0);
        vector<long long int>::iterator temp;
        
        sum[0]=A[0];
        
        for(int i=1;i<n;i++)
        {
           sum[i]=sum[i-1]+A[i];
        }
        
       
        
        temp=find(sum.begin(),sum.end(),0);
        total=total+(temp-sum.begin());
        
        int temp2=(A[0]*10),temp3;
        
        for(int i=0;i<n;i++)
        {
            sum[i]=sum[i]*10 + i;
        }
        sort(sum.begin(),sum.end());
        
        for(int i=1;i<n;i++)
        {
            temp3=binary_search(0,n-1,temp2,sum,i);
            if(temp3==-1 || temp3<i)
            {
                total=total+n-i;
            }
            
            else
                total=total+temp3-i;
            
            temp2=temp2+(A[i]*10 + i);
        }
        
        
        cout<<total<<endl;
    
   
    return 0;
}
