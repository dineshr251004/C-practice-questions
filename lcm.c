#include <stdio.h>
int lcm(int n1,int n2){
  if (n1%n2==0){
    printf("%d",n1);
  }
  else if (n2%n1==0){
    printf("%d",n2);
  }
  else{
    int pr,i;
    pr=n2*n1;
    for (i=1;i<=pr;i++){
      if ((i%n1==0)&&(i%n2==0)){
        printf("%d",i);
        break;
      }
    }
  }
}
int main(){
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  lcm(a,b);
  return 0;
}
