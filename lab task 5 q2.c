#include<stdio.h>
#include<string.h>
int main(){
	int age;
	char gender[20];
	printf("Enter your age and gender: ");
	scanf("%d %s", &age, gender);
	if(age >= 18 && (strcmp(gender, "Male")==0))
	  printf("Adult Male");
	else if(age >= 18 && (strcmp(gender, "Female")==0))
	  printf("Adult Female");
	else
	  printf("Minor");
	
}
