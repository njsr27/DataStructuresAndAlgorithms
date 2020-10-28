#include <stdio.h>
#include "stdlib.h"

/**
 * Matrix
 *
 */

void initialization(){
    int matrix1[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int *matrix2[3] = {
            (int*) malloc(5 * sizeof(int)),
            (int*) malloc(5 * sizeof(int)),
            (int*) malloc(5 * sizeof(int))
    };
    int **matrix3 = (int**) malloc(3 * sizeof(int*));

    matrix2[0][2] = 5;
    matrix2[1][2] = 5;
    matrix3[0] = (int*) malloc(5 * sizeof(int));
    matrix3[1] = (int*) malloc(5 * sizeof(int));
    matrix3[2] = (int*) malloc(5 * sizeof(int));
    matrix3[0][2] = 8;
    matrix3[1][2] = 9;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
}

int main() {

    initialization();

    return 0;
}