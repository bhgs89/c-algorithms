/*
 Insertion Sort
 - Internal Sort: 정렬되는 자료의 개수가 적어서 자료를 주기억 장치에 모두 적재시켜 놓고 정렬
 - Process
    1. 두 번째 키를 기준으로 첫 번째 키와 두 번째 키를 비교하여 키 값의 크기에 따라 순서대로 두 개의 레코드를 나열한다
    2. 다시 세 번째 키를 기준으로 첫 번째 키와 두번째 키를 비교하여 키 값의 크기에 따라 순서대로 3개의 레코드를 나열한다
    3. 계속해서 n번째 키를 앞의 n-1개의 키와 비교하여 삽입 될 적당한 위치를 찾아 삽입한다
    4. 삽입 후에는 삽입된 이후에 위치한 레코드들은 한 레코드는 한 레코드씩 뒤로 이동한다
 - 수행 시간:
    최악 - O(n^2)
    최소 - O(n)
    1 + 2 + ... + (n - 1) =~ n(n - 1) / 2 =~ n^2 / 2 =~ n^2
*/

#include <stdio.h>

void insertion_sort(int record[], int n) {
    printf("##### Insertion sort #####\n");
    int i, j, temp;
    for (i = 1; i <= n - 1; i++) {
        printf("%d loop: ", (i));
        temp = record[i];
        j = i - 1;
        while (j >= 0 && (temp < record[j])) {
            record[j + 1] = record[j];
            --j;
        }
        record[j + 1] = temp;
        
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
    insertion_sort(record, sizeof(record) / 4);
    
    return 0;
}
