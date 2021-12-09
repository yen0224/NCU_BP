#include <stdio.h>
#include <stdlib.h>
int main(void){
    int input,count=0;
    scanf("%d",&input);
    while(input>0){
        if(input%10==7){
            count++;
        }
        input/=10;
    }
    printf("%d",count);
    return 0;
}