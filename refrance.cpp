#include<iostream>
using namespace std;
int main()
{
	int j=10;
	int *i=&j;
	cout<<j;
	j++;
	cout<<"\n"<<*i;
	(*i)++;
	cout<<"\n"<<j<<"\n"<<(*i);
	return 0;
}
