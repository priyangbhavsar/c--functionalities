#include<iostream>
using namespace std;
class item
{
	protected :
		string name;
		int cost,code,discount;
	public :
	void get1(string s,int i,int j,int k)
	{
		name=s;
		cost=j;
		code=i;
		discount=k;
	}
	
};
class emp : item
{
	private :
		string emp-name;
		int emp-code,amount;
	public :
		void get(string s,int i,int j)
		{
			emp-name=s;
			emp-code=i;
			amoun=j;
		}
};
class cust : item
{
	private :
	string c-name,c-amount;
	public :
	void get(string s)
	{
		c-name=s;
	}
	void calc()
	{
		c-amount = cost - discount*0.01;
	}
}
