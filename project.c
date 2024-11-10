#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<math.h>

char dengue_symptoms[14] = {'y','y','y','y','y','n','n','n','y','n','n','y','y','y'}; // fever, headache, joint pain, rash, nausea
char malaria_symptoms[14] ={'y','y','n','n','n','y','y','y','y','y','y','n','n','n'}; // fever, headache, chills, sweating, muscle pain

void diagnose(char answers[], int n)
{
    int dengue_score = 0, malaria_score = 0;


    for (int i = 0; i < n; i++)
    {
        if (tolower(answers[i])==dengue_symptoms[i])
            dengue_score++;

        if (tolower(answers[i])==malaria_symptoms[i])
            malaria_score++;
    }


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
    int n = 14;
    char answers[14];

    char *questions[] = {
    "Do you have a fever? (y/n): ",
    "Do you have a headache? (y/n): ",
    "Do you have joint pain? (y/n): ",
    "Do you have a skin rash? (y/n): ",
    "Do you feel nauseous? (y/n): ",
    "Do you have chills? (y/n): ",
    "Do you have sweating? (y/n): ",
    "Do you have muscle pain? (y/n): ",
    "Do you have Fatigue? (y/n): ",
    "Do you have Diarrhea? (y/n): ",
    "Do you have Cough? (y/n): ",
    "Do you have Abdominal pain? (y/n): ",
    "Do you have bleeding? (y/n): ",
    "Do you have rapid breathing? (y/n): ",
    };

printf("Please answer the following questions:\n");
for (int i = 0; i < n; i++)
{
    printf("%s", questions[i]);
    scanf(" %c", &answers[i]);
}

diagnose(answers, n);

}
