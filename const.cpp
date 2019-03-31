/*constant : 
keyword const ;
if variable is declared with the const keyword , it cannot be modified within the whole program
syntex:const <datatype> <var_name> = <value>
cannot innitialize without declaration otherwise error genetates
*/
#include<iostream>
using namespace std;
int main()
{
	const int size=10;
	cout<<"Enter 1 to modify";
	int g;
	cin>>g;
	if(g==1){size=0;}	//generates error
	if(size==10)
	{
		size--;		//Generates error;;
	}
	cout<<size;
	return 0;
}
