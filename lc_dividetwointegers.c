int divide(long int dividend, long int divisor){
    long int ans;
    ans=dividend/divisor;
    if ((dividend==-2147483648)&&(divisor==-1)){
        return ans-1;
    }
    else{
        return ans;
    }  

}
