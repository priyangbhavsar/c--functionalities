#include<iostream>
using namespace std;
int main()
{
	cout<<"\n------program 1------\n";
	cout.fill('*');			//to set default char to show
	cout.setf(ios :: left ,ios :: adjustfield);		//adjust field to left
	cout.width(15);		//you should know
	cout<<"Table 1"<<" \n";
	
	cout<<"\n------program 2-------\n";
	cout.fill('0');
	cout.precision(3);		//12.123456  shows 12.123
	cout.setf(ios :: showpoint);	//is not working here bus used to show trailing 0s
	cout.setf(ios :: internal , ios :: adjustfield);	//google :-(
	cout.setf(ios :: scientific ,ios :: floatfield);	//turn to scientific notation
	cout.width(15);			
	cout<<-12.54567<<"\n\n";
	
	
	cout.setf(ios :: showpos);
	cout.setf(ios :: showpoint);
	cout.setf(ios :: internal , ios :: adjustfield);
	cout.setf(ios :: fixed ,ios :: floatfield);		//simple notation
	cout.width(15);
	cout<<12.54567<<"\n\n";
	
	cout.setf(ios :: internal , ios :: adjustfield);
	cout.setf(ios :: hex ,ios :: basefield);		//changes base to hex
	cout.width(15);
	//cout<<"hex:\n";
	cout<<-12.54567<<"\n\n";
	
	cout.setf(ios :: internal , ios :: adjustfield);
	cout.setf(ios :: oct ,ios :: basefield);
	cout.width(15);
//	cout<<"octal:\n";
	cout<<-12.54567<<"\n\n";
	
	return 0;
}
