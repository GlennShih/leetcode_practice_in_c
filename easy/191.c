#include <stdio.h>
#include <stdint.h>

int hammingWeight(uint32_t n) {
    int n_array[32]={0};
    int i, k, count = 0;
    
    for(i=0;i<32;i++){
        k = n % 2;
        n = n / 2;
        n_array[i]=k;
        if (k != 0 ){
            count = count + 1;
        }
    }
    printf("count = %d\n", count);
    return count;
}

int main(void){
    
    hammingWeight(27);
    
    return 0;
}