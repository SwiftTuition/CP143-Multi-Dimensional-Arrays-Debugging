# Exercise 1: Grade Book System

**Difficulty:** MEDIUM
**Estimated Time:** 45 minutes

## Goal
Create a comprehensive grade tracking system using a 2D array to store and analyze student test scores.

## Description
You will build a grade book system that tracks grades for 5 students across 4 tests. The system will read grades from the user, calculate various statistics, and display results in a formatted table.

## Requirements

Your program must:
1. Declare a 2D array to store grades for 5 students and 4 tests
2. Read all grades from the user with clear prompts
3. Display all grades in a formatted table
4. Calculate and display the average grade for each student
5. Calculate and display the average grade for each test
6. Find and display the highest grade overall (including student and test number)
7. Find and display the lowest grade overall (including student and test number)
8. Use proper formatting with aligned columns

## Input Specifications

- Program should read 20 grades total (5 students × 4 tests)
- Grades should be integers between 0 and 100
- Prompt format: "Enter grade for Student X, Test Y: "

## Output Specifications

Your output should include:
1. A formatted table showing all grades
2. Average per student (displayed to 1 decimal place)
3. Average per test (displayed to 1 decimal place)
4. Highest grade with location
5. Lowest grade with location

## Sample Input
```
Enter grade for Student 1, Test 1: 85
Enter grade for Student 1, Test 2: 92
Enter grade for Student 1, Test 3: 78
Enter grade for Student 1, Test 4: 88
Enter grade for Student 2, Test 1: 76
Enter grade for Student 2, Test 2: 84
Enter grade for Student 2, Test 3: 91
Enter grade for Student 2, Test 4: 79
Enter grade for Student 3, Test 1: 95
Enter grade for Student 3, Test 2: 89
Enter grade for Student 3, Test 3: 93
Enter grade for Student 3, Test 4: 97
Enter grade for Student 4, Test 1: 68
Enter grade for Student 4, Test 2: 74
Enter grade for Student 4, Test 3: 82
Enter grade for Student 4, Test 4: 71
Enter grade for Student 5, Test 1: 88
Enter grade for Student 5, Test 2: 90
Enter grade for Student 5, Test 3: 85
Enter grade for Student 5, Test 4: 92
```

## Sample Output
```
===== GRADE BOOK SYSTEM =====

Student Test1 Test2 Test3 Test4 Average
   1     85    92    78    88    85.8
   2     76    84    91    79    82.5
   3     95    89    93    97    93.5
   4     68    74    82    71    73.8
   5     88    90    85    92    88.8

Test Averages:
Test 1: 82.4
Test 2: 85.8
Test 3: 85.8
Test 4: 85.4

Highest grade: 97 (Student 3, Test 4)
Lowest grade: 68 (Student 4, Test 1)
```

## Constraints

- Use constants for array dimensions: `STUDENTS = 5`, `TESTS = 4`
- Grades must be between 0 and 100 (add validation if you want a challenge)
- Averages should be calculated as floats but displayed to 1 decimal place
- Table must be properly aligned (use appropriate spacing)

## Test Cases

### Test Case 1: All Same Grades
Input: All grades = 75
Expected: All averages = 75.0, highest = 75, lowest = 75

### Test Case 2: Increasing Grades
Input: Start at 60, increase each grade by 2
Expected: Check calculations match

### Test Case 3: Edge Values
Input: Mix of 0s, 50s, and 100s
Expected: Correct identification of min/max

## Hints

- Use nested loops to read grades: outer loop for students, inner for tests
- For the table display, use `printf` with width specifiers: `printf("%4d", grade)`
- Calculate averages using float division: `(float)sum / count`
- Track max/min while traversing the array, keeping row and column indices
- Use `%.1f` format specifier to display floats with 1 decimal place

## Steps to Complete

1. Define constants for STUDENTS and TESTS
2. Declare the 2D array: `int grades[STUDENTS][TESTS]`
3. Write a loop to read all grades from the user
4. Display the grade table with headers
5. Calculate and display student averages (loop through rows)
6. Calculate and display test averages (loop through columns)
7. Find highest grade (traverse entire array)
8. Find lowest grade (traverse entire array)

## Common Mistakes to Avoid

- Confusing row and column indices
- Using integer division for averages instead of float division
- Forgetting to initialize max/min values properly
- Not storing the position (row/col) of max/min grades
- Incorrect loop bounds (off-by-one errors)
- Poor formatting making output hard to read

## What You'll Learn

- How to declare and use 2D arrays
- Nested loop patterns for 2D array traversal
- Row-wise vs column-wise processing
- Calculating statistics on 2D data
- Formatted output with alignment
- Tracking values and positions simultaneously

## Testing Your Code

Run your program and verify:
- ✅ All 20 grades are read correctly
- ✅ Table displays with proper alignment
- ✅ Student averages are correct (check calculations)
- ✅ Test averages are correct (check calculations)
- ✅ Highest grade is identified correctly with position
- ✅ Lowest grade is identified correctly with position
- ✅ No compilation errors or warnings
- ✅ Program handles the sample input correctly

## Extension Challenges (Optional)

If you finish early, try these enhancements:
1. Add input validation (reject grades outside 0-100)
2. Identify which student has the highest average
3. Identify which test was the hardest (lowest average)
4. Add a feature to display grades above/below class average
5. Calculate the standard deviation for each test
