#include<iostream>
using namespace std;
class shop
{
	int code[1000];
	float price[1000];
	int count;
	public:
		shop(){count=0;}
		void get();
		void displaysum();
		void remove();
		void displayitems();
};
void shop :: get()
{
	char c='y';
	int i=0;
	while(c=='y'){
		cout<<"Enter item code and price"<<endl;
		cin>>code[i]>>price[i];
		i++;
		cout<<"\nWant to add another item? y-yes n-no:";
		cin>>c;
		count++;
	}
}
void shop :: displaysum()
{
	int sum=0;
	for(int i=0;i<=count;i++)
	{
		sum=sum+price[i];
	}
	cout<<"\nsum is :"<<sum;
}
void shop :: remove()
{
	int a;
	cout<<"Enter item code to remove item:";
	cin>>a;
	for(int i=0;i<=count;i++)
	{
		if(code[i]==a)
		{
			int t=code[i];
			code[i]=code[i+1];
			code[i+1]=t;
		}
	}
	count--;
}
void shop :: displayitems()
{
	cout<<"\n\n\n";
	for(int i=0;i<=count;i++)
	{
		cout<<"\nitem code:"<<code[i]<<"\t"<<"price:"<<price[i];
	}
}
int main()
{
	shop s;
	int i;
	while(1)
	{
		cout<<"\n1.add item\n2.display sum\n3.remove item\n4.display item\n5.exit";
		cin>>i;
		switch(i)
		{
			case 1:
				s.get();
				break;
			case 2:
				s.displaysum();
				break;
			case 3:
				s.remove();
				break;
			case 4:
				s.displayitems();
				break;
			case 5:
				return 0;
		}
	}
	return 0;
}
