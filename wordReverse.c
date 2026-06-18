#include <stdio.h>
#include <string.h>

void reverseWord(char *str) {
    int i = 0, j = 0; 
    int len = 0;
    
    while (str[i++] != '\0') {
        len++;
    }

    for (i = 0, j = (len - 1); i < j; i++, j--) {
        str[i] ^= str[j];
        str[j] ^= str[i];
        str[i] ^= str[j];
    }
}

int main()
{
    char ptr[] = "abcdefgh";
    printf("Original String -> %s\n", ptr);
    reverseWord(ptr);
    printf("Reversed String -> %s\n", ptr);
    return 0;
}