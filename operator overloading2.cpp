#include<iostream>
using namespace std;
class abc
{
	int a;
	public :
		friend istream & operator >> (istream &din,abc z)
		{
			din>>z.a;
		}
		
		friend ostream & operator << (ostream &dout , abc z)
		{
			cout<<"\n\n\n"<<(z.a);
		}
};
int main()
{
	abc v;
	cin>>v;
	cout<<v;
	return 0;
}
