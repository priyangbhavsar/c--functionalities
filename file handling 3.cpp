#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream a("data.txt");
	char v[200],b[200];
	a>>v;
	a>>b;
	cout<<v<<"\n"<<b;
	a.close();
	return 0;
}
