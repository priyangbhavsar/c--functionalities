/*static variable:
if you use so many object,every object has the same value of static variable
defining the variable is out of the class using 
data-type classname :: var = value;*/
//static function:
//can have access to only static variable
//can be called using classname :: function name
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
		}
		static void gtcount()
		{
			cout<<"count :"<<++i<<"\n";
		}
};
int abc :: i=0;
int main()
{
	abc a,b,c;
	
	a.getdata(5);
	a.gtcount();
	abc :: gtcount();
	b.getdata(5);
	abc :: gtcount();
	c.getdata(5);
	abc :: gtcount();
	return 0;
}
