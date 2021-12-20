// encode: utf-8
// C standard: C11
#include <stdio.h>
#include <math.h>
void sep(void)
{
    printf("%s\n", "---------------------------------------------");
}
int main(int argc, char const *argv[])
{
    float temp[3][4] = {{18.2, 17.3, 15.0, 13.4}, {23.8, 25.1, 20.6, 17.8}, {20.6, 21.5, 18.4, 15.7}};
    // part A
    printf("%s", "a.) 輸出陣列內容\n");
    printf("%s", "\t|星期一\t|星期二\t|星期三\t|星期四\n");
    sep();
    for (int i = 0; i < 3; i++)
    {
        printf("時段%d\t", i + 1);
        for (int j = 0; j < 4; j++)
        {
            printf("|%.2f\t", temp[i][j]);
        }
        printf("\n");
    }
    sep();
    // part b
    printf("%s\n", "b.)每日平均溫度");
    for (int i = 0; i < 4; i++)
    {
        float daySum = 0.;
        for (int j = 0; j < 3; j++)
        {
            daySum += temp[j][i];
        }
        printf("星期%d均溫為%.3f\n", i + 1, daySum / 3);
    }
    sep();
    // part c
    printf("%s\n", "c.)每時段平均溫度");
    for (int i = 0; i < 3; i++)
    {
        float timeSum = 0.;
        for (int j = 0; j < 4; j++)
        {
            timeSum += temp[i][j];
        }
        printf("時段%d均溫為%.3f\n", i + 1, timeSum / 4);
    }
    sep();
    // part d and e
    int MaxTemp_weekdayIndex = 0, MaxTemp_TimeIndex = 0;
    int MinTemp_weekdayIndex = 0, MinTemp_TimeIndex = 0;
    float MaxTemp = -INFINITY, MinTemp = INFINITY;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (MaxTemp < temp[i][j])
            {
                MaxTemp = temp[i][j];
                MaxTemp_TimeIndex = i;
                MaxTemp_weekdayIndex = j;
            }
            if (MinTemp > temp[i][j])
            {
                MinTemp = temp[i][j];
                MinTemp_TimeIndex = i;
                MinTemp_weekdayIndex = j;
            }
        }
    }
    printf("d.)溫度最高:星期%d時段%d溫度%.2f\n", MaxTemp_weekdayIndex + 1, MaxTemp_TimeIndex + 1, MaxTemp);
    sep();
    printf("e.)溫度最小:星期%d時段%d溫度%.2f\n", MinTemp_weekdayIndex + 1, MinTemp_TimeIndex + 1, MinTemp);
    return 0;
}
