#include<stdio.h>
void main(){
	float c,f;
	printf("Enter value of f : ");
	scanf("%f",&f);
	c = (f-32)*5/9;
	printf("value of clesius from fahrenheit : %.2f",c);
}
