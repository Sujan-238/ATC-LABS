#include <stdio.h>

int main() {
    char ch;
    int lines=0, words=0, chars=0, inWord=0;

    while((ch=getchar())!=EOF) {
        chars++;
        if(ch=='\n') lines++;
        if(ch==' ' || ch=='\n' || ch=='\t')
            inWord=0;
        else if(inWord==0) {
            inWord=1;
            words++;
        }
    }

    printf("Lines: %d\nWords: %d\nCharacters: %d\n", lines, words, chars);
    return 0;
}