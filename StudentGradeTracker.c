#include <stdio.h>

#define MAX_SUBJECTS 5

int main() {
    char name[50];
    float grades[MAX_SUBJECTS];
    float sum = 0.0, average;
    char grade;


    printf("Enter student's name: ");
    fgets(name, sizeof(name), stdin);


    for (int i = 0; i < MAX_SUBJECTS; i++) {
        printf("Enter grade for subject %d: ", i + 1);
        scanf("%f", &grades[i]);
        sum += grades[i];
    }


    average = sum / MAX_SUBJECTS;


    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';


    printf("\nReport Card for %s", name);
    printf("-------------------------\n");
    for (int i = 0; i < MAX_SUBJECTS; i++) {
        printf("Subject %d: %.2f\n", i + 1, grades[i]);
    }
    printf("Average Grade: %.2f\n", average);
    printf("Final Grade: %c\n", grade);

    return 0;
}
