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
                   colleges[i].branch);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No colleges found matching your criteria.\n");
    }

    return 0;
}
