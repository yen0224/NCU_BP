#include <stdio.h>
#include <stdlib.h>
int main(void){
    float x,y;
    printf("請輸入座標：（以逗號分格）");
    scanf("%f,%f",&x,&y);
    printf("(%.1f,%.1f)在",x,y);
    if (x>0)
    {
        if(y>0){
            printf("第一象限");
        }
        else if(y<0){
            printf("第四象限");
        }
        else{
            printf("x軸上");
        }
        
    }
    else if(x<0){
        if(y>0){
            printf("第二象限");
        }
        else if(y<0){
            printf("第三象限");
        }
        else{
            printf("x軸上");
        } 
        
    }
    else{
        if(y!=0){
            printf("Ｙ軸上");
        }
        else{
            printf("原點");
        }

    }
    return 0;
}