/*friend function:
can access the private function throw outside of the class
declaration done in a class friend return-type name(obj);
if this function want to access two classes private member than declar it in only one of them
cannot be called during the obj of the class
can be called as normal function 
it cannot use private member directly  you have to use dot method like class.var
usually it is an obj as an argument
and if the fun has argument it can be passed by value and refrance*/
#include<iostream>
using namespace std;
class abc;
class xyz
{
	int x,y;
	public :
		void set(int x1,int y1)
		{
			x=x1;y=y1;
		}
		friend void add(xyz,abc);
};
class abc
{
	int a,b;
	public :
		void set(int a1,int b1)
		{
			a=a1;b=b1;
		}
		friend void add(xyz,abc);
};
void add(xyz p,abc q)
{
	cout<<p.x+p.y+q.a+q.b;
}
int main()
{
	xyz g;
	abc h;
	g.set(1,2);
	h.set(9,0);
	add(g,h);
	return 0;
}
