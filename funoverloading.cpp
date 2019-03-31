#include<iostream>
using namespace std;
class abc
{
	public:
	void fun(){cout<<"\nno parameters";}
	int fun(int i){cout<<"\none parameter";return i;}
	int fun(int i,int j){cout<<"\ntwo parameters";return i;}
	int fun(int i,int j,int k){cout<<"\nthree parameters";return i;}
	float fun(int i,double j){cout<<"\none is int and 2nd is double";return j;}
};
int main()
{
	abc a;
	float h;
	a.fun();
	h=a.fun(10);
	h=a.fun(20,10);
	h=a.fun(10,2,3);
	h=a.fun(1,1.89);
	return 0;
}
	
