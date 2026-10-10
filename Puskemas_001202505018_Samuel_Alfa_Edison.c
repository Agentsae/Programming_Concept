#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_BABIES 100


typedef struct 
    {
        char name[50];
        float Height;
        float Weight;
    }Baby;
      
    Baby Data[MAX_BABIES]; 
    int babycount = 0;
    
    void clearinputbuffer() {
        while (getchar() != '\n');
    }


    float inputfloat(const char *prompt) {
        float value;
        int result;
        do {
            printf("%s", prompt);
            result = scanf("%f", &value);
            clearinputbuffer();
            if (result !=1 || value <= 0) {
                printf("Invalid input. Please enter a positive number.\n");
            }
        } while (result != 1 || value <= 0);   
     return value;
    }           
                
    void addbaby() {
        if (babycount >= MAX_BABIES) {
            printf("Maximum number of babies reached.\n");
            return;
            }

            printf("Enter Baby Name:\n");
            fgets(Data[babycount].name, sizeof(Data[babycount].name), stdin);
            Data[babycount].name[strcspn(Data[babycount].name, "\n")] = 0; // Remove newline character
          
            Data[babycount].Weight = inputfloat("Enter Baby Weight (kg):\n");
            Data[babycount].Height = inputfloat("Enter Baby Height (cm):\n");

            babycount++;
            printf("Baby added successfully.\n");
        }

    void listbaby() {
        if (babycount == 0)
        {
            printf("No baby data available.\n");
            return;
        }
        
        printf("\nList Baby\n");
        printf("\nNo    Name       Height (cm)  Weight (kg)\n");
        printf("-----------------------------------------------\n");
        for (int i = 0; i<babycount; i++) {
            printf("%-4d %-5s %12.1f %12.1f\n", i+1, Data[i].name, Data[i].Height, Data[i].Weight);
        }
    }

    void showstatistics() {
        if (babycount == 0) {
            printf("No data available to show statistics.\n");
            return;
        }
       
        float totalHeight = 0.0f;float totalWeight = 0.0f;
        float minHeight = Data[0].Height;float maxHeight = Data[0].Height;
        float minWeight = Data[0].Weight;float maxWeight = Data[0].Weight;

        for (int i = 0; i < babycount; i++) {
            totalHeight += Data[i].Height;
            totalWeight += Data[i].Weight;

            if (Data[i].Height < minHeight) minHeight = Data[i].Height;
            if (Data[i].Height > maxHeight) maxHeight = Data[i].Height;

            if (Data[i].Weight < minWeight) minWeight = Data[i].Weight;
            if (Data[i].Weight > maxWeight) maxWeight = Data[i].Weight;
        }

        printf("\n=== Baby Statistics ===\n");
        printf("Average Height: %.2f cm\n", totalHeight / babycount);
        printf("Average Weight: %.2f kg\n", totalWeight / babycount);
        printf("Minimum Height: %.2f cm\n", minHeight);
        printf("Maximum Height: %.2f cm\n", maxHeight);
        printf("Minimum Weight: %.2f kg\n", minWeight);
        printf("Maximum Weight: %.2f kg\n", maxWeight);
    }


    int main() {
        int option;
        
        while (1) {
            printf("==== Puskemas Information System ====\n");
            printf("1. Add Baby\n");
            printf("2. List Baby\n");
            printf("3. Show Baby Statistics\n");    
            printf("4. Exit\n"); 
            printf("Choose 1-4:\n");
            scanf("%d", &option);
            clearinputbuffer();

            switch (option) {
                case 1:
                    addbaby();
                    break;
                
                case 2:
                    listbaby();
                    break;

                case 3:
                    showstatistics();
                    break;

                case 4:
                    printf("Exiting the program.\n");
                    return 0;
                default:
                    printf("Invalid choice. Please choose a number 1-4.\n");
            }
        }
    }