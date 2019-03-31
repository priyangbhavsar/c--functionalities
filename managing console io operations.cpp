/*managing io console
1.get(char *) , get void and put(char *) methods
2.getline & write function
	cin.getline(char*,int i)-int stands for the lenth of string to be get
                         it terminates while there is '\n' or length is over
	cout.write(char *,int )-string and length
	it will not work with string type variable
3.cout.width(int)-just like setw() command
4.cout.precision(int)-sets floating point digits after .
5.fill(char)-fills left spaces with cout.width command

*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	cout.write("Enter String to be printed using get , put method:\n",strlen("Enter String to be printed using get , put method:\n"));
	char c;
	c=cin.get();
	while(c!='\n')
	{
		cout.put(c);
		cin.get(c);
	}
	cout<<"In other way:";
	cout<<"\n enter string:";
	char g[50];  
	cin.getline(g,50);
	cout.write(g,strlen(g) );
	return 0;
}
