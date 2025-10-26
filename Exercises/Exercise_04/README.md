# Exercise 4: Image Filter (Simple)

**Difficulty:** HARD
**Estimated Time:** 75 minutes

## Goal
Implement simple image processing filters on a grayscale image represented as a 2D array.

## Description
You will work with an 8×8 grayscale image represented as a 2D array of integers (0-255, where 0 is black and 255 is white). You'll implement two filters: a blur filter (averaging surrounding pixels) and a simple edge detection filter.

## Background

In digital image processing:
- Grayscale images store intensity values (0 = black, 255 = white)
- Filters process each pixel based on its neighbors
- Blur averages neighboring pixels to smooth the image
- Edge detection highlights areas of rapid intensity change

## Requirements

Your program must:
1. Store an 8×8 grayscale image as a 2D integer array
2. Display the image in a visual format
3. Implement a blur filter (3×3 averaging)
4. Implement a simple edge detection filter
5. Handle boundary pixels appropriately
6. Display before and after images
7. Use functions for each operation

## Function Specifications

You must implement these functions:

```c
void displayImage(int image[8][8]);
// Displays the image with intensity values

void blurFilter(int input[8][8], int output[8][8]);
// Applies blur filter: each pixel becomes average of itself and neighbors
// For boundary pixels, only average available neighbors

void edgeDetect(int input[8][8], int output[8][8]);
// Applies simple edge detection
// Calculates absolute difference between pixel and average of neighbors
// Large differences indicate edges

void copyImage(int source[8][8], int dest[8][8]);
// Copies one image array to another

int clamp(int value, int min, int max);
// Ensures value stays within [min, max] range
// Returns min if value < min, max if value > max, otherwise value
```

## Input Specifications

The program uses a predefined test image. You should initialize it with values:

```c
int testImage[8][8] = {
    {50,  50,  50,  50,  50,  50,  50,  50},
    {50, 200, 200, 200, 200, 200, 200,  50},
    {50, 200,  50,  50,  50,  50, 200,  50},
    {50, 200,  50, 200, 200,  50, 200,  50},
    {50, 200,  50, 200, 200,  50, 200,  50},
    {50, 200,  50,  50,  50,  50, 200,  50},
    {50, 200, 200, 200, 200, 200, 200,  50},
    {50,  50,  50,  50,  50,  50,  50,  50}
};
```

This creates a white rectangle with a border on a dark background.

## Output Specifications

Display format for images (showing intensity values):
```
===== ORIGINAL IMAGE =====
 50  50  50  50  50  50  50  50
 50 200 200 200 200 200 200  50
 50 200  50  50  50  50 200  50
 50 200  50 200 200  50 200  50
 50 200  50 200 200  50 200  50
 50 200  50  50  50  50 200  50
 50 200 200 200 200 200 200  50
 50  50  50  50  50  50  50  50
```

## Sample Run
```
===== IMAGE PROCESSING DEMO =====

1. Display Original Image
2. Apply Blur Filter
3. Apply Edge Detection
4. Reset to Original
5. Exit

Enter your choice: 1

===== ORIGINAL IMAGE =====
 50  50  50  50  50  50  50  50
 50 200 200 200 200 200 200  50
 50 200  50  50  50  50 200  50
 50 200  50 200 200  50 200  50
 50 200  50 200 200  50 200  50
 50 200  50  50  50  50 200  50
 50 200 200 200 200 200 200  50
 50  50  50  50  50  50  50  50

Enter your choice: 2

===== BLURRED IMAGE =====
 77  94 100 100 100 100  94  77
 94 116 111 111 111 111 116  94
100 111  94  94  94  94 111 100
100 111  94 100 100  94 111 100
100 111  94 100 100  94 111 100
100 111  94  94  94  94 111 100
 94 116 111 111 111 111 116  94
 77  94 100 100 100 100  94  77

Enter your choice: 3

===== EDGE DETECTED IMAGE =====
  0   0   0   0   0   0   0   0
  0 100 100 100 100 100 100   0
  0 100   0   0   0   0 100   0
  0 100   0  66  66   0 100   0
  0 100   0  66  66   0 100   0
  0 100   0   0   0   0 100   0
  0 100 100 100 100 100 100   0
  0   0   0   0   0   0   0   0

Enter your choice: 5
Goodbye!
```

