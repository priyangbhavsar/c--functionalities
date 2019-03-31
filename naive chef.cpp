#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n>>a>>b;
		int x[n];
		float a1=0,b1=0;
		for(int i=0;i<n;i++)
		{
			cin>>x[i];
			if(x[i]==a){a1++;}
			if(x[i]==b){b1++;}
		}
		cout<<"\n"<<float((a1*b1)/(n*n))<<"\n";
	}
	return 0;
}
