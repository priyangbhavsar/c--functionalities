#include<iostream>
using namespace std;
class call
{
	int t;
	public :
		void byvalue(int a,int b)
		{
			t=a;
			a=b;
			b=t;
		}
		void byrefrance(int &a,int &b);
};
void call :: byrefrance(int &a,int &b)
{
	t=a;
	a=b;
	b=t;
}
int main()
{
	call c;
	int a=10,b=20;
	c.byvalue(a,b);
	cout<<"a and b:"<<a<<" "<<b<<"\n";
	c.byrefrance(a,b);
	cout<<"a and b:"<<a<<" "<<b<<"\n";
	return 0;
}
