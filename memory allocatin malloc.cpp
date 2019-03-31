/*dynemic memory allocation
three functions:
1.malloc-allocates a memory block
	syntex : ptr = (cast_type*) malloc(int*sizeof(datatype));
	Garbage value initially
	null if insufficient memory 
2.calloc-in next file
	allows multiple blocks of req. memory
	initializes to 0;
	null if insufficient space
	syntex : ptr = (cast-type*)calloc(int,sizeof(datatype));
3.Realloc-if memory is not sufficient we can re-alloc using this function
	it changes memory size;
	syntex : ptr = realloc(ptr,new_size);		new_size=int*datatype
4.free-free memory block
	frees the memory within the middle of the program
	syntex : free (ptr);
header files:stdlib.h,malloc.h
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int i,n,*ptr;
	cout<<"Enter no of items";
	cin>>n;
	ptr = (int*) malloc(n*sizeof(int));		//allocates n*int size to ptr pointer
	//ptr = (int*)calloc(n,sizeof(int));  	//both does same thing
	cout<<"\nEnter elements";
	int sum=0;
	for(i=0;i<n;i++)
	{
		cin>>*(ptr+i);
		sum=sum+*(ptr+i);
	}
	cout<<"\n\narray is:";
	for(i=0;i<n;i++)
	{
		
		cout<<*(ptr+i)<<",";
	} 
	free(ptr);
	cout<<"\nsum is "<<sum;
	return 0;
}
