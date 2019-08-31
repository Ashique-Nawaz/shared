#include<stdio.h>
#include<stdlib.h>

//using namespace std;
int fib (int * ary,int index)
{
	if (index==0||index==1)
		return index;
	
	if (ary[index] != 0)
		return ary[index];
	return ary[index]=fib(ary,index-1)+fib(ary,index-2);
}
void main()
{
	int input=0;
	printf("Enter the index of fibonacci number (indexing starts from 1)");
	scanf("%d",&input);
	int * ary = malloc(input*sizeof(int));
	

	for(int i = 0; i<input ; i++)	ary[i]=0;
	
	printf("%d th fibonacci number is %d\n",input,fib(ary,input-1));

	free(ary);
}