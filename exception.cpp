//Exception handling
#include<iostream>
using namespace std;
void acv(int);
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int d;
	try{
		if(c==b){throw c;}
	d=a/(c-b);
	cout<<" \nd  = "<<d<<"\n";
	acv(d);
	}catch(...){cout<<"Exception";}
	return 9;
}

#include<math.h>
void acv(int d){cout<<sqrt(d);}

