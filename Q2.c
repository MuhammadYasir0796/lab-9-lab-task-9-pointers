#include <stdio.h>
#include <string.h>
int countVowels(char *current_char_ptr) {
    int vowelCount = 0;
    while (*current_char_ptr != '\0') {
        char ch = *current_char_ptr;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowelCount++;
        }
        current_char_ptr++;
    }
    return vowelCount;
}
int main() {
    char inputString[100];
    int finalVowelCount;
    printf("Text: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strlen(inputString)-1]='\0';
    finalVowelCount = countVowels(inputString);
    printf("Vowels in Text: %d\n", finalVowelCount);
    return 0;
}

