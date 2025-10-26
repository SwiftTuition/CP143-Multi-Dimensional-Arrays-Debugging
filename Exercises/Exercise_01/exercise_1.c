/* Filename:         exercise_1.c
 * Date:             YYYY/MM/DD
 * Name:             Your Name Here
 * Student number:   Your Student Number Here
 *
 * By submitting this file electronically, I declare that
 * it is my own original work, and that I have not copied
 * any part of it from another source.
 *
 * Description: Grade book system that tracks and analyzes student
 *              grades across multiple tests using a 2D array.
 */

#include <stdio.h>

// Define constants for array dimensions
#define STUDENTS 5
#define TESTS 4

int main() {
    // TODO: Declare a 2D array to store grades
    // Hint: int grades[STUDENTS][TESTS];



    // TODO: Read grades from user
    // Use nested loops: outer loop for students (rows)
    //                   inner loop for tests (columns)
    // Prompt format: "Enter grade for Student X, Test Y: "



    // TODO: Display header for grade table
    printf("\n===== GRADE BOOK SYSTEM =====\n\n");
    printf("Student Test1 Test2 Test3 Test4 Average\n");

    // TODO: Display grades and calculate student averages
    // For each student (row):
    //   - Print student number
    //   - Print all test grades for that student
    //   - Calculate and print average for that student



    // TODO: Display test averages
    printf("\nTest Averages:\n");
    // For each test (column):
    //   - Sum all student grades for that test
    //   - Calculate and print average



    // TODO: Find highest grade
    // Initialize max value and track row/column position
    // Traverse entire array to find maximum



    // TODO: Find lowest grade
    // Initialize min value and track row/column position
    // Traverse entire array to find minimum



    // TODO: Display highest and lowest grades with positions
    // Format: "Highest grade: XX (Student Y, Test Z)"


    return 0;
}
