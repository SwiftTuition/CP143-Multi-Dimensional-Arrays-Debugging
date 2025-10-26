/* Filename:         exercise_5.c
 * Date:             YYYY/MM/DD
 * Name:             Your Name Here
 * Student number:   Your Student Number Here
 *
 * By submitting this file electronically, I declare that
 * it is my own original work, and that I have not copied
 * any part of it from another source.
 *
 * Description: Student grade tracking system - DEBUG THIS PROGRAM!
 *              This program contains multiple intentional bugs.
 *              Your task is to find and fix all of them.
 */

#include <stdio.h>

#define STUDENTS 4
#define SUBJECTS 3

// Function prototypes
void readGrades(int grades[STUDENTS][SUBJECTS]);
void displayGrades(int grades[STUDENTS][SUBJECTS]);
float calculateAverage(int grades[], int size);
int findHighest(int grades[STUDENTS][SUBJECTS]);
int findLowest(int grades[STUDENTS][SUBJECTS]);
int countPassing(int grades[STUDENTS][SUBJECTS]);

int main() {
    int grades[STUDENTS][SUBJECTS];

    // Read all grades
    readGrades(grades);

    // Display grade report
    printf("\n===== GRADE REPORT =====\n\n");
    printf("Student   Math  Science  English  Average\n");
    displayGrades(grades);

    // Display statistics
    printf("\nHighest grade: %d\n", findHighest(grades));
    printf("Lowest grade: %d\n", findLowest(grades));
    printf("Passing grades: %d out of %d\n", countPassing(grades), STUDENTS * SUBJECTS);

    return 0;
}

// Function to read grades from user
void readGrades(int grades[STUDENTS][SUBJECTS]) {
    int i, j;
    char *subjects[] = {"Math", "Science", "English"};

    for (i = 0; i <= STUDENTS; i++) {  // BUG: Off-by-one error
        printf("\nEnter grades for Student %d:\n", i + 1);
        for (j = 0; j < SUBJECTS; j++) {
            printf("Enter %s grade: ", subjects[j]);
            scanf("%d", &grades[i][j]);
        }
    }
}

// Function to display grades and averages
void displayGrades(int grades[STUDENTS][SUBJECTS]) {
    int i, j;
    float avg;

    for (i = 0; i < STUDENTS; i++) {
        printf("%4d    ", i + 1);

        // Display grades for this student
        for (j = 0; j < SUBJECTS; j++) {
            printf("%4d    ", grades[i][j]);
        }

        // Calculate and display average
        avg = calculateAverage(grades[i], SUBJECTS);
        printf("  %.1f\n", avg);
    }
}

// Function to calculate average of an array
float calculateAverage(int grades[], int size) {
    int sum = 0;
    int i;

    for (i = 0; i < size; i++) {
        sum = sum + grades[i];
    }

    return sum / size;  // BUG: Integer division, loses decimal places
}

// Function to find highest grade
int findHighest(int grades[STUDENTS][SUBJECTS]) {
    int max;  // BUG: Uninitialized variable
    int i, j;

    for (i = 0; i < STUDENTS; i++) {
        for (j = 0; j < SUBJECTS; j++) {
            if (grades[i][j] > max) {
                max = grades[i][j];
            }
        }
    }

    return max;
}

// Function to find lowest grade
int findLowest(int grades[STUDENTS][SUBJECTS]) {
    int min = grades[0][0];
    int i, j;

    for (i = 0; i < STUDENTS; i++) {
        for (j = 0; j <= SUBJECTS; j++) {  // BUG: Off-by-one error
            if (grades[i][j] < min) {
                min = grades[i][j];
            }
        }
    }

    return min;
}

// Function to count passing grades (>= 50)
int countPassing(int grades[STUDENTS][SUBJECTS]) {
    int count = 0;
    int i, j;

    for (i = 0; i < STUDENTS; i++) {
        for (j = 0; j < SUBJECTS; j++) {
            if (grades[i][j] > 50) {  // BUG: Should be >= 50, not > 50
                count++;
            }
        }
    }

    return count;
}
