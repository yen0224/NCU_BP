// oct 21 hw (ch4-3 P15)

#include <stdio.h>
int main(void){
    int input;
    printf("請輸入整數(十六進位):");
    scanf("%x",&input);
    printf("十六進位之 %x 八進位為 %o\n",input,input);
    printf("十六進位之 %x 十進位為 %d\n",input,input);
    //system("pause");
    return 0;
}