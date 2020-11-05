#include <stdio.h>
#include "Test/test.c"

/**
 * Data
 * ----
 *
 * 1. Array space
 * 2. Size
 * 3. Length (N° of elements)
 *
 * Operations
 * ----------
 *
 * 1. Display()
 * 2. Add(x) / Append(x)
 * 3. Insert (index, x)
 * 4. Delete (index)
 * 5. Search (x)
 * 6. Get (index)
 * 7. Set (index, x)
 * 8. Max() / Min()
 * 9. Reverse ()
 * 10. Shift() / Rotate()
 *
 * 11. Inserting in a sorted array
 * 12. Checking if array is sorted
 * 13. Arranging negative elements left side, positive on right side
 *
 * 14. Merge sorted arrays
 *
 * 15. Union
 * 16. Intersection
 * 17. Difference
 *
 */

int main() {
    printf("=== Array ADT ===\n");

    //Initialization_TEST();
    //Display_TEST();
    //Add_TEST();
    //Insert_TEST();
    //Delete_TEST();
    //Search_Linear_TEST(25);
    //Search_Binary_TEST(88);
    //Get_TEST(3);
    //Set_TEST(2, 99);
    //Max_TEST();
    //Min_TEST();
    //Sum_TEST();
    //Avg_TEST();
    //Reverse_TEST();
    //Left_Shift_TEST();
    //Left_Rotate_TEST();
    //Right_Shift_TEST();
    //Right_Rotate_TEST();
    //Insert_Sorted_TEST(15);
    //Array_Is_Sorted_TEST();
    //Array_Negative_Positive_TEST();
    //Array_Merge_Sorted_TEST();
    //Array_Union_Sorted_TEST();
    //Array_Intersection_Sorted_TEST();
    Array_Difference_Sorted_TEST();

    return 0;
}