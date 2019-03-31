#include<iostream>
using namespace std;
class abc
{
	static int i;
	int number;
	public :
		void getdata(int p)
		{
			number=p;
			i++;
		}
		static void gtcount()
		{
			cout<<"count :"<<i<<"\n";
		}
};
int abc :: i=0;
int main()
{
	abc a,b,c;
	
	a.getdata(5);
	abc :: gtcount();
	b.getdata(5);
	abc :: gtcount();
	c.getdata(5);
	abc :: gtcount();
	return 0;
}
