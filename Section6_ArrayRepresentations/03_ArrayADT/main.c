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
 */

int main() {
    printf("=== Array ADT ===\n");

    //Initialization_TEST();
    //Display_TEST();
    //Add_TEST();
    //Insert_TEST();
    Delete_TEST();

    return 0;
}