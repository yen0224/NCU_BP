#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 100; i++)
    {
        if(!(i%2)||!(i%3)){
            if(!(i%12)){
                continue;
            }
            printf("%d ",i);
        }
    }
    return 0;
}
