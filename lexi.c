%{
#include <stdio.h>
%}

DIGIT [0-9]
LETTER [a-zA-Z]
ID ({LETTER}({LETTER}|{DIGIT})*)
INT {DIGIT}+
WS [ \t\n]

%%

{INT}       { printf("Integer: %s\n", yytext); }
{ID}        { printf("Identifier: %s\n", yytext); }
[-+*/=]     { printf("Operator: %s\n", yytext); }
{WS}        ;  // Ignore whitespace

.           { printf("Invalid character: %s\n", yytext); }

%%

int main() {
    char input[1024]; // Assuming input will not exceed 1024 characters
    
    printf("Enter input:\n");
    fgets(input, sizeof(input), stdin); // Read input from user
    
    yy_scan_string(input); // Set up Flex to read from input string
    yylex();
    
    return 0;
}

// sudo apt install flex
// sudo vi lex.l {lex is the file name}
// flex lex.l
// gcc lex.yy.c -lfl
// ./a.out
