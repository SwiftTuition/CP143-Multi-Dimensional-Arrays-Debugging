/* Filename:         exercise_4.c
 * Date:             YYYY/MM/DD
 * Name:             Your Name Here
 * Student number:   Your Student Number Here
 *
 * By submitting this file electronically, I declare that
 * it is my own original work, and that I have not copied
 * any part of it from another source.
 *
 * Description: Simple image filter implementation using 2D arrays
 *              to represent grayscale images. Implements blur and
 *              edge detection filters.
 */

#include <stdio.h>
#include <stdlib.h>  // For abs() function

// Define image dimensions
#define SIZE 8

// TODO: Add function prototypes here
// void displayImage(int image[SIZE][SIZE]);
// void blurFilter(int input[SIZE][SIZE], int output[SIZE][SIZE]);
// void edgeDetect(int input[SIZE][SIZE], int output[SIZE][SIZE]);
// void copyImage(int source[SIZE][SIZE], int dest[SIZE][SIZE]);
// int clamp(int value, int min, int max);


int main() {
    // Predefined test image (white rectangle with border on dark background)
    int originalImage[SIZE][SIZE] = {
        {50,  50,  50,  50,  50,  50,  50,  50},
        {50, 200, 200, 200, 200, 200, 200,  50},
        {50, 200,  50,  50,  50,  50, 200,  50},
        {50, 200,  50, 200, 200,  50, 200,  50},
        {50, 200,  50, 200, 200,  50, 200,  50},
        {50, 200,  50,  50,  50,  50, 200,  50},
        {50, 200, 200, 200, 200, 200, 200,  50},
        {50,  50,  50,  50,  50,  50,  50,  50}
    };

    // TODO: Declare working image and output image arrays
    // int currentImage[SIZE][SIZE];
    // int outputImage[SIZE][SIZE];



    // TODO: Copy original to current image



    int choice;

    do {
        printf("\n===== IMAGE PROCESSING DEMO =====\n\n");
        printf("1. Display Original Image\n");
        printf("2. Apply Blur Filter\n");
        printf("3. Apply Edge Detection\n");
        printf("4. Reset to Original\n");
        printf("5. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Display original image


                break;

            case 2:
                // Apply blur filter
                // TODO: Call blurFilter, then display result



                break;

            case 3:
                // Apply edge detection
                // TODO: Call edgeDetect, then display result



                break;

            case 4:
                // Reset to original
                // TODO: Copy original to current


                printf("Image reset to original.\n");
                break;

            case 5:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}

// TODO: Implement displayImage function
// Print header
// Use nested loops to print each pixel value with formatting
// Use %4d for proper alignment



// TODO: Implement blurFilter function
// For each pixel at [row][col]:
//   - Initialize sum = 0, count = 0
//   - Check all 8 neighbors plus center pixel
//   - For each valid neighbor (check bounds):
//       - Add to sum
//       - Increment count
//   - Calculate average: sum / count
//   - Clamp to 0-255 range
//   - Store in output array
//
// Neighbor offsets: (-1,-1), (-1,0), (-1,1),
//                   (0,-1),  (0,0),  (0,1),
//                   (1,-1),  (1,0),  (1,1)



// TODO: Implement edgeDetect function
// For each pixel at [row][col]:
//   - Initialize sum = 0, count = 0
//   - Check all 8 neighbors (NOT including center)
//   - For each valid neighbor:
//       - Add to sum
//       - Increment count
//   - Calculate neighbor average: sum / count (if count > 0)
//   - Calculate difference: abs(pixel - neighbor_average)
//   - Clamp result to 0-255
//   - Store in output array



// TODO: Implement copyImage function
// Use nested loops to copy each element from source to dest



// TODO: Implement clamp function
// If value < min, return min
// If value > max, return max
// Otherwise return value


