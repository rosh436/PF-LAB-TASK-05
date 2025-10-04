#include<stdio.h>
int main(){
    int continentChoice, countryChoice;

    printf("Select a continent:\n");
    printf("1. Asia\n");
    printf("2. Europe\n");
    printf("Enter choice (1-2): ");
    scanf("%d", &continentChoice);

    switch (continentChoice) {
        case 1: 
            printf("You selected Asia\n");
            printf("Select a country:\n");
            printf("1. Pakistan\n");
            printf("2. India\n");
            printf("Enter choice (1-2): ");
            scanf("%d", &countryChoice);

            switch (countryChoice) {
                case 1:
                    printf("You selected Pakistan\n");
                    break;
                case 2:
                    printf("You selected India\n");
                    break;
                default:
                    printf("Invalid country selection");
            }
            break;

        case 2: 
            printf("You selected Europe \n");
            printf("Select a country: \n");
            printf("1. France\n");
            printf("2. Germany\n");
            printf("Enter choice (1-2): ");
            scanf("%d", &countryChoice);

            switch (countryChoice) {
                case 1:
                    printf("You selected France\n");
                    break;
                case 2:
                    printf("You selected Germany");
                    break;
                default:
                    printf("Invalid country selection");
            }
            break;

        default:
            printf("Invalid continent selection");
    }

}

					
		
	

