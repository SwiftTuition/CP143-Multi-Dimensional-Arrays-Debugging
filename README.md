# CP143: Multi-Dimensional Arrays & Debugging - Practice Exercises

Welcome! This repository contains practice exercises for **Package 6: Multi-Dimensional Arrays & Debugging** from CP143 (Computer Programming 143) at Stellenbosch University.

## 📚 What's Included

This repository contains **5 practice exercises** designed to help you master:
- 2D array declaration and manipulation
- Matrix operations (addition, transpose, multiplication)
- Nested loop patterns
- Debugging techniques
- Real-world applications of multi-dimensional arrays

## 🚀 Getting Started

### Option 1: Download ZIP (Recommended)
1. Click the green **Code** button above
2. Select **Download ZIP**
3. Extract the files to your computer
4. Open the exercises in Code::Blocks or your preferred C IDE

### Option 2: Clone with Git
```bash
git clone https://github.com/SwiftTuition/CP143-Multi-Dimensional-Arrays-Debugging.git
cd CP143-Multi-Dimensional-Arrays-Debugging
```

### Option 3: Use GitHub Codespaces
1. Click the green **Code** button above
2. Select **Codespaces** tab
3. Click **Create codespace on main**
4. Code directly in your browser - no installation needed!

## 📂 Exercise Overview

Each exercise is in its own folder with:
- **README.md** - Problem description, requirements, test cases
- **exercise_X.c** - Starter code with TODO comments to guide you

### Exercise 1: Grade Book System
**Difficulty:** Medium (45 min)
**Skills:** 2D arrays, row/column traversal, statistics

Create a grade tracking system for students and tests.

### Exercise 2: Matrix Operations Calculator
**Difficulty:** Medium (50 min)
**Skills:** Matrix operations, functions with 2D arrays

Implement matrix addition, subtraction, and transpose operations.

### Exercise 3: Seating Chart Manager
**Difficulty:** Medium-Hard (60 min)
**Skills:** State management, validation, user interaction

Build a cinema seat reservation system.

### Exercise 4: Image Filter Simulator
**Difficulty:** Hard (75 min)
**Skills:** Convolution, neighbor processing, algorithms

Apply blur and edge detection filters to simple images.

### Exercise 5: Debugging Challenge
**Difficulty:** Hard (60 min)
**Skills:** Debugging, testing, logical error identification

Find and fix bugs in provided code.

## 🛠️ How to Compile and Run

### Using Code::Blocks
1. Open Code::Blocks
2. Create a new project or open an existing one
3. Add the exercise `.c` file to your project
4. Press F9 to build and run

### Using Command Line (gcc)
```bash
# Navigate to exercise folder
cd Exercises/Exercise_01

# Compile
gcc exercise_1.c -o exercise_1

# Run
./exercise_1
```

### Using Codespaces
Code::Blocks is not available in Codespaces, but you can compile and run from the terminal:
```bash
gcc exercise_1.c -o exercise_1 && ./exercise_1
```

## 📋 Before You Start

1. Read the exercise README.md carefully
2. Understand the requirements and test cases
3. Follow the TODO comments in the starter code
4. Test your code with the provided test cases
5. Handle edge cases (empty arrays, invalid input, etc.)

## 💡 Tips for Success

- **Start simple** - Get basic functionality working before adding features
- **Test frequently** - Compile and run after each small change
- **Use printf for debugging** - Print array contents to verify logic
- **Watch array bounds** - Off-by-one errors are common with 2D arrays
- **Remember row-major order** - Arrays are stored row by row in memory
- **Comment your code** - Explain your logic for complex sections

## 📝 Coding Standards

Follow these standards for all exercises:

1. **Include header comments** with:
   - Your name and student number
   - Exercise number and description
   - Date

2. **Use meaningful variable names**
   - `row`, `col` instead of `i`, `j` where appropriate
   - Descriptive names for matrices (`grades`, `matrix_a`, etc.)

3. **Proper indentation** (4 spaces or 1 tab per level)

4. **Comment complex logic** but avoid obvious comments

Example header:
```c
/*
 * Name: Your Name
 * Student Number: 12345678
 * Exercise: 1 - Grade Book System
 * Description: Manages student grades using 2D arrays
 * Date: 2024-10-26
 */
```

## 🆘 Getting Help

If you're stuck:
1. Re-read the theory material on 2D arrays
2. Review the worked examples
3. Check the README hints (but try to solve it first!)
4. Ask a friend or tutor for guidance
5. Use the debugger to step through your code

## 📊 Estimated Time

- **Total time:** 4.5-5 hours for all exercises
- **Exercise 1:** 45 minutes
- **Exercise 2:** 50 minutes
- **Exercise 3:** 60 minutes
- **Exercise 4:** 75 minutes
- **Exercise 5:** 60 minutes

Take breaks between exercises and don't rush!

## 🎯 Learning Outcomes

By completing these exercises, you will:
- Master 2D array declaration and initialization
- Understand row-major memory layout
- Implement matrix operations confidently
- Debug array-related errors effectively
- Apply 2D arrays to real-world problems

## 📬 Questions or Issues?

If you find errors in the exercises or have questions:
- Open an issue on this repository
- Contact your instructor or TA
- Check the course discussion forum

---

**Good luck with your exercises!** 🚀

Remember: Programming is learned by doing. The more you practice, the better you'll become!

---

**Swift Tuition** | CP143 Computer Programming 143 | Stellenbosch University
