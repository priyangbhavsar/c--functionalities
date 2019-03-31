/*object as argmunt:
two types:
1.pass by value-a copy of the object is passed to the function
do not effect the object
2.pass byrefrance-only address of object is passed to the function
works directly to the actual object
more efficient*/
/*returning object:returning whole object members to the object*/
#include<iostream>
using namespace std;
class abc
{
	int h,m,s;
	public :
		void get(int i,int j,int k)
		{
			h=i;
			m=j;
			s=k;
		}
		abc copy()
		{
			abc d;
			d.h=h;
			d.m=m;
			d.s=s;
			return d;
		}
		void add(abc &d)
		{
			int q=s+d.s;
			d.s=q%60;
			int q1=(m+d.m);
			d.m=(q1+(q/60))%60;
			q=q1+(q/60);
			d.h=(d.h+h+q/60)%24;
		}
		void put()
		{
			cout<<"\ntime is\n"<<h<<":"<<m<<":"<<s;
		}
};
int main()
{
	abc a,b,c;
	a.get(1,55,55);
	b=a.copy();
	a.put();
	b.put();
	a.add(b);
	cout<<"after\n";
	a.put();
	b.put();
	return 0;
}
