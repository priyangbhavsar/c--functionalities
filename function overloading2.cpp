#include<iostream>
using namespace std;
class abc
{
	protected :
		int i;
	public :
	
	abc(int a){i=a;}
	void operator = (int t)
	{
		i=t;
	}
	void display(){cout<<i<<"\n";}
};
int main()
{
	abc a(10);
	a.display();
	a=20;
	a.display();
	return 0;
}
