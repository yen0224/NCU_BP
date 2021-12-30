#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int maxscore = 0, index = 0;
    float sum = 0.0;
    int allpass = 1;
    int manymax=0;
    struct info
    {
        char name[10];
        float score;
        int ifpass;
    } student[5];
    // input, calculate the averge score, and find who get the max score
    for (int i = 0; i < 5; i++)
    {
        printf("student's name[%d]:", i + 1);
        fgets(student[i].name, 10, stdin);
        student[i].name[strlen(student[i].name)-1]='\0';
        printf("%s's score is:",student[i].name);
        scanf("%f", &student[i].score);
        
        sum += student[i].score;
        if (student[i].score > maxscore)
            index = i;
        
        if (student[i].score >= 60)
        {
            student[i].ifpass = 1;
        }
        else
        {
            student[i].ifpass = 0;
            allpass=0;
        }
        getchar();
    }
    printf("\n%s got the highest score %.2f amount all the students in this exam.\n", student[index].name, student[index].score);
    printf("\nThe following part lists the students who didn't pass the exam:\n");
    if(allpass){
        printf("(All of the students pass the exam.)\n");
    }
    else{
        for (int i = 0; i < 5; i++)
        {
            if(student[i].ifpass){
                continue;
            }
            else{
                printf("%s got %.2f, didn't pass.\n",student[i].name,student[i].score);
            }
        }
    }
    printf("\nThe averge score in this exam is %.2f\n",sum/5.);

    return 0;
}
