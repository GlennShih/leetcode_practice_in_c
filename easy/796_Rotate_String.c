/*
LeetCode 796. Rotate String
Glennshih@20180316 coding in C language 
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool rotateString(char* A, char* B) {
    char tmp;
    int len_char_a, char_a_position, rotate_left_times, judge=0;
    
    len_char_a = strlen(A);

    //maximun rotate left by (len_char_a -1) times
    for(rotate_left_times=1; rotate_left_times<len_char_a; rotate_left_times++){
        
            //printf("DEBUG: rotate_left_times=%d\n",rotate_left_times);
            
            //rotate char A by shift left 1   
            tmp = A[0];
            for(char_a_position=0; char_a_position<len_char_a; char_a_position++){
                A[char_a_position] = A[char_a_position+1];
            }
            A[len_char_a - 1] = tmp;
            
            printf("DEBUG: string A = %s\n",A);

            //if string A == B return Ture.
            //WRONG (*A == *B), only compare first digit
            if(strcmp(A,B)==0){
                judge = 1;
                printf("DEBUG: judge_True = %d\n", judge);
                break;
            }
            else{
                judge = judge + 0;
                //printf("DEBUG: judge_False = %d\n", judge);
            } 
    }
    
    //check A string == B stringrotate_left_times
    if(judge == 1){ 
        printf("DEBUG: true\n");
        return true;
    }
    else{
        //printf("DEBUG: false\n");
        return false;
    }
}

void main(){
    
    char A[] = "gwhqmrxpuppvuiuzicencvgtuzuxkhdqcwdbiciliiapdbzocr";
    char B[] = "dsinzpskimfgcppsvjbhasfvqszngdhqtakrlxdmeeqakfxucy";
    //char A[] = "abcde";
    //char B[] = "cdeab";
    //char A[] = "clrwmpkwru";
    //char B[] = "wmpkwruclr";
    
    //printf(A);
    rotateString(A,B);
    
}