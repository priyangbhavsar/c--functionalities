//constructiong two dimentional array
#include<iostream>
using namespace std;
class matrix
{
	int **p;
	int d1,d2;
	public :
		matrix(int i,int j);
		void getelement(int i,int j,int value)
		{
			p[i][j]=value;
		}
		int & putelement(int i,int j)
		{
			return p[i][j];
		}
};
matrix :: matrix(int x,int y)
{
	d1=x,d2=y;
	p=new int *[d1];
	for(int i=0;i<d2;i++)
	{
		p[i]=new int[d2];
	}
}
int main()
{
	int m,n;
	cout<<"Enter size of matrix:";
	cin>>m>>n;
	matrix a(m,n);	//constant object - no one can change the value of m and n
	cout<<"\nEnter elements row by row";
	int q,w,e;
	for(q=0;q<m;q++)
	{
		for(w=0;w<n;w++)
		{
			cin>>e;
			a.getelement(q,w,e);
		}
	}
	cout<<"\n";
	for(q=0;q<m;q++)
	{
		for(w=0;w<n;w++)
		{
	
			cout<<a.putelement(q,w)<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
