
#include <stdio.h>

void bubble_sort_noflag(int record[], int n) {
    printf("##### Bubble sort with no flag #####\n");
    int i, j, temp;
    for (i = 0; i < (n - 1); i++) {
        printf("%d loop: ", (i + 1));
        for (j = 0; j < ((n - 1) - i); j++) {
            if (record[j] > record[j + 1]) {
                temp = record[j];
                record[j] = record[j + 1];
                record[j + 1] = temp;
            }
        }
        for (int i = 0; i < 5; i++) {
            printf("%d ", record[i]);
        }
        printf("\n");
    }
    
    printf("Result: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", record[i]);
    }
    printf("\n");
    printf("####################################\n");
}

void bubble_sort_flag(int record[], int n) {
    printf("##### Bubble sort with no flag #####\n");
    int i = 0, j, flag, temp;
    
    flag = 1;
    while (flag > 0 && i <= (n - 1)) {
        printf("%d loop: ", (i + 1));
        flag = 0;
        for (j = 0; j < ((n - 1) - i); j++) {
            if (record[j] > record[j + 1]) {
                temp = record[j];
                record[j] = record[j + 1];
                record[j + 1] = temp;
                flag = 1;
            }
        }
        for (int i = 0; i < 5; i++) {
            printf("%d ", record[i]);
        }
        printf(", flag = %d\n", flag);
        i++;
    }
    
    printf("Result: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", record[i]);
    }
    printf("\n");
    printf("####################################\n");
}

int main(int argc, const char * argv[]) {
    int record1[5] = {9, 11, 4, 7, 8};
    printf("Initial Records: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", record1[i]);
    }
    printf("\n");
    bubble_sort_noflag(record1, sizeof(record1) / 4);
    printf("\n");
    
    int record2[5] = {9, 11, 4, 7, 8};
    printf("Initial Records: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", record2[i]);
    }
    printf("\n");
    bubble_sort_flag(record2, sizeof(record2) / 4);
    
    return 0;
}
