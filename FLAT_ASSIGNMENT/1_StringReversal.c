//(1) String reversal FST - Reverse an input string (Eg: "abc" -> "cba" )
#include <stdio.h>
#include <string.h>

int main() {
    char input[100], output[100];
    int i, len;

    printf("Enter a string: ");
    scanf("%s", input);

    len = strlen(input);


    for(i = 0; i < len; i++) {
        output[i] = input[len - i - 1];
    }
    output[len] = '\0';

    printf("Reversed string: %s\n", output);

    return 0;
}
