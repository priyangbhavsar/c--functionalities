#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class abc
{
	private :
		int n;
		string name;
		
	public :
		void display();
		void getdata();
};
void abc :: display()
{
	cout<<"number :"<<n<<"\nname:"<<name;
}
void abc :: getdata()
{
	cout<<"Enter no and than name:\n";
	cin>>n>>name;
	
}
int main()
{
	abc a;
	a.getdata();
	a.display();
	return 0;
}
	
