#include<stdio.h>

//using namespace std;
int fib (int index)
{
	if (index==0)
		return 0;
	else if(index==1)
		return 1;
	return fib(index-1)+fib(index-2);
}
void main()
{
	int input=0;
	printf("Enter the position of fibonacci number");
	scanf("%d",&input);
	printf("%d th fibonacci number is %d",input,fib(input));

}