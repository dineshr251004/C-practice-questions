#include <stdio.h>
#include <string.h>
char *reverse(char *let,int l);
int main(){
  char a[100],*b;
  fgets(a,sizeof(a),stdin);
  int l=strlen(a);
  b=reverse(a,l);
  printf("%s",b);
  return 0;
}
char *reverse(char *let,int l){
  static char rlet[100];
  int i;
  for (i=0;i<l;i++){
    rlet[i]=let[l-i-1];
  }
  return rlet;
}
