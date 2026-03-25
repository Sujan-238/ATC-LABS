#include <stdio.h>

int main() {
    printf("Expression: a + b * c\n");
    printf("AST:\n");
    printf("   +\n");
    printf("  / \\\n");
    printf(" a   *\n");
    printf("    / \\\n");
    printf("   b   c\n");
    return 0;
}