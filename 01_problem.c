//Write a C program to input a string from the keyboard ex: String - Trident

#include <stdio.h>

int main() {
    int str[100];
    printf("Enter a string: ");
        scanf("%s", str);
    printf("You have input %s",str);
    return 0;
}
