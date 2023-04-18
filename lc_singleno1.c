int singleNumber(int* nums, int numsSize){
    if (numsSize==1){
        return nums[0];
    }
    else{
        int i,j;
        for (i=0;i<numsSize;i++){
            int flg=1;
            for (j=0;j<numsSize;j++){
                if ((i!=j)&&(nums[j]==nums[i])){
                    flg=0;
                }
            }
            if (flg==1){
                return nums[i];
            }
        }
    }
    return 0;

}
