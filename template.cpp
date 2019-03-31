
//multiple ty
/*
declaration : template<class var>
usedge : classname <datatype> object*/

#include<iostream>
using namespace std;
template <class u>
class abc
{
	private :
		u a[5];
	public :
		void getdata()
		{
			for(int i=0;i<5;i++)cin>>a[i];
		}
		void sort()
		{
			for(int i=0;i<5;i++)
			{
				for(int j=i+1;j<5;j++)
				{
					if(a[i]>a[j])
					{
						u t=a[i];
						a[i]=a[j];
						a[j]=t;
					}
				}
			}
		}
		
		void display()
		{
			for(int i=0;i<5;i++)cout<<"\n"<<a[i];
		}
};
int main()
{
	abc <int> a;
	a.getdata();
	a.sort();
	a.display();
	return 0;
}
