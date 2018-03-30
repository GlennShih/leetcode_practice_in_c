#include <stdio.h>
#include <math.h>
/*
LeetCode 476.
Glennshih@20180310 coding in C language 
*/


int findComplement(long num) {
    //initial a 1-row binary array contain of 0 and 1 
    int binary_array[32] = {0};
    int i , remain;
    long int result_decimal=0, leadingBit;
    
    //decimal to binary array
    for(i=0;i<32;i++){
        remain = num % 2;
        num = num / 2;
        binary_array[i] = remain;
        //printf("%d",binary_array[i]);
    }
    
    //find leading bit of 1
    for(i=31;i>=0;i--){
        if(binary_array[i] == 1){
            leadingBit = i;
            break;
        }
    }    
    printf("leadingBit= %ld\n", leadingBit);
    
    //reverse 0 to 1, 1 to 0
    for(i=0;i<leadingBit+1;i++){
        binary_array[i] =  binary_array[i] ^ 1;
        //printf("%d",binary_array[i]);

    }
    
    //binary to decimal
    for(i=0;i<leadingBit+1;i++){
        if(binary_array[i] == 1){
            result_decimal = result_decimal + pow(2,i) ;
        }
    }    
    printf("result_decimal= %ld\n",result_decimal);
    return result_decimal;
}


int main(void){
    
    findComplement(pow(2,31));
    return 0;
    
}


/*

int findComplement(int num) {

int temp = num;
int muti = 1;
int result = 0;
while(temp!=0)
{
    if((temp>>1)<<1 == temp)//represent the last bit is 0,which means is complement number is 1;
    {
          result += muti;
    }
    muti *=2;
    temp >>= 1;
}
return result;
}

*/