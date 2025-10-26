# Multi-Dimensional Arrays & Debugging - Exercise Summary

## Overview
This exercise package contains 5 comprehensive exercises designed to match the difficulty level of Practical 6 (2024). All exercises focus on multi-dimensional arrays, practical applications, and debugging skills.

## Exercise List

### Exercise 1: Grade Book System (MEDIUM)
**Time:** ~45 minutes
**Focus:** 2D array basics, traversal, statistics

**Key Concepts:**
- Declaring and initializing 2D arrays
- Reading data into 2D arrays
- Row-wise and column-wise calculations
- Finding max/min with position tracking
- Formatted output with alignment

**Deliverables:**
- Read grades for 5 students × 4 tests
- Display formatted grade table
- Calculate student averages
- Calculate test averages
- Find highest and lowest grades with positions

### Exercise 2: Matrix Operations Calculator (MEDIUM)
**Time:** ~50 minutes
**Focus:** Functions with 2D arrays, matrix operations

**Key Concepts:**
- Passing 2D arrays to functions
- Matrix addition and subtraction
- Matrix transpose
- Menu-driven interface
- Modular function design

**Deliverables:**
- Read two 3×3 matrices
- Implement addition function
- Implement subtraction function
- Implement transpose function
- Menu system for operation selection

### Exercise 3: Seating Chart Manager (MEDIUM-HARD)
**Time:** ~60 minutes
**Focus:** State management, user interaction, validation

**Key Concepts:**
- Managing state in 2D arrays (available/reserved)
- Input validation and bounds checking
- Visual representation of 2D data
- CRUD operations (reserve, cancel, display)
- Converting between user input and array indices

**Deliverables:**
- 10×15 seating chart
- Reserve seat functionality
- Cancel reservation functionality
- Visual chart display
- Statistics tracking

### Exercise 4: Image Filter (Simple) (HARD)
**Time:** ~75 minutes
**Focus:** Algorithms, neighbor processing, boundary handling

**Key Concepts:**
- Accessing neighbors in 2D arrays
- Boundary condition handling
- Blur filter (averaging)
- Edge detection algorithm
- Working with multiple arrays simultaneously

**Deliverables:**
- 8×8 grayscale image representation
- Blur filter implementation
- Edge detection implementation
- Boundary pixel handling
- Before/after visualization

### Exercise 5: Debugging Challenge (HARD)
**Time:** ~60 minutes
**Focus:** Debugging, code reading, systematic error identification

**Key Concepts:**
- Off-by-one errors
- Uninitialized variables
- Array bounds violations
- Integer division issues
- Logic errors in comparisons

**Bugs Included:**
1. Off-by-one in readGrades loop (i <= STUDENTS)
2. Integer division in calculateAverage
3. Uninitialized variable in findHighest
4. Off-by-one in findLowest loop (j <= SUBJECTS)
5. Incorrect comparison in countPassing (> 50 instead of >= 50)

## Difficulty Progression

```
Easy → Medium → Medium-Hard → Hard → Hard
E1: Grade Book → E2: Matrix Calc → E3: Seating → E4: Image Filter → E5: Debug
```

## Learning Outcomes Covered

By completing all exercises, students will:
- ✅ Master 2D array declaration and initialization
- ✅ Perform row-wise and column-wise operations
- ✅ Pass 2D arrays to functions correctly
- ✅ Implement practical applications with 2D arrays
- ✅ Handle boundary conditions properly
- ✅ Access neighbors in 2D arrays
- ✅ Debug common array-related errors
- ✅ Validate user input for array operations
- ✅ Create formatted output for 2D data
- ✅ Implement algorithms on 2D structures

## Matching Practical 6 Requirements

These exercises match Practical 6 (2024) difficulty in:

**Complexity:**
- Similar array sizes (Practical 6A: 10 elements, our E1: 5×4 = 20 elements)
- Functions required (Practical 6B had 5 functions, our exercises have 4-6 each)
- Multi-step operations (like Practical 6's sort + stats)

**Concepts:**
- Array manipulation (Practical 6A: character operations, ours: grade/matrix/image operations)
- Function usage (Practical 6B: multiple functions, ours: modular design throughout)
- Algorithm implementation (Practical 6B: bubble sort, ours: filters, edge detection)

**Difficulty:**
- Input validation needs
- Multiple nested loops
- State management
- Complex output formatting

## File Structure

```
Exercises/
├── README.md (Main guide)
├── Exercise_01/
│   ├── README.md (Detailed specs)
│   └── exercise_1.c (Starter with TODOs)
├── Exercise_02/
│   ├── README.md
│   └── exercise_2.c
├── Exercise_03/
│   ├── README.md
│   └── exercise_3.c
├── Exercise_04/
│   ├── README.md
│   └── exercise_4.c
└── Exercise_05/
    ├── README.md
    └── exercise_5.c (Buggy code to fix)
```

## Total Content

- **5 exercises** (matching Practical 6's 3 questions but with more depth)
- **6 README files** (1 main + 5 exercise-specific)
- **5 starter code files** (ranging from 40-80 lines with TODOs)
- **~40 test cases** across all exercises
- **~15 extension challenges** for advanced students

## Starter Code Features

All starter files include:
- Standard comment header template
- Required #includes
- Constants defined
- Function prototypes (commented)
- TODO comments for guidance (not snitching!)
- Main structure in place
- No complete solutions

## Distribution

Students access via:
1. **Download ZIP** - Main method, works offline
2. **GitHub Codespaces** - Optional browser-based alternative

ZIP file: `Exercises.zip` (23.6 KB)
Location: `/Multi-Dimensional_Arrays_and_Debugging/Exercises.zip`

## Testing Verified

All exercises tested for:
- Clear specifications
- Achievable difficulty
- Comprehensive test cases
- Proper TODO guidance
- No accidental solution snitching
- Appropriate challenge level

## Created: 2025-10-26
## Author: Claude Code Agent
## Course: CP143 (C Programming) - Stellenbosch University
