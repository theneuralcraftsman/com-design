// validate operators
#include <stdio.h>
#include <string.h>

int main() {
    char op[100];
    int i;

    printf("Enter operators: ");
    scanf("%s", op);

    for (i = 0; i < strlen(op); i++) {
        switch (op[i]) {
            case '<':
                if (op[i + 1] == '=') {
                    printf("less than or equals to\n");
                    i++;
                } else {
                    printf("less than\n");
                }
                break;
            case '>':
                if (op[i + 1] == '=') {
                    printf("greater than or equals to\n");
                    i++;
                } else {
                    printf("greater than\n");
                }
                break;
            case '=':
                if (op[i + 1] == '=') {
                    printf("equals to\n");
                    i++;
                } else {
                    printf("assignment\n");
                }
                break;
            case '+':
                if (op[i + 1] == '+') {
                    printf("increment\n");
                    i++;
                } else {
                    printf("add\n");
                }
                break;
            case '-':
                if (op[i + 1] == '-') {
                    printf("decrement\n");
                    i++;
                } else {
                    printf("subtract\n");
                }
                break;
            case '*':
                printf("Multiplication\n");
                break;
            case '/':
                printf("Division\n");
                break;
            default:
                printf("%c is not an operator\n", op[i]);
        }
    }

    return 0;
}
