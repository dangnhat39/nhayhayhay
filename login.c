#include <stdio.h>  
#include <string.h>  
#include "login.h"  

#define EMAIL "test@gmail.com"  
#define PASSWORD "password" // Thay đổi mật khẩu nếu cần  

int login() {  
    char email[100];  
    char password[100];  

    // Hiển thị giao diện đăng nhập  
    printf("\n*** Bank Management System Using C ***\n");  
    printf("LOGIN\n");  
    printf("==============================\n");  
    printf("Email: %s\n", EMAIL);  
    
    printf("Password: ");  
    // Ẩn mật khẩu khi nhập  
    for (int i = 0; i < 5; i++) {  
        password[i] = getchar();  
        printf("*"); // Hiển thị dấu *  
    }  
    password[5] = '\0'; // Kết thúc chuỗi  

    printf("\n==============================\n");  

    // Kiểm tra thông tin đăng nhập  
    if (strcmp(email, EMAIL) == 0 && strcmp(password, PASSWORD) == 0) {  
        return 1; // Đăng nhập thành công  
    }  
    return 0; // Đăng nhập thất bại  
}