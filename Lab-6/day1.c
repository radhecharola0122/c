#include<stdio.h>
void main(){
	int Y,W,D;
	printf("Enter number of day : ");
	scanf("%d",&D);
	Y = D/365;
	W = (D%365)/7;
	D = (D%365)%7;
	printf("D = %d:%d:%d",Y,W,D);
}
