#include <stdio.h>

int main() {
    int i,j,n;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (arr[i]>arr[j]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("The sorted list:\n");
    for (i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
