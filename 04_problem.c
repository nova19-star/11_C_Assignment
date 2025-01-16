#include <stdio.h>

int main() {
    char str[100];
    int start = 0;
    int end;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[start] != '\0') {
        start++;
    }

    end = start - 1;
    start = 0;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
