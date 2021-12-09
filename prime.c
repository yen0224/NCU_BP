#include <stdio.h>
#include <stdlib.h>
int main(void){
    int maxV;
    printf("請輸入檢測終點：");
    scanf("%d",&maxV);
    int i;
    for ( i = 1; i <= maxV; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if(i%j){
                continue;
            }
            else if(i==j){
                printf("%d is prime\n",i);
            }
            else{
                break;
            }
        }   
    }
    return 0;
}