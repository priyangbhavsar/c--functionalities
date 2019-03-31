#include<iostream>
using namespace std;
class gates
{
	protected :
	int n1,n2,n3;
	public :
		void get(int a,int b,int c)
		{
			n1=a,n2=b,n3=c;
		}
		virtual void out(){}
};
class andgate : public gates
{
	public :
		void out()
		{
			if(n1==0 || n2==0 || n3==0 )
			{
				cout<<0;
			}
			else cout<<1;
		}
};
class orgate : public gates
{
	public :
		void out()
		{
			if(n1==1 || n2==1 || n3==1 )
			{
				cout<<1;
			}
			else cout<<0;
		}
};
int main()
{
	andgate a;
	orgate b;
	a.get(1,0,1);
	b.get(1,0,1);
	gates* list[2];
	list[0]=&a;
	list[1]=&b;
	cout<<"\n";
	list[0]->out();
	cout<<"\n";
	list[1]->out();
	return 0;
}
