#include <math.h>
int reverse(int x){
    int r,temp;
    long int rev=0;
    if (x<=-2147483648){
        return 0;
    }
    if (x>0){
        temp=x;
    }
    else{
        temp=-x;
    }
    while (temp>0){
        r=temp%10;
        rev=rev*10+r;
        temp/=10;
    }
    if ((rev>-pow(2,31))&&(rev<pow(2,31))){
        if (x>0){
            return rev;
        }
        else{
            return -rev;
        }
    
    }
    else{
        return 0;
    }
}