## Algorithm Details

### Blur Filter (3×3 Average)

For each pixel at position [row][col]:
1. Sum the pixel and all its neighbors (up to 8 neighbors)
2. Count how many neighbors exist (fewer at boundaries)
3. Calculate average: sum / count
4. Store result in output array

Example for interior pixel:
```
Neighbors:     nw  n  ne
               w   X   e
               sw  s  se

Average = (nw + n + ne + w + X + e + sw + s + se) / 9
```

### Edge Detection

For each pixel:
1. Calculate average of neighbors (excluding center pixel)
2. Calculate absolute difference: |pixel_value - neighbor_average|
3. Larger differences indicate edges
4. Store result in output array

## Constraints

- Image size is fixed at 8×8
- Pixel values must be 0-255
- Use clamp function to ensure results stay in valid range
- Don't modify input array when creating output
- Handle boundary pixels (edges and corners) properly

## Test Cases

### Test Case 1: Uniform Image
All pixels = 128
Expected: Blur = all 128, Edge detection = all 0

### Test Case 2: Vertical Line
Column 4 = 255, rest = 0
Expected: Blur shows gradient, Edge detection highlights line

### Test Case 3: Checkerboard
Alternating 0 and 255
Expected: Blur smooths out, Edge detection shows all transitions

## Hints

- Use clamp to keep pixel values in 0-255 range
- For blur: count actual neighbors (corners have 3, edges have 5, interior has 8)
- For boundary handling, check if neighbor indices are valid before accessing
- Create helper function to safely get pixel value (return 0 for out-of-bounds)
- Integer division is fine for averaging
- Use absolute value function: `abs()` from `<stdlib.h>`

## Steps to Complete

1. Define function prototypes
2. Initialize test image with given values
3. Implement displayImage (nested loops with formatting)
4. Implement copyImage (simple nested loop copy)
5. Implement clamp function
6. Implement blurFilter:
   - For each pixel
   - Sum valid neighbors (check bounds)
   - Count valid neighbors
   - Calculate average
   - Clamp result to 0-255
7. Implement edgeDetect:
   - For each pixel
   - Calculate neighbor average
   - Find absolute difference
   - Clamp result
8. Create menu system
9. Test each filter

## Common Mistakes to Avoid

- Accessing array out of bounds when checking neighbors
- Modifying input array instead of writing to output array
- Not handling boundary pixels (corners and edges)
- Integer overflow (values exceeding 255)
- Dividing by zero when counting neighbors
- Including center pixel in neighbor average for edge detection
- Not using absolute value for edge differences

## What You'll Learn

- Image processing concepts
- Neighbor access patterns in 2D arrays
- Boundary condition handling
- Algorithm implementation from description
- Working with multiple 2D arrays simultaneously
- Practical application of 2D array traversal

## Testing Your Code

Run your program and verify:
- ✅ Original image displays correctly
- ✅ Blur filter smooths the image
- ✅ Edge detection highlights boundaries
- ✅ No array bounds violations
- ✅ All pixel values remain 0-255
- ✅ Boundary pixels processed correctly
- ✅ Can reset to original image
- ✅ No compilation errors or warnings

## Debugging Tips

- Print intermediate values during filter calculation
- Check neighbor coordinates before array access
- Verify neighbor count is correct for boundary pixels
- Test with simpler images first (all one value)
- Print small sections during development

## Extension Challenges (Optional)

If you finish early, try these enhancements:
1. Implement sharpen filter (enhance edges)
2. Add brightness/contrast adjustment
3. Implement different blur sizes (5×5, 7×7)
4. Add threshold filter (convert to pure black/white)
5. Implement median filter (better at preserving edges)
6. Allow user to input custom 8×8 image
7. Export result to text file
8. Chain multiple filters together
9. Implement rotation or flip operations
10. Add histogram display (count pixels at each intensity)
