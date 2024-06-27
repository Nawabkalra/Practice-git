#include <stdio.h>
#include <string.h>

int findCharacterIndex(char *str, char c) {
    char *found = strchr(str, c);
    if (found != NULL) {
        return found - str;
    } else {
        return -1;
	}
}
int findSubstringIndex(char *str, char *substring) {
    char *found = strstr(str, substring);
    if (found != NULL) {
        return found - str;
    } else {
        return -1; 
    }
}

int main() {
    char str[100], sub[20], c;
    
    // Input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character from fgets

    // Character
    scanf(" %c", &c);

    // Substring
    scanf("%s", sub);

    // Find indices
    int characterIndex = findCharacterIndex(str, c);
    int substringIndex = findSubstringIndex(str, sub);

    // Print results
    printf("%d\n", characterIndex);
    printf("%d\n", substringIndex);

    return 0;
}

