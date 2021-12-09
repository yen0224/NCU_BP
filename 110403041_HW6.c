#include <stdio.h>
#include <stdlib.h>
int main(void){
    float degree;
    printf("請輸入華氏溫度：");
    scanf("%f",&degree);
    degree=(degree-32)*5/9;
    printf("攝氏溫度為%f度\n",degree);
    return 0;
}  