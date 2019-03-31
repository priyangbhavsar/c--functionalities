#include<iostream>
using namespace std;
class bird
{
	string name;
	int weight;
	public :
	bird(){}
	bird(string s1,int i){name=s1,weight=i;}
	int operator >= (bird b1);
};
int bird :: operator >= (bird b1)
{
	if(weight>=b1.weight)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	bird b1("a",0);
	bird b2("b",15);
	cout<<(b1>=b2);
	return 0;
}
