#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isKeyword(char *str) {
    char *keywords[] = {"int","float","if","else","while","return"};
    for(int i=0;i<6;i++)
        if(strcmp(str, keywords[i])==0)
            return 1;
    return 0;
}

int main() {
    char str[50];
    printf("Enter tokens:\n");

    while(scanf("%s", str) != EOF) {
        if(isKeyword(str))
            printf("Keyword: %s\n", str);
        else if(isdigit(str[0]))
            printf("Number: %s\n", str);
        else if(isalpha(str[0]))
            printf("Identifier: %s\n", str);
        else
            printf("Operator/Symbol: %s\n", str);
    }
    return 0;
}