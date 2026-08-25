#include<stdio.h>
int main() {
    char c;
    printf("enter a character: ");
    scanf("%c", &c);
    if(c>= 'a' && c<= 'z') {
        c = c - 32;
    }
    printf("uppercase character: %c", c);
    return 0;
}