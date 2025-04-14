#include<stdio.h>
#include<string.h>

int main() {

    char pass[10];
    char email[50];
    char phone[10];

    printf("Enter the email: ");
    fgets(email, 50, stdin);

    printf("Enter the phone number: ");
    fgets(phone, 10, stdin);

    strncpy(pass, email, 4);
    strncat(pass, phone, 5);

    printf("Your password is: %s\n", pass);

    return 0;
}