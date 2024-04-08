#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAStar(const char *str) {

    if (strlen(str) == 0)
        return true;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != 'a')
            return false;
    }
    return true;
}
bool isABB(const char *str) {
    if (strlen(str) != 3)
        return false;
    return (str[0] == 'a' && str[1] == 'b' && str[2] == 'b');
}
bool isAStarBPlus(const char *str) {
    int len = strlen(str);
    if (len == 0)
        return false;
    int i = 0;
    while (i < len && str[i] == 'a')
        i++;
    while (i < len && str[i] == 'b')
        i++;
    return i == len;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isAStar(str)) {
        printf("The string matches the a* grammar.\n");
    } else if (isABB(str)) {
        printf("The string matches the abb grammar.\n");
    } else if (isAStarBPlus(str)) {
        printf("The string matches the a*b+ grammar.\n");
    } else {
        printf("The string does not match any of the specified grammars.\n");
    }

    return 0;
}
