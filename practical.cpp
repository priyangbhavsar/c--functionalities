#include<iostream>
using namespace std;
class test;
class result;

class student
{
	int rno;
	string name;
	public :
		void getdata()
		{
			cout<<"ENter roll no and name";
			int i;
			string a;
			cin>>i;
			cin>>a;
			rno=i;
			name=a;
		}
		friend result abc(test,student);
};
class test
{
	int a[5];
	public :
		void getdata()
		{
			cout<<"Enter marks of 5 subjects:";
			for(int i=0;i<5;i++)
			{
				cin>>a[i];
			}
		}
		friend result abc(test,student);
};
class result
{
	int total;
	float ave;
	public :
	void show()
	{
		cout<<"total :"<<total;
		cout<<"\nave:"<<total/5.0;
	}
	friend result abc(test,student);
};
result abc(test t,student a)
{
	result r;
	r.total=0;
	
	for(int i=0;i<5;i++)
	{
		r.total=r.total+t.a[i];
	}
}
int main()
{
	student p;
	test q;
	result v;
	p.getdata();
	q.getdata();
	v=abc(q,p);
	v.show();
	return 0;
}
