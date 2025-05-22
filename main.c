#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 200

struct College 
{
    char name[100];
    char branch[50];
    char category[20];
    char gender[10];
    int rank_cutoff;
};

int main() 
{
    FILE *file = fopen("colleges_data.csv", "r");
    if (file == NULL) 
    {
        printf("Error opening file.\n");
        return 1;
    }

    struct College colleges[100];
    int count = 0;
    char line[MAX_LINE_LENGTH];

    fgets(line, sizeof(line), file); // Skip header line

    while (fgets(line, sizeof(line), file)) 
    {
        sscanf(line, "%[^,],%[^,],%[^,],%[^,],%d",
               colleges[count].name,
               colleges[count].branch,
               colleges[count].category,
               colleges[count].gender,
               &colleges[count].rank_cutoff);
        count++;
    }

    fclose(file);

    int user_rank;
    char user_category[20];
    char user_gender[10];

    printf("Enter your EAMCET rank: ");
    scanf("%d", &user_rank);

    printf("Enter your category (e.g., OC, BC-A, SC): ");
    scanf("%s", user_category);

    printf("Enter your gender (Male/Female): ");
    scanf("%s", user_gender);

    printf("\nColleges and branches you may get into:\n");
    printf("-------------------------------------------------------------\n");

    int found = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(colleges[i].category, user_category) == 0 &&
            strcmp(colleges[i].gender, user_gender) == 0 &&
            user_rank <= colleges[i].rank_cutoff)
        {
            printf("%s - %s (Cutoff Rank: %d)\n",
                   colleges[i].name,
                   colleges[i].branch,
                   colleges[i].rank_cutoff);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No colleges found matching your criteria.\n");
    }

    return 0;
}








/*
#include<stdio.h> 
#include<stdlib.h>
void main()
{
int cutoff = 30;
int m,r;
printf("** WELCOME TO COLLEGE PREDICTOR***\n");
printf("enter your marks\n");
scanf("%d", &m);
if(m>cutoff)
{
printf("enter your rank\n");
scanf("%d", &r);
printf("**Predicted colleges and courses are"\n");
if ( r < 1000)
{
printf("MGIT\n 1)CSE (AI&ML) 2)MECHANICAL 3)CIVIL 4) ELECTRICAL\n"); 
printf("JNTUH\n1)CSE (AI&ML) 2)MECHANICAL 3)CIVIL 4)ELECTRICAL\n"); 
printf("OU\n 1)CSE(AI&ML) 2)MECHANICAL 3)CIVIL 4)ELECTRICAL\n");
}
else if (r>=1000 && r<5000)
{
printf("KMIT\n 1)CSE (AI&ML) 2)MECHANICAL 3)CIVIL 4)ELECTRICAL\n"); 
printf("GRIETIN 1)CSE (AI&ML) 2)MECHANICAL 3)CIVIL 4) ELECTRICAL\n"); 
}
else if (r>=5000 && r<20000)
{
printf("SRYS\n 1)CSE (AI&ML) 2)MECHANICAL 3)CIVIL 4)ELECTRICAL\n");
printf("VJIT\n 1)CSE (AI&ML) 2) MECHANICAL 3)CIVIL 4)ELECTRICAL\n");
}
else if (r>=20000 &&r<50000)
{
printf("GRYS\n 1)CSE(AI&ML) 2)MECHANICAL 3)CIVIL 4) ELECTRICAL\n"); 
printf("TNR\n 1)CSE (AI&ML) 2)MECHANICAL 3)CIVIL 4)ELECTRICAL\n");
}
else if(r>=50000 && r<100000)
{
printf("HIMT\n 1)CSE(AI&ML) 2)MECHANICAL 3)CIVIL 4)ELECTRICAL\n"); 
printf("GJTY\n 1)CSE (AI&ML) 2)MECHANICAL 3)CIVIL 4)ELECTRICAL\n");
}
else
printf("not qualified\n");
}
*/
