#include <stdio.h>
int prime(int num){
    int ct=1;
    int primeN=2;
    while(ct<num){
        for ( int i = 3; ct<num; i++)
        {
            for (int j = 2; j <= i; j++)
            {
                if(i%j){
                    //無法整除，跳至下一個數
                    continue;
                }
                else if(i==j){
                    //發現質數
                    ct++;
                    primeN=i;
                    //i=2;//設值使其可以跳出外迴圈
                    break;
                }
                else{
                    //整除
                    break;
                }
            }   
        }
    }
    return primeN;
}
int main(int argc, char const *argv[])
{
    int inp;
    printf("please enter the number:");
    scanf("%d",&inp);
    printf("%d",prime(inp));
    return 0;
}
