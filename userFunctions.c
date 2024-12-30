#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include "userFunctions.h"  
#include "datatypes.h"  

#define MAX_USERS 100 

User users[MAX_USERS]; 
int userCount = 0;  
void displayMenu() {  
    printf("\n*** BANK User Management System Using C***\n");  
    printf("	CHOOSE YOUR ROLE  \n");  
    printf("==============================\n");  
    printf("[1] Admin\n");  
    printf("[2] User\n");  
    printf("[0] Exit the Program\n"); 
    printf("==============================\n");  
    printf("Enter Your Choice: ");  
}  

void addUser() {  
    if (userCount < MAX_USERS) {  
        User newUser;  
        newUser.id = userCount + 1;  
        printf("Enter name: ");  
        scanf("%s", newUser.name);  
        printf("Enter email: ");  
        scanf("%s", newUser.email);  
        printf("Enter phone: ");  
        scanf("%s", newUser.phone);  
        newUser.isLocked = 0; 

        users[userCount] = newUser; 
        userCount++;  
        printf("User added successfully!\n");  
    } else {  
        printf("User limit reached!\n");  
    }  
}  

void displayAllUsers() {  
    if (userCount == 0) {  
        printf("No users found!\n");  
        return;  
    }  

    printf("\n*** User List ***\n");  
    printf("+----+---------------+--------------------+------------+\n");  
    printf("| ID | Name          | Email              | Phone      |\n");  
    printf("+----+---------------+--------------------+------------+\n");  
    for (int i = 0; i < userCount; i++) {  
        printf("| %-2d | %-13s | %-18s | %-10s |\n",   
               users[i].id,   
               users[i].name,   
               users[i].email,   
               users[i].phone);  
    }  
    printf("+----+---------------+--------------------+------------+\n");  
}
