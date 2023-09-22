#include<stdio.h>
void main(){
	float p,r,t,interest;
	printf("Enter value of p : ");
	scanf("%f",&p);
	printf("Enter value of r : ");
	scanf("%f",&r);
	printf("Enter value of t : ");
	scanf("%f",&t);
	interest = (p*r*t)/100;
	printf("interest : %.2f",interest);
	}
