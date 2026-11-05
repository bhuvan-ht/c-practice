#include <stdio.h>

int main() {
    char letter = 'A';
    
    printf("Char: %c, ASCII: %d\n", letter, letter);
    
    printf("Enter a character: ");
    scanf(" %c", &letter);
    
    printf("You entered: %c (ASCII: %d)\n", letter, letter);
    
    return 0;
}
