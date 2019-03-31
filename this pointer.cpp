#include<iostream>
using namespace std;
class abc
{
	int a,b,c;
	public :
		void getdata(int a,int b,int c)
		{
			
			cout<<a<<"..."<<(this->a)<<"\n";
			cout<<b<<"..."<<(this->b)<<"\n";
			cout<<c<<"..."<<(this->c)<<"\n";
			this->a=a;			//it has this pointer unlike java(java has this refrance but c++ have pointer)
			this->b=b;			//this pointer is used to envoking private data of class
			this->c=c;
		}
		void put()
		{
			cout<<"\na:"<<this->a<<"\nb:"<<b<<"\nc:"<<c;
		}
};
int main()
{
	abc a;
	a.getdata(1,2,3);
	a.put();
	return 0;
}
