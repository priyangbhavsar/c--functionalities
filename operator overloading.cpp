/*operator overloading :
two types:
1 unary:
1.no empty constructor needed
2.should not be any return  type or parameter needed
statement like s2=-s1 will not work here
2.binary:
not unary is binary but there are both should be false 
*/
#include<iostream>
using namespace std;
class complex
{
	int r,i;
	public :
		complex(){}
		complex(int q,int j)
		{
			r=q;i=j;
		}
		void operator --();			//unary
		complex operator +(complex);
		inline void display()
		{
			cout<<"\n"<<r<<"+"<<i<<"i";
		}
};
void complex :: operator --()
{
	r=r-1;
	i=i-1;
}
complex complex :: operator +(complex x)
{
	complex y;
	y.r=r+x.r;
	y.i=i+x.i;
	return y;
}
int main()
{
	complex c1(1,2),c2(3,4);
	c1.display();
	--c1;
	cout<<"\nafter-- operation";
	c1.display();
	c2.display();
	complex c3;
	c3=c1+c2;
	cout<<"\n after addition..";
	c3.display();
	return 0;
}
