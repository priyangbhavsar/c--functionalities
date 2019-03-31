#include<iostream>
using namespace std;

class abc
{
	int x,y,z;
	public :
		abc(int g,int h,int i)
		{
			x=g,y=h,z=i;
		}
		void operator ++ ();
		void operator +=(int);
		bool operator ==(abc b);
		void display()
		{
			cout<<"\nx:"<<x<<"\ny:"<<y<<"\nz:"<<z;
		}
};
void abc :: operator ++ ()
{
	x=x+1;
	y=y+1;
	z=z+1;
}
void abc :: operator += (int t)
{
	x+=t;
	y+=t;
	z+=t;
}
bool abc :: operator == (abc b)
{
	if(x==b.x && y==b.y && z==b.z)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	abc s(1,2,3);
	abc v(3,4,5);
	s.display();
	v.display();
	++s;
	v+=2;
	s.display();
	v.display();
	cout<<"\n\n\n"<<(s==v);
	return 0;
}
