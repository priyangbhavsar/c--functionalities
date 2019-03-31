/*pointer to derived classes:
if there is class d : public b
than pointer of type d can be modified as pointer of return type b
eg.d *p;  p=&b is totally valid
it cannot access any original member of d;
it can only access the members which are inherited to it

vertual function:
if you want to access the function that's where the vertual fun comes in picture.
*/
#include<iostream>
using namespace std;
class bc
{
	public :
		int b;
		void show()
		{
			cout<<"b="<<b<<"\n";
		}
		virtual void print()
		{
			cout<<"b="<<b<<"\n";
		}
};
class dc : public bc
{
	public :
		int d;
		void show(){	cout<<"d="<<d<<"\n";}
		
		void print()
		{
			cout<<"d="<<d<<"\n";
		}
};
int main()
{
	bc a;
	dc c;
	bc *p;
	p=&a;
	p->b=10;
	p->show();
	p=&c;
/*	p->d=20	*/	//won't work
	cout<<" \n\np->d=20		//won't work\n";
	p->b=40;
	p->show();
	//\nafrer using (dc*) to convert the type of pointer you can use the methods in d
	cout<<"\n\nafrer using (dc*) to convert the type of pointer you can use the methods in d\n";
	((dc*)p)->d=400;
	((dc*)p)->show();
	
	p=&c;
	p->print();//vertual function effect;
	p=&a;
	p->print();
	
	
	return 0;
}
