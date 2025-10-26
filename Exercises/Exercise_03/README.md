# Exercise 3: Seating Chart Manager

**Difficulty:** MEDIUM-HARD
**Estimated Time:** 60 minutes

## Goal
Build a theater seating reservation system using a 2D array to track seat availability and implement booking operations.

## Description
You will create a seating management system for a small theater with 10 rows and 15 seats per row. The system tracks which seats are available (0) or reserved (1), and allows users to reserve seats, cancel reservations, and view the seating chart.

## Requirements

Your program must:
1. Initialize a seating chart with all seats available
2. Display the seating chart in a visual, easy-to-read format
3. Allow users to reserve a seat (if available)
4. Allow users to cancel a reservation (if seat is reserved)
5. Show seat availability before reservation attempts
6. Provide a menu-driven interface
7. Track total reserved and available seats
8. Use functions for each operation

## Function Specifications

You must implement these functions:

```c
void initializeSeats(int seats[10][15]);
// Initializes all seats to available (0)

void displaySeatingChart(int seats[10][15]);
// Displays the seating chart with row/column labels

int reserveSeat(int seats[10][15], int row, int col);
// Reserves a seat if available
// Returns 1 if successful, 0 if seat already reserved or invalid

int cancelReservation(int seats[10][15], int row, int col);
// Cancels a reservation if seat is reserved
// Returns 1 if successful, 0 if seat was not reserved or invalid

int countReserved(int seats[10][15]);
// Returns the number of reserved seats

int countAvailable(int seats[10][15]);
// Returns the number of available seats
```

## Input Specifications

- Row numbers: 1-10 (converted to 0-9 for array indexing)
- Seat numbers: 1-15 (converted to 0-14 for array indexing)
- Menu choice: integer 1-5

## Output Specifications

Seating chart format:
```
===== SEATING CHART =====
     Seat Numbers
     1  2  3  4  5  6  7  8  9 10 11 12 13 14 15
Row
 1   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
 2   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
 3   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
 4   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
 5   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
 6   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
 7   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
 8   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
 9   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
10   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .

Legend: . = Available, X = Reserved
Reserved: 0 | Available: 150
```

Menu format:
```
===== THEATER SEATING SYSTEM =====

1. Display Seating Chart
2. Reserve a Seat
3. Cancel Reservation
4. Show Statistics
5. Exit

Enter your choice:
```

## Sample Run
```
===== THEATER SEATING SYSTEM =====

1. Display Seating Chart
2. Reserve a Seat
3. Cancel Reservation
4. Show Statistics
5. Exit

Enter your choice: 2

Enter row number (1-10): 5
Enter seat number (1-15): 8
Seat successfully reserved!

Enter your choice: 2

Enter row number (1-10): 5
Enter seat number (1-15): 8
Sorry, that seat is already reserved.

Enter your choice: 1

===== SEATING CHART =====
     Seat Numbers
     1  2  3  4  5  6  7  8  9 10 11 12 13 14 15
Row
 1   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
 2   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
 3   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
 4   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
 5   .  .  .  .  .  .  .  X  .  .  .  .  .  .  .
 6   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
 7   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
 8   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
 9   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
10   .  .  .  .  .  .  .  .  .  .  .  .  .  .  .

Legend: . = Available, X = Reserved
Reserved: 1 | Available: 149

Enter your choice: 3

Enter row number (1-10): 5
Enter seat number (1-15): 8
Reservation cancelled successfully!

Enter your choice: 4

===== SEATING STATISTICS =====
Total Seats: 150
Reserved: 0
Available: 150
Occupancy Rate: 0.0%

Enter your choice: 5
Thank you for using the Theater Seating System!
```

## Constraints

- Theater has exactly 10 rows and 15 seats per row
- Seats are represented as: 0 = available, 1 = reserved
- User enters row 1-10, seat 1-15 (1-indexed)
- Program converts to 0-indexed for array access
- Invalid row/seat numbers should be rejected
- Cannot reserve an already-reserved seat
- Cannot cancel a reservation for an available seat

## Test Cases

### Test Case 1: Reserve Multiple Seats
Reserve seats: (1,1), (1,2), (5,8), (10,15)
Expected: All reservations successful, chart shows 4 X's

### Test Case 2: Cancel Reservation
Reserve (3,7), then cancel (3,7)
Expected: Both operations successful, seat returns to available

### Test Case 3: Invalid Operations
Try to reserve (11,20) - should reject
Try to cancel unreserved seat - should reject
Try to reserve already-reserved seat - should reject

### Test Case 4: Full Row
Reserve all 15 seats in row 1
Expected: Row 1 shows all X's, statistics show 15 reserved

## Hints

- Use 0 for available, 1 for reserved (or vice versa - be consistent)
- Display '.' for available seats, 'X' for reserved seats
- Remember to subtract 1 when converting user input to array indices
- Check bounds: row must be 0-9, seat must be 0-14 (after conversion)
- In reserveSeat, check if seat is available before reserving
- In cancelReservation, check if seat is reserved before canceling
- Use nested loops to count reserved/available seats

## Steps to Complete

1. Define function prototypes
2. Create main with menu loop
3. Implement initializeSeats (set all to 0)
4. Implement displaySeatingChart (nested loops with formatting)
5. Implement reserveSeat (validate, check availability, set to 1)
6. Implement cancelReservation (validate, check if reserved, set to 0)
7. Implement countReserved (traverse and count 1's)
8. Implement countAvailable (traverse and count 0's or use 150 - reserved)
9. Add input validation for row and seat numbers
10. Test each function thoroughly

## Common Mistakes to Avoid

- Forgetting to convert 1-indexed input to 0-indexed arrays
- Not validating row/seat numbers before array access
- Allowing reservation of already-reserved seats
- Poor formatting making chart hard to read
- Not aligning columns properly
- Confusing row and column in array access
- Not checking return values from functions

## What You'll Learn

- Managing state in a 2D array
- Input validation and bounds checking
- Converting between user-facing and internal representations
- Creating visual displays from array data
- Implementing CRUD operations (Create, Read, Update, Delete)
- Error handling for invalid operations
- User interface design for terminal applications

## Testing Your Code

Run your program and verify:
- ✅ Seating chart displays correctly with proper alignment
- ✅ Can reserve available seats successfully
- ✅ Cannot reserve already-reserved seats
- ✅ Can cancel reservations successfully
- ✅ Cannot cancel unreserved seats
- ✅ Statistics (counts) are accurate
- ✅ Invalid row/seat numbers are rejected
- ✅ Chart updates correctly after operations
- ✅ Menu loops until exit
- ✅ No compilation errors or warnings

## Extension Challenges (Optional)

If you finish early, try these enhancements:
1. Add seat pricing (front rows cost more)
2. Implement "best available seat" recommendation
3. Add group reservation (reserve N adjacent seats)
4. Save/load seating chart from file
5. Add different ticket types (adult, child, senior)
6. Show row occupancy percentages
7. Highlight "best view" seats differently
8. Add undo functionality for last operation
