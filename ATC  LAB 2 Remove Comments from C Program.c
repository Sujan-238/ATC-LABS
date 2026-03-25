#include <stdio.h>

int main() {
    char c, prev = 0;

    while((c = getchar()) != EOF) {
        if(prev == '/' && c == '/') {
            while((c = getchar()) != '\n');
        }
        else if(prev == '/' && c == '*') {
            while(1) {
                if((c = getchar()) == '*' && getchar() == '/')
                    break;
            }
            prev = 0;
        }
        else {
            if(prev)
                putchar(prev);
            prev = c;
        }
    }
    return 0;
}