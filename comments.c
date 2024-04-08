#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;

    char line[1000];

    int singleLinedComments = 0, multiLineComments = 0;
    int inMultiLineComment = 0;

    fp = fopen("Dijkstra.c","r");

    if(fp==NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }

    while(fgets(line, sizeof(line), fp)!=NULL)
    {
        // Check for single lined comment
        if(strstr(line, "//")!=NULL)
        {
            singleLinedComments++;
        }

        // Check for multi line comment
        if(strstr(line, "/*")!=NULL && !inMultiLineComment)
        {
            inMultiLineComment = 1;
        }

        if(inMultiLineComment)
        multiLineComments++;

        if(strstr(line, "*/")!=NULL && inMultiLineComment)
        {
            inMultiLineComment = 0;
        }
        
    }

    fclose(fp);

    printf("Total single line comments: %d\n", singleLinedComments);
    printf("Total multi-line comments: %d\n", multiLineComments);

    

    return 0;
}
