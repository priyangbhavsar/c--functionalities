#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream f1;	
	f1.open("file.txt");
	string s;
	f1 >>s;
	f1.close();
	f1.open("file2.txt");
	f1<<s;
	f1.close();
	cout<<s;
	return 0;
}
