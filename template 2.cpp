#include<iostream>
using namespace std;
int a[20];
template <class u>
class stack
{
	int top;
	public :
		stack (){top=-1;}
		void push(u k)
		{
			if(top<20)
			{
				top++;
				a[top]=k;
			}
		}
		u pop()
		{
			if(top>=0)
			{
				return a[top--];
			}
		}
};
int main()
{
	stack <int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	cout<<(s.pop());
	return 0;
}
