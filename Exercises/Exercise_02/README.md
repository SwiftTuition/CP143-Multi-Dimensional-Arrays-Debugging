# Exercise 2: Matrix Operations Calculator

**Difficulty:** MEDIUM
**Estimated Time:** 50 minutes

## Goal
Implement a matrix calculator that performs mathematical operations on 3×3 matrices using functions.

## Description
You will create a program that reads two 3×3 matrices from the user and provides a menu-driven interface to perform various matrix operations: addition, subtraction, transpose, and display.

## Requirements

Your program must:
1. Implement functions for each operation (addition, subtraction, transpose, display)
2. Read two 3×3 matrices from the user
3. Provide a menu system for operation selection
4. Display results with proper formatting
5. Allow multiple operations without re-entering matrices
6. Use proper function prototypes and definitions

## Function Specifications

You must implement these functions:

```c
void readMatrix(int matrix[3][3], int matrixNumber);
// Reads a 3x3 matrix from user input
// Parameters: matrix to fill, matrix number (1 or 2) for prompts

void displayMatrix(int matrix[3][3]);
// Displays a 3x3 matrix with proper formatting
// Parameters: matrix to display

void addMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]);
// Adds two matrices: result = matrix1 + matrix2
// Parameters: two input matrices, result matrix

void subtractMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]);
// Subtracts matrices: result = matrix1 - matrix2
// Parameters: two input matrices, result matrix

void transposeMatrix(int matrix[3][3], int result[3][3]);
// Computes transpose of a matrix
// Parameters: input matrix, result matrix
```

## Input Specifications

- Program reads two 3×3 matrices (18 integers total)
- Prompt format: "Enter element [row][col] for Matrix X: "
- Menu choice: single integer (1-6)

## Output Specifications

Menu format:
```
===== MATRIX OPERATIONS CALCULATOR =====

1. Display Matrix 1
2. Display Matrix 2
3. Add Matrices
4. Subtract Matrices (Matrix1 - Matrix2)
5. Transpose Matrix 1
6. Exit

Enter your choice:
```

Matrix display format:
```
Matrix:
  1  2  3
  4  5  6
  7  8  9
```

## Sample Run
```
Enter elements for Matrix 1:
Enter element [0][0]: 1
Enter element [0][1]: 2
Enter element [0][2]: 3
Enter element [1][0]: 4
Enter element [1][1]: 5
Enter element [1][2]: 6
Enter element [2][0]: 7
Enter element [2][1]: 8
Enter element [2][2]: 9

Enter elements for Matrix 2:
Enter element [0][0]: 9
Enter element [0][1]: 8
Enter element [0][2]: 7
Enter element [1][0]: 6
Enter element [1][1]: 5
Enter element [1][2]: 4
Enter element [2][0]: 3
Enter element [2][1]: 2
Enter element [2][2]: 1

===== MATRIX OPERATIONS CALCULATOR =====

1. Display Matrix 1
2. Display Matrix 2
3. Add Matrices
4. Subtract Matrices (Matrix1 - Matrix2)
5. Transpose Matrix 1
6. Exit

Enter your choice: 3

Result of Addition:
 10 10 10
 10 10 10
 10 10 10

Enter your choice: 4

Result of Subtraction:
 -8 -6 -4
 -2  0  2
  4  6  8

Enter your choice: 5

Transpose of Matrix 1:
  1  4  7
  2  5  8
  3  6  9

Enter your choice: 6
Goodbye!
```

## Constraints

- Matrix size is fixed at 3×3
- Use constants: `#define ROWS 3` and `#define COLS 3`
- All elements are integers
- Menu must loop until user chooses exit
- Invalid menu choices should display error message

## Test Cases

### Test Case 1: Identity Matrix Operations
Matrix1: Identity matrix (1s on diagonal, 0s elsewhere)
Matrix2: All 1s
Expected: Addition = Matrix with 1s and 2s, Subtraction shows pattern

### Test Case 2: Zero Matrix
Matrix1: All zeros
Matrix2: Any values
Expected: Addition = Matrix2, Subtraction = -Matrix2

### Test Case 3: Transpose Verification
Matrix1:
```
1 2 3
4 5 6
7 8 9
```
Expected transpose:
```
1 4 7
2 5 8
3 6 9
```

## Hints

- Use nested loops in all functions to process matrix elements
- For addition: `result[i][j] = matrix1[i][j] + matrix2[i][j]`
- For subtraction: `result[i][j] = matrix1[i][j] - matrix2[i][j]`
- For transpose: `result[i][j] = matrix[j][i]` (swap indices)
- Use a while loop for the menu system
- Display matrices with fixed-width formatting: `printf("%4d", value)`

## Steps to Complete

1. Define function prototypes at the top
2. Declare necessary arrays in main
3. Implement readMatrix function
4. Implement displayMatrix function
5. Implement addMatrices function
6. Implement subtractMatrices function
7. Implement transposeMatrix function
8. Create menu loop in main
9. Call appropriate functions based on menu choice
10. Add input validation for menu choices

## Common Mistakes to Avoid

- Forgetting to pass array dimensions to functions
- Modifying input matrices when calculating transpose
- Using wrong loop bounds (should be 0 to 2, not 1 to 3)
- Not aligning output properly
- Forgetting to create result matrix for operations
- Infinite menu loop (forgetting break or exit condition)

## What You'll Learn

- How to pass 2D arrays to functions
- Implementing matrix mathematical operations
- Creating a menu-driven interface
- Function modularization and organization
- Working with multiple 2D arrays simultaneously
- Proper formatting for matrix display

## Testing Your Code

Run your program and verify:
- ✅ All 18 elements read correctly for both matrices
- ✅ Menu displays correctly
- ✅ Each operation produces correct results
- ✅ Matrices display with proper alignment
- ✅ Menu loops until exit is chosen
- ✅ Invalid menu choices handled gracefully
- ✅ No compilation errors or warnings
- ✅ Functions work correctly with different inputs

## Extension Challenges (Optional)

If you finish early, try these enhancements:
1. Add matrix multiplication
2. Add scalar multiplication (multiply matrix by a number)
3. Calculate and display matrix determinant (3×3)
4. Add option to transpose Matrix 2 as well
5. Implement matrix equality check
6. Add option to input new matrices without restarting
