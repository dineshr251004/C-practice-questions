#include <stdio.h>
int main(){
  int m1[3][3],m2[3][3];
  int i,j,k;
  for (i=0;i<3;i++){
    for (j=0;j<3;j++){
      scanf("%d",&m1[i][j]);
    }
  }
  for (i=0;i<3;i++){
    for (j=0;j<3;j++){
      scanf("%d",&m2[i][j]);
    }
  }
  int result[3][3]={{0,0,0},{0,0,0},{0,0,0}};
  for (i=0;i<3;i++){
    for (j=0;j<3;j++){
      for (k=0;k<3;k++){
        result[i][j]+=m1[i][k]+m2[k][j];
      }
    }
  }
  for (i=0;i<3;i++){
    for (j=0;j<3;j++){
      printf("%d",result[i][j]);
    }
    printf("\n");
  }
  return 0;
}
