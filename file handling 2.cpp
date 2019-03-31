#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream outf("data.txt");
	cout<<"Enter item name:\n";
	char name[30];
	cin>>name;
	outf<<name<<"\n";
	cout<<"enter cost\n";
	char cost[30];
	cin>>cost;
	outf<<cost<<"\n";
	outf.close();
	return 0;
}
