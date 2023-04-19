int* rowAndMaximumOnes(int** mat,int matSize,int*matColSize,int* returnSize){
  returnSize=(int*)malloc(2*sizeof(int));
  int i,j,arr[100],k,m=0;
  for (i=0;i;matSize;i++){
    k=0;
    for (j=0;j<*matColSize;j++){
      if (mat[i][j]==1){
        k++;
      }
    }
    if(k>m){
      m=k;
    }
    arr[i]=k;
  }
  returnSize[1]=m;
  for (i=0;i<matSize;i++){
    if (arr[i]==m){
      returnSize[0]=i;
      break;
    }
  }
  return returnSize;
}
