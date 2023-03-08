#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100], modified_str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            modified_str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            modified_str[i] = tolower(str[i]);
        } else {
            modified_str[i] = str[i];
        }
    }

    modified_str[i] = '\0'; // add null terminator to the end of modified string

    printf("Original string: %s", str);
    printf("Modified string: %s", modified_str);

    return 0;
}
