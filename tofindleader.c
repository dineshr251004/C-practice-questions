#include <stdio.h>
#include <string.h>
void leaders(int *a,int l){
  int c[100];
  int i,j,q=0;
  for (i=0;i<l;i++){
    int f=1;
    for (j=i+1;j<l;j++){
      if (a[i]<a[j]){
        f=0;
        break;
      }
    }
    if (f==1){
      c[q]=a[i];
      q++;
    }
  }
  for (i=0;i<q;i++){
    if (i!=q-1){
      printf("%d, ",c[i]);
    }
    else{
      printf("%d",c[i]);
    }
  }
}
int main(){
  int n;
  scanf("%d",&n);
  int i;
  int arr[n];
  for (i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Leaders are ");
  leaders(arr,n);
  retrun 0;
}
    
      
