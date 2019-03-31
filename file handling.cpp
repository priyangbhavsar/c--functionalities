/*
working with files
we have pdf in this folder & books folder :-)


*/
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	fstream f;
	f.open("file.txt");
	cout<<"Enter your name:\n";
	char data[100];
	cin.getline(data,1000);
	f<<data<<endl;
	cout<<"Enter your age:\n";
	int i;
	cin>>i;
	f<<i<<endl;
	cout<<"\n\n\nReading from file...";
	f>>data;
	cout<<data<<"\n";
	f>>i;
	cout<<i;
	f.close();
	return 0;
}
