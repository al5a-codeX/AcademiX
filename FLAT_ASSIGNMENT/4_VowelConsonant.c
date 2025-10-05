//(4) Vowel-cosonant identifier- output v for vowel and c for consonant
#include <stdio.h>

int main() {
    char input[100], output[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", input);

    for(i = 0; input[i] != '\0'; i++) {
        char ch = input[i];

        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

            if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                output[i] = 'v';
            else
                output[i] = 'c';
        } 
        else {
            output[i] = ch;
        }
    }
    output[i] = '\0';

    printf("Output string: %s\n", output);

    return 0;
}
