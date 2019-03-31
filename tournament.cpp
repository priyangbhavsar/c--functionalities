#include<iostream>
using namespace std;
int main()
{
	long long int a[200000];
	long long int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		//	cout<<"\n\n\n"<<i<<" "<<j;
			sum=sum+((a[i]>a[j])?(a[i]-a[j]):(a[j]-a[i]));
		}
	}
	cout<<"\n"<<sum;
	return 0;
}
