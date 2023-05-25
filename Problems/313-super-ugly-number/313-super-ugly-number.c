

int nthSuperUglyNumber(int n, int* primes, int primeSize){
    if (n <= 0 || primeSize <= 0)
        return 1;
    
    unsigned int *index = (int *)calloc(primeSize, sizeof(int));
    unsigned int *nums = (int *)calloc(n, sizeof(int));
    
    nums[0] = 1;
    int storageIndex = 1;
    
    while (storageIndex < n){
        int min = INT32_MAX;
        int i;
        for (i = 0; i < primeSize; i++){
            if(nums[index[i]] * primes[i] < min){
                min = nums[index[i]] * primes[i];
            }
        }
        nums[storageIndex++] = min;
        for (i = 0; i < primeSize; i++){
            if (nums[index[i]] * primes[i] == min){
                index[i]++;
            }
        }
    }
    
    int ans = nums[n-1];
        
    free(index);
    free(nums);
    
    return ans;
}
