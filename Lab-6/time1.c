#include<stdio.h>
void main(){
	int H,M,S;
	printf("Enter number of second : ");
	scanf("%d",&S);
	H = S/3600;
	M = (S%3600)/60;
	S = (S%3600)%60;
	printf("S = %d:%d:%d",H,M,S);
}
