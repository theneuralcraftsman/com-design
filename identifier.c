// validate identifiers
#include <stdio.h>
#include<string.h>

int main() {
char id[100];
int flag=0;
printf("Enter Identifier\n");
scanf("%s",id);
if((id[0]>='a'&&id[0]<='z')||(id[0]>='A'&&id[0]<='Z'))
{
    for(int i=1; id[i] != '\0';i++){
        
        if((id[i]>='a'&&id[i]<='z')||(id[i]>='A'&&id[i]<='Z')||(id[i]=='-')||(id[i]<='9'&&id[i]>=0))
        {
            flag=1;
            continue;
        }
        else{
         printf("\nfalse");
         break;
        }
    }
}else{
         printf("\nfalse");
        }
if(flag==1){
             printf("\ntrue");

}
    return 0;
}
