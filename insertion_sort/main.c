/*
 Insertion Sort
 */

#include <stdio.h>

void insertion_sort(int record[], int n) {
    printf("##### Insertion sort #####\n");
    int i, j, temp;
    for (i = 1; i < n - 1; i++) {
        temp = record[i];
        j = i - 1;
        while (j >= 0 && (temp < record[j])) {
            record[j + 1] = record[j];
            --j;
        }
        record[j + 1] = temp;
    }
    
    printf("Result: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", record[i]);
    }
    printf("\n");
    printf("####################################\n");
}

int main(int argc, const char * argv[]) {
    int record[5] = {9, 11, 4, 7, 8};
    printf("Initial Records: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", record[i]);
    }
    printf("\n");
    insertion_sort(record, sizeof(record) / 4);
    
    return 0;
}
