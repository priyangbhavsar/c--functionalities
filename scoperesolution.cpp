#include<iostream>
using namespace std;
int m=10;
int main()
{
	int m=20;
	{
		int k=m,m=30;
		cout<<"inner block\nk="<<k<<"m="<<m<<"::m=";
		cout<<::m;
	}
	cout<<"\nouter block\n"<<"m="<<m<<"::m=";
	cout<<::m;
	return 0;
}
	
