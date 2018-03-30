#include <stdio.h>

int main(void){
    int x_array[32]={0}, y_array[32]={0};
    int x = 0, y = 27;
    int i, k;
    for (i=0; i<32; i++){
        k = x % 2;
        x = x / 2;
        //however this binary array is reversed side
        x_array[i] = k;
        printf("%d\n",x_array[i]);
    }
    printf("End of x_array\n");
    
    for (i=0; i<32; i++){
        k = y % 2;
        y = y / 2;
        //however this binary array is reversed side
        y_array[i] = k;
        printf("%d\n",y_array[i]);
    }   
    printf("End of y_array\n");
    
    for(i=0;i<32;i++){
        if(x_array[i] != y_array[i]){
            k = k + 1;
        }
    }
    printf("----k = %d-----\n",k);
    
    return 0;
}