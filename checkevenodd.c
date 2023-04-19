#include <stdio.h>
int checkOddEven(int n){
    if (n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int i,n,evensum=0,oddsum=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        int f,num;
        scanf("%d",&num);
        f=checkOddEven(num);
        if (f==1){
            evensum+=num;
        }
        else{
            oddsum+=num;
        }
    }
    printf("Sum of even numbers is : %d\n",evensum);
    printf("Sum of odd numbers is : %d\n",oddsum);
    return 0;
}
