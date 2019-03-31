#include<iostream>
using namespace std;
int main()
{
	long long int n;
	long double k;
	cin>>n>>k;
	long double a[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long int count=0;
	for(long long int i=0;i<n;i++)
	{
		for(long long int j=i+1;j<n;j++)
		{
			if(a[i]-a[j]>=k || a[j]-a[i]>=k){count++;}
			
		}
	}
	cout<<"\n"<<count;
	return 0;
}
