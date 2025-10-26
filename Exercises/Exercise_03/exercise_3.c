/* Filename:         exercise_3.c
 * Date:             YYYY/MM/DD
 * Name:             Your Name Here
 * Student number:   Your Student Number Here
 *
 * By submitting this file electronically, I declare that
 * it is my own original work, and that I have not copied
 * any part of it from another source.
 *
 * Description: Theater seating reservation system that manages seat
 *              bookings using a 2D array to track availability.
 */

#include <stdio.h>

// Define constants for theater dimensions
#define ROWS 10
#define SEATS 15

// TODO: Add function prototypes here
// void initializeSeats(int seats[ROWS][SEATS]);
// void displaySeatingChart(int seats[ROWS][SEATS]);
// int reserveSeat(int seats[ROWS][SEATS], int row, int col);
// int cancelReservation(int seats[ROWS][SEATS], int row, int col);
// int countReserved(int seats[ROWS][SEATS]);
// int countAvailable(int seats[ROWS][SEATS]);


int main() {
    // TODO: Declare 2D array for seating chart
    // Hint: int seatingChart[ROWS][SEATS];



    // TODO: Initialize all seats to available



    int choice, row, seat;

    do {
        // Display menu
        printf("\n===== THEATER SEATING SYSTEM =====\n\n");
        printf("1. Display Seating Chart\n");
        printf("2. Reserve a Seat\n");
        printf("3. Cancel Reservation\n");
        printf("4. Show Statistics\n");
        printf("5. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // TODO: Process menu choice
        switch (choice) {
            case 1:
                // Display seating chart


                break;

            case 2:
                // Reserve a seat
                printf("\nEnter row number (1-10): ");
                scanf("%d", &row);
                printf("Enter seat number (1-15): ");
                scanf("%d", &seat);

                // TODO: Validate input (row 1-10, seat 1-15)


                // TODO: Convert to 0-indexed and call reserveSeat


                // TODO: Display success or failure message


                break;

            case 3:
                // Cancel reservation
                printf("\nEnter row number (1-10): ");
                scanf("%d", &row);
                printf("Enter seat number (1-15): ");
                scanf("%d", &seat);

                // TODO: Validate input


                // TODO: Convert to 0-indexed and call cancelReservation


                // TODO: Display success or failure message


                break;

            case 4:
                // Show statistics
                // TODO: Calculate and display statistics
                // - Total seats
                // - Reserved seats
                // - Available seats
                // - Occupancy rate percentage


                break;

            case 5:
                printf("Thank you for using the Theater Seating System!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}

// TODO: Implement initializeSeats function
// Set all elements in the array to 0 (available)



// TODO: Implement displaySeatingChart function
// Display header with seat numbers
// For each row:
//   - Print row number
//   - For each seat: print '.' if available (0), 'X' if reserved (1)
// Display legend and statistics



// TODO: Implement reserveSeat function
// Check if seat is available (value is 0)
// If available: set to 1 and return 1
// If not available: return 0



// TODO: Implement cancelReservation function
// Check if seat is reserved (value is 1)
// If reserved: set to 0 and return 1
// If not reserved: return 0



// TODO: Implement countReserved function
// Traverse array and count seats with value 1



// TODO: Implement countAvailable function
// Traverse array and count seats with value 0
// Or calculate: (ROWS * SEATS) - countReserved()


