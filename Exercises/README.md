# CP143 - Multi-Dimensional Arrays and Debugging
## Practice Exercises

Welcome to the Multi-Dimensional Arrays and Debugging practice exercises! This repository contains 5 exercises to help you master working with 2D arrays, debugging techniques, and practical applications.

## Getting Started

### Option 1: Download and Work Locally (Recommended)

1. **Download this repository:**
   - Click the green "Code" button above
   - Select "Download ZIP"
   - Extract the ZIP file to your computer

2. **Open in Code::Blocks:**
   - Launch Code::Blocks
   - For each exercise, create a new Console Application project
   - Add the exercise .c file to your project
   - Complete the code
   - Compile and run to test

### Option 2: Use GitHub Codespaces (Browser-Based)

1. Click the green "Code" button above
2. Click "Codespaces" tab
3. Click "Create codespace on main"
4. Wait ~30 seconds for environment setup
5. Start coding in your browser!

## Exercises

Each exercise folder contains:
- `exercise_X.c` - Starter code (complete this file)
- `README.md` - Detailed instructions and requirements
- Sample output to guide your work

### Exercise 1: Grade Book System (MEDIUM)
Create a comprehensive grade tracking system using a 2D array to store student grades across multiple tests. Calculate averages per student, averages per test, and find highest/lowest grades.

**Skills:** 2D array declaration, initialization, traversal, calculations, formatted output

### Exercise 2: Matrix Operations Calculator (MEDIUM)
Implement mathematical operations on matrices including addition, subtraction, and transpose. Work with functions that operate on 2D arrays.

**Skills:** 2D array functions, matrix operations, modular design, menu-driven interface

### Exercise 3: Seating Chart Manager (MEDIUM-HARD)
Build a theater seating reservation system using a 2D array to track seat availability. Implement reservation, cancellation, and display functions.

**Skills:** 2D array manipulation, row/column indexing, state management, user interaction

### Exercise 4: Image Filter (Simple) (HARD)
Work with 2D arrays representing grayscale images. Implement simple image processing filters including blur and edge detection.

**Skills:** 2D array processing, neighbor access, algorithm implementation, boundary handling

### Exercise 5: Debugging Challenge (HARD)
Debug a complete program with multiple intentional bugs. Practice identifying and fixing common errors including off-by-one errors, uninitialized variables, and array bounds violations.

**Skills:** Debugging, error identification, code reading, problem solving

## Tips for Success

1. **Work sequentially** - Each exercise builds on previous concepts
2. **Draw diagrams** - Visualize your 2D arrays on paper
3. **Test incrementally** - Don't write all code before testing
4. **Check array bounds** - Off-by-one errors are common with 2D arrays
5. **Use meaningful indices** - Name your loop variables clearly (row, col)
6. **Initialize arrays** - Always initialize your 2D arrays before use

## Comment Header Template

Add this to the top of each .c file:

```c
/* Filename:         exercise_X.c
 * Date:             YYYY/MM/DD
 * Name:             Your Name
 * Student number:   Your Student Number
 *
 * By submitting this file electronically, I declare that
 * it is my own original work, and that I have not copied
 * any part of it from another source.
 *
 * Description: [Brief description of what the program does]
 */
```

## Compilation Instructions

### Using Code::Blocks:
1. Press F9 to build and run
2. Or use: Build → Build and Run from the menu

### Using Terminal (if you prefer):
```bash
gcc exercise_1.c -o exercise_1
./exercise_1
```

## Need Help?

- Review the theory.html for 2D array concepts
- Check examples.html for worked examples
- Reread the exercise requirements carefully
- Draw out your array on paper before coding
- Use printf to debug - print array contents at different stages

## Coding Standards

Follow these guidelines:
- Use meaningful variable names (students, tests, rows, cols)
- Indent your code properly (use 4 spaces)
- Add comments to explain your logic
- Initialize all arrays before using them
- Test with different array sizes
- Check array bounds in loops

## Common 2D Array Pitfalls

- **Row vs Column confusion** - Always be clear which is which
- **Off-by-one errors** - Remember arrays start at index 0
- **Uninitialized values** - Always initialize before reading
- **Wrong loop bounds** - Use ROWS and COLS constants
- **Incorrect indexing** - Remember it's array[row][col], not array[col][row]

## Learning Outcomes

By completing these exercises, you will:
- ✅ Declare and initialize 2D arrays correctly
- ✅ Access 2D array elements using proper indexing
- ✅ Traverse 2D arrays using nested loops
- ✅ Pass 2D arrays to functions
- ✅ Perform calculations on 2D array data
- ✅ Debug common array-related errors
- ✅ Implement practical applications with 2D arrays
- ✅ Recognize and fix off-by-one errors
- ✅ Handle array bounds properly

## How to Compile and Run

### Basic Compilation:
```bash
gcc exercise_1.c -o exercise_1
./exercise_1
```

### With Warnings (Recommended):
```bash
gcc -Wall -Wextra exercise_1.c -o exercise_1
./exercise_1
```

The `-Wall -Wextra` flags enable extra warnings that help catch common errors.

## Testing Your Solutions

For each exercise:
1. Compile without errors or warnings
2. Test with the provided sample inputs
3. Verify output matches expected format
4. Test with edge cases (empty arrays, single elements)
5. Check for memory errors (no crashes, no warnings)

## Difficulty Progression

- **Exercises 1-2:** Focus on basic 2D array operations
- **Exercise 3:** Adds more complex logic and state management
- **Exercise 4:** Introduces algorithms and boundary conditions
- **Exercise 5:** Tests your debugging and problem-solving skills

Good luck with your exercises!
