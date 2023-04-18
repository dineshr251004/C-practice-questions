bool isPalindrome(int x){
    int r,temp;
    long int rev=0;
    temp=x;
    if (x<0){
        return false;
    }
    else{
        while (temp>0){
            r=temp%10;
            rev=rev*10 + r;
            temp/=10;
        }
        if (rev==x){
            return true;
        }
        else{
            return false;
        }
    }
  
}
