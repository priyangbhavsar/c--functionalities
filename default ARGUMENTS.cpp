/*delault arguments:
a function with default argument can be called with lesser arguments*/
#inlclude<iostream>
using namespace std;
int sum(int a,int b,int c=0 /*c=0 and d=0 are called default argument*/,int d=0){
	return a+b+c+d;
}
int main()
{
	cout<<"\n"<<sum(10,20);
	cout<<"\n"<<sum(10,20,30);
	cout<<"\n"<<sum(10,20,30,40);
	return 0;
}
	
