#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<math.h>

char dengue_symptoms[14] = {'y','y','y','y','y','n','n','n','y','n','n','y','y','y'};
char malaria_symptoms[14] ={'y','y','n','n','n','y','y','y','y','y','y','n','n','n'};

void CalculateScore(char answers[], int n,int *x,int *y)
{
    int dengue_score = 0, malaria_score = 0;


    for (int i = 0; i < n; i++)
    {
        if (tolower(answers[i])==dengue_symptoms[i]&&tolower(answers[i])=='y')
            dengue_score++;

        if (tolower(answers[i])==malaria_symptoms[i]&&tolower(answers[i])=='y')
            malaria_score++;
    }

    *x=dengue_score;
    *y=malaria_score;
}

void Diagnose(malaria_score, dengue_score)
{

    if(abs(malaria_score-dengue_score)<2&&malaria_score>2&&dengue_score>2)
        printf("\nSymptoms overlap for both Malaria and Dengue. Please consult a doctor.\n");
    else if(malaria_score>dengue_score)
    {
        if(malaria_score>=5)
            printf("\nYou have a high chance of having Malaria.\n");
        else if(malaria_score>=2&&malaria_score<5)
            printf("\nYou have certain symptoms of Malaria. Please take care of yourself.\n");
    }
    else if(dengue_score>malaria_score)
    {
        if(dengue_score>=5)
            printf("\nYou have a high chance of having Dengue.\n");
        else if(dengue_score>=2&&dengue_score<5)
            printf("\nYou have certain symptoms of Dengue. Please take care of yourself.\n");
    }
    else
            printf("\nYou are healthy\n");
}


void main()

{
    int *malaria_score,*dengue_score;
    int n = 14;
    char answers[14];

    char *Symptoms[] = {"fever","headache","joint pain","skin rash","nausea","chills","sweating","muscle pain","Fatigue",
                        "Diarrhea","Diarrhea","Cough","Abdominal pain","bleeding","rapid breathing"};

    printf("Please answer the following questions:(y/n)\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Do you have %s?: ", Symptoms[i]);
        scanf(" %c", &answers[i]);
    }

    CalculateScore(answers, n, &dengue_score, &malaria_score);

    Diagnose(malaria_score, dengue_score);

}
