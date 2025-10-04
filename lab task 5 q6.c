#include<stdio.h>
int main(){
	int a=5,b,c;
	printf("The value of a is %d\n", a);
	c=a++; 
	printf("The value of a after post increment is %d\n", c); //the value is first stored then incremented, a=6
	b=++a;
	printf("The value of a after pre increment is %d\n", b); //a=7
}
