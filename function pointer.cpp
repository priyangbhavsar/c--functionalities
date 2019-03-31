//*function pointer example learn it from youtube
#include<iostream>
using namespace std;
typedef void (*funptr)(int ,int);
void add(int a,int b)
{
	cout<<"\n"<<a<<"+"<<b<<"="<<a+b;
}
void sub(int a,int b)
{
	cout<<"\n"<<a<<"-"<<b<<"="<<a-b;
}
int main()
{
	funptr ptr;
	ptr = &add;
	ptr(1,2);
	ptr=&sub;
	ptr(3,4);
	return 0;
}
