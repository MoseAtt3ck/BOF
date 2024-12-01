#include <stdio.h>
#include <string.h>

void bof() {
    char buffer[10]; 

    printf("Enter a string: ");
    gets(buffer); 

    printf("You entered: %s\n", buffer);
}

int main() {
    bof();
    return 0;
}

