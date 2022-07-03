

bool isPalindrome(int x){
int reverse = 0;
int temp = x;
if(x<0 || x>0 && x%10 == 0){
    return 0;
}
else{
    while(temp !=0){
        if(reverse <= INT_MAX/10){
            reverse = reverse*10 + temp%10;
            temp /= 10;
        }
        else break;
    }
}
    return x == reverse;
}