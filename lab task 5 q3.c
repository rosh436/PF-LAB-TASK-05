#include<stdio.h>
int main(){
	int deviceChoice;
	int brandChoice;
	printf("Select a Device:\n");
	printf("1. Mobile\n");
	printf("2. Laptop\n");
	printf("Enter the device choice(1-2): ");
	scanf("%d", &deviceChoice);
	
	switch(deviceChoice){
		case 1:
			printf("The device is Phone\n");
			printf("Select a Brand:\n");
			printf("1. Samsung\n");
	        printf("2. Apple\n");
		    printf("Enter the brand choice(1-2): ");
	        scanf("%d", &brandChoice);
			switch(brandChoice){
				case 1:
				    printf("The brand is Samsung\n");
				    break;
				case 2:
					printf("The brand is Apple\n");
					break;
				default:
					printf("Invalid brand choice");
			}
			break;	
		case 2:
		    printf("The device is Laptop\n");
		    printf("Select a Brand:\n");
		    printf("1. Dell\n");
	        printf("2. HP\n");
		    printf("Enter the brand choice(1-2): ");
	        scanf("%d", &brandChoice);
			switch(brandChoice){
				case 1:
				    printf("The brand is Dell");
				    break;
				case 2:
					printf("The brand is HP");
					break;
				default:
					printf("Invalid brand choice");
			}
			break;
		default:
			printf("Invalid device choice");		
			
				
			
			
	}
}
