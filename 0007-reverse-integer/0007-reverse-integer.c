int reverse(int x){
    long long rev = 0;
    long long rem;
    long long max = pow(2,31)-1;
    long long min = pow(-2,31); 
    while(x != 0){
        if(rev > max / 10 || rev < min /10){
                return 0;
            }
        rem = x % 10;
        rev = rev * 10 + rem;
        x /= 10;
    }
    return rev;
    if(x > pow(10,9)){
        return 0;
    }
}