#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	cout<<"Enter string:";
	char a[50];
	cin.getline(a,50);
	cout.write(a,strlen(a));
	cout<<"\n\n";
	int i=0;
	
	while(i<strlen(a))
	{
		cout.write(a,i);
		cout<<"\n";
		i++;
	}
	while(i>=0)
	{
		cout.write(a,i);
		cout<<"\n";
		i--;
	}
	return 0;
}
