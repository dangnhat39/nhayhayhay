#include <stdio.h>  
#include <stdlib.h>  
#include "userFunctions.h"  

int main() {  
    int choice;  

    while (1) {  
        displayMenu();  
        scanf("%d", &choice); 

        switch (choice) {  
            case 1:  
                addUser();
                break;  
            case 2:  
                displayAllUsers(); 
                break;  
            case 0:  
                printf("Exiting the program.\n");  
                exit(0); 
            default:  
                printf("Invalid choice! Please try again.\n");  
        }  
    }  

    return 0;  
}