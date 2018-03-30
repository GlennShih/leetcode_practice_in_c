/*
LeetCode 412. Fizz Buzz
Glennshih@20180327 coding in C language 
*/

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
 
char** fizzBuzz(int n, int* returnSize) {
    char **return_var = (char **)malloc(sizeof(char *) * n);
    int i=1;
    
    while(i<=n){
        if(i%15 == 0){
            return_var[i-1]="FizzBuzz";
        }  
        else if(i%5 == 0){
            return_var[i-1]="Buzz";
        }
        else if(i%3 == 0){
            return_var[i-1]="Fizz";
        }
        else{
            return_var[i-1]=(char *)(malloc(sizeof(char)*10));
            sprintf((char *)return_var[i-1],"%d",i);

        }
        
        i++;
    }

    *returnSize  = n;
    return return_var;
}

int main(void){
    
}