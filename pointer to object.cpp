/*pointers to object
it is just like you created pointer to an int or char
it can access public members of class
by "->" method
*/
#include<iostream>
using namespace std;
class item
{
	int code;
	float price;
	public :
		void getdata(int a,int b)
		{
			code=a;
			price=b;
		}
		void putdata()
		{
			cout<<"\n\n"<<"code:"<<code<<"\tprice:"<<price;
		}
};
int main()
{
	item *p=new item[3];
	item *d;
	d=p;
	int x,y;
	for(int i=0;i<3;i++)
	{
		cout<<"Enter price and code code "<<i+1<<"th item";
		cin>>x>>y;
		p->getdata(x,y);
		p++;
	}
	for(int i=0;i<3;i++)
	{
		d->putdata();
		d++;
	}
	
	return 0;
}
