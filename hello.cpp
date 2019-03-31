#include<iostream>
using namespace std;
int main()
{
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	int x=100000;
	int y=500;
	int n;
	cin>>n;
	int max=0;
	int min=100000;
	int x1,y1;
	while(n--)
	{
		cin>>x1>>y1;
		if(x1>max){max=x1;}
		if(x1<min){min=x1;}
	}
	if((x-max)>min)
	{
		cout<<"\n"<<(x-max)*y;
	}
	else
	{
		cout<<"\n"<<min*y;
	}
	return 0;
}
