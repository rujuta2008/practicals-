#include <stdio.h>
#include <string.h>


    struct Coach {
        char name[50];
        int age;
        int experience; // years of experience
        };


    struct Team {
        char teamName[50];
        char sportType[30];
        struct Coach coachInfo;
        };

#define MAX_TEAMS 50

// Function prototypes
void addTeam(struct Team teams[], int *count);
void displayTeams(struct Team teams[], int count);
void searchTeam(struct Team teams[], int count);

int main() {
    struct Team teams[MAX_TEAMS];
    int teamCount = 0;
    int choice;

    do {
        printf("\n--- CHARUSAT Sports Team Management ---\n");
        printf("1. Add New Team\n");
        printf("2. Search Team\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addTeam(teams, &teamCount);
                break;
            case 2:
                searchTeam(teams, teamCount);
                break;
            case 3:
                displayTeams(teams, teamCount);
            break;
            case 4:
                printf("Exiting...\n");
            break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while(choice != 4);

    return 0;
}


void addTeam(struct Team teams[], int *count) {
    if (*count >= MAX_TEAMS) {
        printf("Team limit reached!\n");
        return;
    }
    printf("\nEnter Team Name: ");
    getchar();
    fgets(teams[*count].teamName, sizeof(teams[*count].teamName), stdin);
    strtok(teams[*count].teamName, "\n");
    printf("Enter Sport Type: ");
    fgets(teams[*count].sportType, sizeof(teams[*count].sportType), stdin);
    strtok(teams[*count].sportType, "\n");

    printf("Enter Coach Name: ");
    fgets(teams[*count].coachInfo.name, sizeof(teams[*count].coachInfo.name), stdin);
    strtok(teams[*count].coachInfo.name, "\n");

    printf("Enter Coach Age: ");
    scanf("%d", &teams[*count].coachInfo.age);

    printf("Enter Years of Experience: ");
    scanf("%d", &teams[*count].coachInfo.experience);

    (*count)++;
    printf("Team added successfully!\n");
}


    void displayTeams(struct Team teams[], int count) {
        if (count == 0) {
            printf("No teams to display.\n");
            return;
        }
    printf("\n--- List of Teams and Coaches ---\n");
    for(int i=0; i<count; i++) {
        printf("Team %d:\n", i+1);
        printf("  Team Name: %s\n", teams[i].teamName);
        printf("  Sport Type: %s\n", teams[i].sportType);
        printf("  Coach Name: %s\n", teams[i].coachInfo.name);
        printf("  Coach Age: %d\n", teams[i].coachInfo.age);
        printf("  Years of Experience: %d\n\n", teams[i].coachInfo.experience);
    }
}


void searchTeam(struct Team teams[], int count) {
    char searchName[50];
    int found = 0;

    if (count == 0) {
        printf("No teams to search.\n");
        return;
    }

    printf("\nEnter team name to search: ");
    getchar();
    fgets(searchName, sizeof(searchName), stdin);
    strtok(searchName, "\n");

    for(int i=0; i<count; i++) {
        if(strcmp(teams[i].teamName, searchName) == 0) {
            printf("Team found:\n");
            printf("  Team Name: %s\n", teams[i].teamName);
            printf("  Sport Type: %s\n", teams[i].sportType);
            printf("  Coach Name: %s\n", teams[i].coachInfo.name);
            printf("  Coach Age: %d\n", teams[i].coachInfo.age);
            printf("  Years of Experience: %d\n", teams[i].coachInfo.experience);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Team not found!\n");
}
