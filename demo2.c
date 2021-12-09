#include <stdio.h>
#include <stdlib.h>
int main(void){
    int side;
    scanf("%d",&side);
    for (int i = 0; i < side; i++)
    {
        for (int k = 0; k < side-i-1; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }

    

    return 0;
}