/*constant with pointers*/
#include<iostream>
using namespace std;
int main()
{
	int  a[5];
	const int *p=&a[0];
	p++;
	int b[5]={50};
	p=&b;
	cout<<"&a[0]:"<<&b<"\np:"<<p;
	return 0;
}
