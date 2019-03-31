//book details-gtu,2015
#include<iostream>
using namespace std;
class book
{
	string title,author;
	int edition,price,copies;
	public :
	book(){}
	void get(string s1,string s2,int i,int j,int k)
	{
		title=s1;
		author=s2;
		edition=i;
		price=j;
		copies=k;
	}
	void display()
	{
		cout<<"title:"<<title<<"\nAuthor:"<<author<<"\nedition:"<<edition<<"\nprice:"<<price<<"\ncopies:"<<copies;
	}
	void find(int i)
	{
		if(price<i)
		{
			display();
		}
	}
};
int main()
{
	book b[3];
	for(int q=0;q<3;q++)
	{
		cout<<"Enter title,author,edition,price,copies of "<<q+1<<"th book";
		string s1,s2;
		int i,j,k;
		cin>>s1>>s2>>i>>j>>k;
		b(s1,s2,i,j,k);
	}
	cout<<"\n\n\n";
	for(int q=0;q<3;q++)
	{
		b[q].find(200);
	}
	return 0;
}
