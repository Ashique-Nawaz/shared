/*
 *
 *	program to find sub-sequence with maximum sum in the array
 *
 */


 #include<stdio.h>
 #include<stdlib.h>

 void maxSubSeq(int start, int end, int *ary, int startSub, int endSub){
 	if(start == end){
	 	startSub=start;
	 	endSub = start;
	}
 					
 }

 int fun(int beg,int end,int* ary,int begSubSeq,int endSubSeq,int callType){

 	// if it is the last element in the array make begSubSeq = endSubSeq = beg
 	// else 6 int variables required :- begSubSeqL, endSubSeqL, begSubSeqR, endSubSeqR , sumL , sumR
 	// sumL=fun(with parameters for left half)
 	// sumR=fun(with parameters for right half)
 	



 }

 void main(){
 	int aryLen=0;										//take the length of the array (integer)
 	int startSubString=0,endSubString;					//Starting (=0) and ending index of the substring of array to be found
 	printf("Enter the length of the array : \t");		//prompt to enter the length of the array 
 	scanf("%d",&aryLen);								//read length of the array from the console
 	endSubString=aryLen;								//ending index of the substring to be found is initialized to aryLen
 	int * ary = (int *) malloc(aryLen*sizeof(int));		//creating an array for input
 
 	printf("Enter the elements in the array \n");		//prompt to enter the content of the array
 	for(int i=0;i<aryLen;i++)							//loop to read input into the array	
 		scanf("%d",ary[i]);								//read individual input into file



 	// make a function call to find the sequence which return the sum of that max subSequence
 	// parameters to which can be 
 	//	1)the start and the end index of the array
 	//	2)ary itself
 	//	3)startindex and endindex of the subsequence to be found (initially equal to the start and end index of the array respectively)
 	//	4)-1 to mark that it is the first call to function


 	
 	//older function implementation
 	maxSubSeq(0,aryLen,ary,startSubString,endSubString);

 	free(ary);											//free the array being created
 }