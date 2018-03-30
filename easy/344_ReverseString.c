/*
LeetCode 324. ReverseString
Glennshih@20180315 coding in C language 
*/

// Can NOT do this char *tem = {"abcde"};

char* reverseString(char* s) {
    char tmp;
    int left = 0, right;
    
    right = strlen(s) - 1;
    
    while(left<right){
        tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
    return s;
}