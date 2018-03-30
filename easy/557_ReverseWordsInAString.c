/*
LeetCode 557. Reverse Words in a String III
Glennshih@20180319 coding in C language 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//function to reverse string
void reverseString(char* s, int left, int right) {
    char tmp;
    while(left<right){
        tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
}

//function to reverse word
char* reverseWords(char* s) {
    int left, right, length=strlen(s);
	left=right=0;
	while(1){
		if(right >= length-1){
		    printf("DEBUG: string_s = %s\n",s);
		    return s;
		}
		while(s[left] == ' ') left++;
		right = left;
		while(s[right] != ' ' && right < length) right++;
		reverseString(s, left, right-1);
		left=right;
	}
    
	

}

int main(void){
    char test_string[] = "Let's take LeetCode contest";
    int string_len;
    
    string_len = strlen(reverseWords(test_string));
    printf("DEBUG: string_len = %d\n",string_len);

    return 0;
}