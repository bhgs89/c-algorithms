/*
 Selection Sort
 - Internal Sort: 정렬되는 자료의 개수가 적어서 자료를 주기억 장치에 모두 적재시켜 놓고 정렬
 - Process
    1. 레코드에서 가장 작은 키 값을 가지는 레코드를 찾아 첫번째 레코드와 교환한다
    2. 교환 후 첫번째 레코드를 제외한 (n-1)개의 레코드 중에서 가장 작은 키값을 갖는 레코드를 찾아 두번째 위치에 있는 레코드와 교환한다
    3. 이후의 레코드들에 대해서도 이 과정을 반복적으로 수행한다
    4. 주의할 점은 삽입하는 것이 아니고 교환하는 것이다
 - 수행 시간:
    최악 - O(n^2)
    최소 - O(n)
    1 + 2 + ... + (n - 1) =~ n(n - 1) / 2 =~ n^2 / 2 =~ n^2
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
