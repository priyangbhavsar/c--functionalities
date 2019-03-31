/*inheritance has 5 types:
1.single inheritance class abc : public xyz;

2.hierarchicle inheritance-class abc : public xyz ; class qwe : public xyz;

3.multilevel inheritance-class abc : public xyz;class qwe : public abc;

4.multiple inheritance-class p : public m,public n;

5.hybrid inheritance - it made if two or more above inheritance are combined.

derivation has three types

1.class abc : public xyz-public derivation
	in this ,public & protected members of base class(xyz) becomes public members of derived class(abc)
2.class abc : private xyz - private derivation
	in this ,public members of base class(xyz) becomes private members of derived class(abc)
	they cannot be called by object and dot operator of derived class
3.class abc : xyz-default derivation

Accesibilities of base class
1.public - can be accessable by inherited class , (main and all other classes by object)
2.protected-can be accessible by inherited class but not by object.
3.private-can not be inherited	

if you call the function in derived class if it is not avalible than it will find the 
function is base class public department
*/
#include<iostream>
using namespace std;
class b;
class a 
{
	protected :
	int a;
	public :
		int b;
		void seta(int i)
		{
			cout<<"class a function is called";
			a=i;
		}
};
class b : public a
{
	protected :
	int c;
	public:
		b(){cout<<"constructure of b";}
		void setab(int g){a=g;cout<<"class b is called";}
		~b(){
		cout<<"\n"<<a;
	}
};
int main()
{
	b a1;
	a1.seta(10);
	return 0;
}
