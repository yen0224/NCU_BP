#include <stdio.h>
void add10(int *A,int *B){
    *A+=10;
    *B+=10;
    return;
}
int main(int argc, char const *argv[])
{
    int a=3,b=5;
    int *ptrA=&a,*ptrB=&b;
    printf("before add10(),a=%d,b=%d\n",a,b);
    add10(ptrA,ptrB);
    printf("after add10(), a=%d, b=%d",a,b);
    return 0;
}
