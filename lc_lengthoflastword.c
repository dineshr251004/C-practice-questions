#include <string.h>
int lengthOfLastWord(char * s){
    int l=strlen(s);
    int i;
    int c=0,flg=0;
    for (i=l-1;i>=0;i--){
        if (s[i]!=' ' && flg==0){
            flg=1;
            c++;
            continue;
        }
        else if(s[i]==' ' && flg==0){
            continue;
        }
        else if(s[i]==' ' && flg==1){
            break;
        }
        c++;
    }
    return c;
}  
