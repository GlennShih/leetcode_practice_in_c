/*
LeetCode 728. Self Dividing Numbers
Glennshih@20180310 coding in C language 
*/

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int i , j, devidetimes=0, remainder_by_ten, divisor, array_len=0;
    int each_digit_array[5]={0};    
    
    int *q=(int *)malloc((right-left+1)*sizeof(int));
    *returnSize=0;
    

    for(i=left;i<=right;i++){
            //seprate number to digit and save into array, ex. "148" to "1", "4", "8"
            //ex. if divisor is "25" devide 2 times, "654" devide 3 times
            divisor = i;
            
            devidetimes = 0;
            for(j=0;j<5;j++){
                if(divisor == 0){
                    break;
                }
                remainder_by_ten = divisor % 10;
                divisor/= 10;
                //save each digit number into array
                each_digit_array[j] = remainder_by_ten;
                //printf("DEBUG:when j = %d each_digit_array[j] = %d\n",j ,each_digit_array[j]);        
                
                //if self-devidable then must equal to it digit length
                if (each_digit_array[j] != 0 && (i % each_digit_array[j]) == 0){
                    devidetimes++;
                    //printf("DEBUG:devidetimes = %d\n", devidetimes);
                }
            }
        
            //divisor can devide by each digit
            if( j == devidetimes){
                //printf("DEBUG:when devidetimes = %d and i = %d OK\n", devidetimes, i);
                //array_len++;
                q[(*returnSize)++]=i;

                //printf("DEBUG:array_len = %d\n", array_len);
            }
    }
    
    

    return q;
    
    
}