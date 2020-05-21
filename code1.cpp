#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int T,n,a;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>n;
		vector<int> A;
		int sum=0;
		for(int j=0;j<a;j++)
		{
			cin>>a;
			A.push_back(a);
		}
		int max=A[0];
		sum=A[0];
		int flag;
		if(max>0)
		{
			flag=1;
		}
		if(max<0)
		{
			flag=0;
		}
		for(int j=1;j<n;j++)
		{
			if(A[j]>max && flag==1)
			{
				sum=sum-max+A[j];
				max=A[j];
				
			}
			else if(A[j]>max && flag==0 && A[j]<0)
			{
				sum=sum-max+A[j];
				max=A[j];
			}
			else if(A[j]>max && flag==0 && A[j]>0)
			{
				sum=sum+A[j];
				flag=1;
				max=A[j];
			}
			else if(A[j]<0 && flag == 1 && j!=n-1)
			{
				sum=sum+A[j];
				flag=0;
				max=A[j];
			}
		}
		
		cout<<sum<<endl;
		
		
	}

	return 0;
}