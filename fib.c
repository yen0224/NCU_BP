#include <stdio.h>
#include <stdlib.h>
int fib(int end){
    int a=0,b=1;
    if(end==1){
        printf("%d",a);
        return a;
        }
    else if(end==2){
        printf("%d %d",a,b);
        return b;
        }
    else if(end>2){
        printf("%d %d ",a,b);
        for (int i = 2; i < end; i++)
        {
            //printf("%d %d ",a,b);
            if(i%2==0){
                a=a+b;
                printf("%d ",a);
                }
            else {
                b=a+b;
                printf("%d ",b);
                }
        }
        if (end%2==0){
            return b;
        }
        if(end%2){
            return a;
        }
    }
    return 0;
}
int main(void){
    int input;
    scanf("%d",&input);
    int last=fib(input);
    printf("No %d is %d",input ,last);
    return 0;
}