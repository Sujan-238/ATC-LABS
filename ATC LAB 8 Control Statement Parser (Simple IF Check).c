#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter statement: ");
    fgets(str, sizeof(str), stdin);

    if(strstr(str, "if") && strstr(str, "(") && strstr(str, ")"))
        printf("Valid IF statement\n");
    else
        printf("Invalid statement\n");

    return 0;
}