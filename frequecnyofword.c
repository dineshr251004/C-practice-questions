#include <stdio.h>
#include <string.h>
int count(char *s,char *w,int sl,int wl){
  int i,c=0,j,f=0;
  for (i=0;i<sl-wl;i++){
    f=1;
    for (j=0;j<wl;j++){
      if (s[l+j]!=w[j]){
        f=0;
        break;
      }
    }
    if (f==1){
      c++;
    }
  }
  return c;
}
int main(){
  char sent[1000],word[100];
  int c,sl,wl;
  scanf("%[^\n]c",&sent);
  scanf("%s",&word);
  sl=strlen(sent);
  wl=strlen(word);
  c=count(sent,word,sl,wl);
  printf("%d",c);
  return 0;
}

  
