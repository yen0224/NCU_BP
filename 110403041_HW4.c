// hw3-26 #14
/*
   a.由於num的型別為unsigned short int而80000已超出其有效數造成溢位
   （implicit conversion from 'int' to 'unsigned short' changes value from 80000 to 14464 [-Wconstant-conversion]） 
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    /*
    原程式碼：
    unsigned short int num = 80000;
    應改為
    */
    int num = 80000;
    printf("%d\n",num);
    //system("pause")
    return 0;
}