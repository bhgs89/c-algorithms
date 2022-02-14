/*
 Selection Sort
*/

#include <stdio.h>

void selection_sort(int record[], int n) {
    printf("##### Selection sort #####\n");
    int i, j, k, temp;
    for (i = 0; i <= n - 1; i++) {
        printf("%d loop: ", (i + 1));
        temp = record[i];
        k = i;
        
        // 남은 재료에서 제일 작은 키 값을 찾는다
        for (j = i + 1; j <= n - 1; j++) {
            if (temp > record[j]) {
                temp = record[j];
                k = j;
            }
        }

        // 위의 for문에서 찾은 제일 작은 키 값과 i번째 자리의 키 값과 교환한다
        temp = record[k];
        record[k] = record[i];
        record[i] = temp;
        
        
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

int main(int argc, const char * argv[]) {
    int record[5] = {9, 11, 4, 7, 8};
    printf("Initial Records: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", record[i]);
    }
    printf("\n");
    selection_sort(record, sizeof(record) / 4);
    
    return 0;
}
