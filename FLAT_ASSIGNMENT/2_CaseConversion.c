//(2) Case conversion FST - Convert lowercase letters to uppercase (a -> A)
#include <stdio.h>

int main() {
    char input[100], output[100];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", input);

    for(i = 0; input[i] != '\0'; i++) {
        if(input[i] >= 'a' && input[i] <= 'z') {
            output[i] = input[i] - 32;
        } else {
            output[i] = input[i];
        }
    }
    output[i] = '\0';

    printf("Converted string: %s\n", output);

    return 0;
}
