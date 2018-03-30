/*
LeetCode 136. Single Number
Glennshih@201800328 coding in C language 
*/

/**
Given an array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * nums is the array pointer
 * numsSize is array size
 **/
 
 int singleNumber(int *nums, int numsSize) {
    int i=0, j, pair_counter, single_value=0, found_single_before_last=0;

    while(i<numsSize){
        printf("nums[i]=%d\n",nums[i]);
        
        printf(" i =%d\n",i);

        //do not compare at last one integers of array
        if(i < numsSize-1){
            
            //reset pair_counter to 0
            pair_counter =0;
            for(j=0;j<numsSize;j++){
                printf("j = %d\n",j);
                //check if the integers is a pair
                if(nums[i]==nums[j]){
                    pair_counter++;
                }
                //printf("nums[i]=%d\n",nums[i]);
                printf("nums[j]=%d\n",nums[j]);
                printf("pair_counter = %d\n",pair_counter);
            }
            
        }
        //check single and not the last in array
        if(pair_counter == 1 && i != (numsSize - 1)){
            printf("1. the single integers is =%d\n",nums[i]);
            single_value = nums[i];
            found_single_before_last++;
            break;
        }
        //check the last in array and previous all in pairs
        else if(i == (numsSize - 1) && found_single_before_last == 0){
            printf("2. the single integers is =%d\n",nums[i]);
            single_value = nums[i];
        }
        //if only one integer in array then it must be single
        else if(numsSize == 1){
            printf("3. the single integers is =%d\n",nums[i]);
            single_value = nums[i];
        }

        i++;
        printf("\n");
    }
    printf("-----------------\n");
    printf("single_value = %d\n",single_value);
    return single_value;
}

int main(void){
    int test_array[11]={2,3,4,3,4,1,1,2,7,7,9};
    //int test_array[1]={1};
    //int test_array[3]={1,0,1};
    //int test_array[21]={17,12,5,-6,12,4,17,-5,2,-3,2,4,5,16,-3,-4,15,15,-4,-5,-6};
    
    int size_of_array;
    
    size_of_array = sizeof(test_array)/4;
    printf("size_of_array = %d\n",size_of_array);
    
    singleNumber(test_array, size_of_array);
    

    return 0;
}