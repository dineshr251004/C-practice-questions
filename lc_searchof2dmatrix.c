bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int i,j;
    int flg=0;
    for (i=0;i<matrixSize;i++){
        for (j=0;j<*matrixColSize;j++){
            if (target==matrix[i][j]){
                flg=1;
            }
        }
    }
    if (flg==1){
        return true;
    }
    else{
        return false;
    }

}
