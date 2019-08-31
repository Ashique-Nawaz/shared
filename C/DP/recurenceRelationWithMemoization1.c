/*
 *
 *	code for the recurrence relation:
 *										T(0)=T(1)=2 and T(n) = Sumation i(1 to n) 2*T(i)*T(i-1), for n >1
 *										T(n) can be re-written as : T(n) = T(n-1)+2*T(n-1)*T(n-2) along with T(2)=2*T(1)*T(0)					
 *
 */


#include<stdio.h>
#include<stdlib.h>

double T(int n,double * ary){
	if(n==0||n==1)	return ary[n]=2;
	if(n==2) return ary[n]=8;
	if(ary[n]!=0)	return ary[n];	
	/*for(int i =0;i<n;i++){
		ary[n] = ary[n]+(2*T(i,ary)*T(i-1,ary));
	}*/
	ary[n] = T(n-1,ary) + 2*T(n-1,ary)*T(n-2,ary);

	return ary[n];
}

void main(){
	int n=0;
	printf("Enter the value of 'n':\t");
	scanf("%d",&n);
	if(n<0){
		printf("Value of 'n' is too small to compute T(n) !\n");
		return;
	}
	double * ary = (double *) malloc((n+1)*sizeof(double));
	for(int i=0;i<n;i++){
		ary[i]=0;
	}
	printf("Value of T(n) is : %lf \n",T(n,ary));
	free(ary);
}