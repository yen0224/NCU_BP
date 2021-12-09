/*
4-36 #11+#12
*/
#include <stdio.h>
#include <stdlib.h>
void f(void);
int main(void){
    int id;
    int age;
    char name[10],last[10];
    printf("plz enter your student ID:\n");
    scanf("%d",&id);
    printf("plz enter your age:\n");
    scanf("%d",&age);
    printf("enter your name:\n");
    scanf("%s",name);
    printf("enter your last name:\n");
    scanf("%s",last);
    printf("=================\n");
    printf("Your full name is %s %s,\n %d years old,\n student's ID is %d\n",last,name,age,id);

    return 0;
}
void f(void){
    fflush(stdin);
}