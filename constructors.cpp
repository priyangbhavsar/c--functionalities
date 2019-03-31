/*constructors:
automatically called with object of class
no return type mentioned they cannot return anything
cannot be inherited , can call base class constructor by creating derived class obj
can have default argument
cannot be vertual function
it can be overloaded
functions:
1.with default arguments:name(var1,var2=0)
2.copy constructor:class obj1(obj2);
3.dynemic constructors:research in google
4.multiple constructors in a class
Destructor:
1.it can't have return type or arguments
2.it's name is the class name which is following by a '~' char.   */
#include<iostream>
using namespace std;
class complex
{
	private :
		float r,i;
	public :
		complex(){}
		complex(float a,float b)
		{
			r=a,i=b;
		}
		complex sum(complex y)
		{
			complex c;
			c.r=r+y.r;
			c.i=i+y.i;
			return c;
		}
		inline void display()
		{
			cout<<"\n"<<r<<"+"<<i<<"i";
		}
		~complex()
		{
			cout<<"Distructor called\n";
		}
};
int main()
{
	complex a(1,2);		//implicite constructor
	complex b,c;
	b=complex(3,4);		//explicite constructor
	c=a.sum(b);
	a.display();
	b.display();
	c.display();
	return 0;
}
