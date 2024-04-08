#include <stdio.h>
#include <string.h>

int matchA(char *str){
    return (strlen(str)==1 && str[0]=='a');
}

int matchStar(char *str, char ch, int start)
{
    for(int i=start; i<strlen(str); i++)
    {
        if(str[i]!=ch)
        return 0;
    }

    return 1;
}

int matchAstarBplus(char *str){
    if(str[0]=='b')
    {
        if(matchStar(str, 'b', 0))
            return 1;
        else
            return 0;
    }

    if(str[0]=='a')
    {
        if(matchStar(str,'a', 0))
        {
            return 0;
        }
        else
        {
            for(int i=1; i<strlen(str); i++)
            {
                if(str[i]=='b')
                {
                    if(matchStar(str, 'b', i))
                    {   
                        
                        return 1;
                    }

                    else 
                    {   
                        return 0;
                    }
                }
            }
        }
    }
}


int matchABB(char *str){
    return (strlen(str)==3 && str[0]=='a' && str[1]=='b' && str[2]=='b');
}

int main(){
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    if(matchA(input)){
        printf("The string belongs to 'a' \n ");
    }
    else if(matchABB(input)){
        printf("The string belogs to 'abb' \n");
    }
    else if(matchAstarBplus(input)){
        printf("The string belongs to 'a*b+' \n");
    }
   
    else{
        printf("ohh lodu");
    }
    return 0;
}

//3rd assgn