/*refrances & pointers:
when a variable is declared as a refrance,it acts  as the another name of variable
both can be used to save copies of the big functions
both refrancw and pointers can be used to change the original value of the variable

pointer can be void but refrance can't be void
once a refrance is created it cannot be later made to another while pointer can point to another
rafrence:can't be null									pointers can
rafrence:must be initialized with declaration			pointers : no restriction
synter int& i = j;										syntex : int *p=k;
*/
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

