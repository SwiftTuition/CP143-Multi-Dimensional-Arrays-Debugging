/* Filename:         exercise_2.c
 * Date:             YYYY/MM/DD
 * Name:             Your Name Here
 * Student number:   Your Student Number Here
 *
 * By submitting this file electronically, I declare that
 * it is my own original work, and that I have not copied
 * any part of it from another source.
 *
 * Description: Matrix operations calculator that performs addition,
 *              subtraction, and transpose operations on 3x3 matrices.
 */

#include <stdio.h>

// Define constants for matrix dimensions
#define ROWS 3
#define COLS 3

// TODO: Add function prototypes here
// void readMatrix(int matrix[ROWS][COLS], int matrixNumber);
// void displayMatrix(int matrix[ROWS][COLS]);
// void addMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]);
// void subtractMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]);
// void transposeMatrix(int matrix[ROWS][COLS], int result[ROWS][COLS]);


int main() {
    // TODO: Declare three 3x3 matrices
    // matrix1, matrix2, and result



    // TODO: Read Matrix 1
    printf("Enter elements for Matrix 1:\n");



    // TODO: Read Matrix 2
    printf("\nEnter elements for Matrix 2:\n");



    // Menu system
    int choice;

    do {
        // Display menu
        printf("\n===== MATRIX OPERATIONS CALCULATOR =====\n\n");
        printf("1. Display Matrix 1\n");
        printf("2. Display Matrix 2\n");
        printf("3. Add Matrices\n");
        printf("4. Subtract Matrices (Matrix1 - Matrix2)\n");
        printf("5. Transpose Matrix 1\n");
        printf("6. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // TODO: Process menu choice using switch statement
        // Case 1: Display Matrix 1
        // Case 2: Display Matrix 2
        // Case 3: Add matrices and display result
        // Case 4: Subtract matrices and display result
        // Case 5: Transpose Matrix 1 and display result
        // Case 6: Exit message
        // Default: Invalid choice message



    } while (choice != 6);

    return 0;
}

// TODO: Implement readMatrix function
// Use nested loops to read each element
// Prompt format: "Enter element [row][col] for Matrix X: "



// TODO: Implement displayMatrix function
// Print matrix with proper formatting (use %4d for alignment)
// Each row on a new line



// TODO: Implement addMatrices function
// result[i][j] = matrix1[i][j] + matrix2[i][j]



// TODO: Implement subtractMatrices function
// result[i][j] = matrix1[i][j] - matrix2[i][j]



// TODO: Implement transposeMatrix function
// result[i][j] = matrix[j][i] (swap indices)


