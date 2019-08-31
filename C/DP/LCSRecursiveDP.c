#include<stdio.h>
#include<stdlib.h>

int createLcsTable(char* Str1, int beg1, int end1, char* Str2, int beg2, int end2, int ** ary){
	int temp1=0,temp2=0; 
	if(beg1==end1||beg2==end2)	return 0;

	if(ary[beg1][beg2]!=0)
		return ary[beg1][beg2]; 

	if(Str1[beg1]==Str2[beg2]){
		ary[beg1][beg2]= 1 + createLcsTable(Str1,beg1+1,end1,Str2,beg2+1,end2,ary);
	}
	else{
		temp1=createLcsTable(Str1,beg1,end1,Str2,beg2+1,end2,ary);
		temp2=createLcsTable(Str1,beg1+1,end1,Str2,beg2,end2,ary);

		if(temp1>=temp2)
			ary[beg1][beg2]=temp1;
		else
			ary[beg1][beg2]=temp2;
	}
	return ary[beg1][beg2];
}

void printLCS(char* Str1, int beg1, int end1, char* Str2, int beg2, int end2, int ** ary){
	
	if(beg1==end1||beg2==end2)
		return;
	if(Str1[beg1]==Str2[beg2]){
		printf("%c",Str1[beg1]);
		printLCS(Str1,++beg1,end1,Str2,++beg2,end2,ary);
	}
	else{
		if(ary[beg1+1][beg2]>ary[beg1][beg2+1])
			printLCS(Str1,++beg1,end1,Str2,beg2,end2,ary);
		else
			printLCS(Str1,beg1,end1,Str2,++beg2,end2,ary);
	}
}


void main(){
	int String1Len = 0, String2Len = 0, lcsLength=0;
	printf("Enter the length of the first string \n");
	scanf("%d",&String1Len);
	printf("Enter the length of the second string \n");
	scanf("%d",&String2Len);
	int **ary = (int **) malloc((String1Len+1)*sizeof(int*));
	for(int x = 0 ; x<=String1Len;x++){
		ary[x]= malloc((String2Len+1)*sizeof(int));
	}

	char *String1 = malloc(String1Len*sizeof(char)) ;
	char *String2 = malloc(String2Len*sizeof(char)) ;

	for(int i=0;i<=String1Len;i++){
			ary[i][String2Len]=0;
	}
	for(int j=0;j<=String2Len;j++){
			ary[String1Len][j]=0;
	}
	printf("Enter the strings (in space separated format) \n");
	scanf("%s%s",String1,String2);
	


	lcsLength=createLcsTable(String1,0,String1Len,String2,0,String2Len,ary);

	printf("The length of the longest common sub sequence is %d\n",lcsLength);

	for(int k=0 ;k<=String1Len;k++)
	{
		for(int l =0;l<=String2Len;l++)
			printf("%d\t",ary[k][l]);
		printf("\n");
	}
		

	printLCS(String1,0,String1Len,String2,0,String2Len,ary);
	//freed up memory

	for(int y = 0 ; y<=String1Len; y++){
		free(ary[y]);
	}
	free(ary);
	free(String1);
	free(String2);
	
}