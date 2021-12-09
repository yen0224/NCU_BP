#include <stdio.h>
#include <stdlib.h>
int main(void){
    char ch='a';
    printf("小寫a是%c\n",ch);
    ch-=32;
    printf("大寫A是%c\n",ch);

    return 0;
}