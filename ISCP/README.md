## Dynamic Programming

1. Bottom-up approach: 
```
int fib(int n){
    int f(n+1);
    f[0]=0;
    f[1]=1;
    for(int i=0;i<=n;i++){
        f[i] =+ f[i-1]+f[i-2];
    }
    return f(n);
}
```

### Complexity Analysis

* Time Complexity - O(n)
* Space Complexity - O(n)

2. Top-down approach:
```
int f[50];// These part of main function
memset(f, 50, -1);// These part of main function

int fib(int n){
    if (f[n]!=-1){
        return f[n];
    }
    if(n==0 || n == 1 ){
        f[n]=n;
    }
    else{
        f[n]=(fib(n-1)+fib(n-2));
    }
    return f[n];
}
```

Q. A boy can either take 1 or 2 steps at a time. He has to climb n steps in total. In how many ways he can do that?(N steps problem)

```
int run(int n){
    if(n==0||n==1||n==2){
        return n;
    }
    else{
        return run(run(n-1)+run(run(n-2)));
    }
}
int main(){
    int n = 10;
    cout<<run(n);

    return 0;
}
```

Q. Coin Change Problem

