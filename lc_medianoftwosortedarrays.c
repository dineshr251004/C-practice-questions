double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int i,j,c=0;
    int arr[2000];
    for (i=0;i<nums1Size;i++){
        arr[c]=nums1[i];
        c++;
    }
    for (i=0;i<nums2Size;i++){
        arr[c]=nums2[i];
        c++;
    }
    for (i=0;i<nums1Size+nums2Size;i++){
        for (j=i+1;j<nums1Size+nums2Size;j++){
            if (arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if ((nums1Size+nums2Size)%2!=0){
        return arr[(nums1Size+nums2Size-1)/2];
    }
    else{
        float ans;
        float a1,a2;
        a1=arr[(nums1Size+nums2Size)/2];
        a2=arr[(nums1Size+nums2Size-2)/2];
        ans =(double) (a1+a2)/2;
        return ans;

    }
}
