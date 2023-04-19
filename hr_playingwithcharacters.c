#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s;
    char s1[100];
    char s2[100];
    scanf("%c",&s);
    scanf("%s",&s1);
    scanf("\n");
    scanf("%[^\n]%*c",&s2);
    printf("%c\n",s);
    printf("%s\n",s1);
    printf("%s",s2);
    return 0;
}
