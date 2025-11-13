/*You have to print the character,ch , in the first line. Then print  in next line. sIn the last line print the sentence, sen*/.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    
    char ch;
    char s[100];
    char sen[100];
     scanf("%c \n",&ch);
     scanf("%s \n",s);
     scanf("%[^\n]",sen);
     
     printf("%c\n",ch);
     printf("%s\n",s);
     printf("%s\n",sen);
    
        
    return 0;
}
