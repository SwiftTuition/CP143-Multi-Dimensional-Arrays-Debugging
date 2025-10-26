# Exercise 5: Debugging Challenge

**Difficulty:** HARD
**Estimated Time:** 60 minutes

## Goal
Practice debugging skills by finding and fixing multiple intentional bugs in a 2D array program.

## Description
You are given a buggy program that is supposed to manage a student grade tracking system. The program should read grades, calculate statistics, and display results. However, it contains multiple bugs that prevent it from working correctly.

Your task is to find and fix ALL the bugs to make the program work as intended.

## What the Program SHOULD Do

The program should:
1. Store grades for 4 students across 3 subjects
2. Read all grades from the user
3. Display all grades in a formatted table
4. Calculate and display the average for each student
5. Find and display the highest grade
6. Find and display the lowest grade
7. Count how many grades are passing (>= 50)

## Expected Output Format

```
Enter grades for Student 1:
Enter Math grade: 85
Enter Science grade: 92
Enter English grade: 78

Enter grades for Student 2:
Enter Math grade: 68
Enter Science grade: 74
Enter English grade: 81

Enter grades for Student 3:
Enter Math grade: 95
Enter Science grade: 88
Enter English grade: 91

Enter grades for Student 4:
Enter Math grade: 45
Enter Science grade: 52
Enter English grade: 48

===== GRADE REPORT =====

Student   Math  Science  English  Average
   1       85      92       78      85.0
   2       68      74       81      74.3
   3       95      88       91      91.3
   4       45      52       48      48.3

Highest grade: 95
Lowest grade: 45
Passing grades: 11 out of 12
```

## Types of Bugs Included

The buggy program contains the following types of errors:
1. Off-by-one errors in loops
2. Uninitialized variables
3. Array bounds violations
4. Logic errors in calculations
5. Incorrect array indexing
6. Missing or incorrect operators
7. Type conversion issues

## Your Task

1. **Read the code carefully** - Don't just compile and run
2. **Identify each bug** - There are at least 8-10 bugs
3. **Fix each bug** - Make minimal changes to fix the issue
4. **Test thoroughly** - Verify the program works correctly
5. **Document your fixes** - Add comments explaining what you fixed

## Testing Requirements

Test your fixed program with these inputs:

### Test Case 1: Sample Data
```
Student 1: 85, 92, 78
Student 2: 68, 74, 81
Student 3: 95, 88, 91
Student 4: 45, 52, 48
```

Expected Results:
- Averages: 85.0, 74.3, 91.3, 48.3
- Highest: 95
- Lowest: 45
- Passing: 11 out of 12

### Test Case 2: All Same Grades
```
All grades: 75
```

Expected Results:
- All averages: 75.0
- Highest: 75
- Lowest: 75
- Passing: 12 out of 12

### Test Case 3: Edge Cases
```
Student 1: 100, 100, 100
Student 2: 0, 0, 0
Student 3: 50, 50, 50
Student 4: 49, 51, 50
```

Expected Results:
- Averages: 100.0, 0.0, 50.0, 50.0
- Highest: 100
- Lowest: 0
- Passing: 8 out of 12

## Hints for Finding Bugs

- **Compile warnings:** Enable all warnings: `gcc -Wall -Wextra`
- **Array access:** Check all loop bounds carefully
- **Initialization:** Are all variables initialized before use?
- **Index confusion:** Are you using row/column correctly?
- **Integer division:** Are you losing decimal places?
- **Comparison operators:** Are you using == when you need <=?
- **Off-by-one:** Are loops going one too far or stopping one too early?

## Debugging Strategy

1. **Read the code first** - Try to spot bugs before running
2. **Compile and note errors/warnings** - Fix compilation errors first
3. **Run with test data** - See what happens
4. **Compare output to expected** - What's different?
5. **Use printf debugging** - Add print statements to see values
6. **Fix one bug at a time** - Don't change too much at once
7. **Retest after each fix** - Make sure you didn't break anything

## Common Bug Patterns to Look For

### Off-by-One Errors
```c
// Wrong: Skips last element
for (i = 0; i < SIZE - 1; i++)

// Wrong: Goes one past array end
for (i = 0; i <= SIZE; i++)

// Correct:
for (i = 0; i < SIZE; i++)
```

### Uninitialized Variables
```c
// Wrong: Variable not initialized
int max;
if (value > max) ...

// Correct:
int max = grades[0][0];
if (value > max) ...
```

### Array Bounds
```c
// Wrong: Accessing invalid index
grades[4][3]  // If array is [4][3], valid indices are [0-3][0-2]

// Correct:
grades[3][2]  // Last valid element
```

### Integer Division
```c
// Wrong: Loses decimal places
int avg = sum / count;

// Correct:
float avg = (float)sum / count;
```

## What You'll Learn

- How to systematically debug code
- Common programming errors with arrays
- Importance of bounds checking
- How to read and understand existing code
- Testing strategies
- Using compiler warnings effectively
- The value of careful code review

## Submission Requirements

Your fixed code should:
- ✅ Compile without errors or warnings
- ✅ Produce correct output for all test cases
- ✅ Have comments documenting each bug fix
- ✅ Follow proper coding style and indentation
- ✅ Use meaningful variable names (don't rename unnecessarily)

## Documentation Format

For each bug you fix, add a comment like this:

```c
// BUG FIX 1: Changed i <= STUDENTS to i < STUDENTS
// Reason: Loop was accessing grades[4][x] which is out of bounds
for (i = 0; i < STUDENTS; i++) {  // Fixed: was i <= STUDENTS
    ...
}
```

## Grading Criteria

If this were a graded assignment:
- Finding all bugs: 40%
- Fixing all bugs correctly: 40%
- Testing thoroughly: 10%
- Documentation of fixes: 10%

## Extension Challenge (Optional)

After fixing all bugs:
1. Add input validation (reject negative grades or grades > 100)
2. Add a function to find which student has the highest average
3. Add a function to find which subject has the lowest average
4. Implement error handling for invalid inputs

## Final Note

This exercise mimics real-world debugging. In practice, you'll often work with code written by others (or yourself months ago) that has bugs. Learning to systematically find and fix issues is a critical programming skill.

Good luck! Remember: every programmer debugs. The best programmers debug methodically.
