#include <stdio.h>

int main() {
    printf("Before Optimization:\n");
    printf("t1 = b + c\n");
    printf("t2 = b + c\n");

    printf("\nAfter Optimization:\n");
    printf("t1 = b + c\n");
    printf("t2 = t1\n");

    return 0;
}