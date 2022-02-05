/*
 Bubble Sort
 - Internal Sort: 정렬되는 자료의 개수가 적어서 자료를 주기억 장치에 모두 적재시켜 놓고 정렬
 - Process
    1. 주어진 자료에서 제일 첫 레코드에서 시작하여 첫 번째와 두 번째 레코드를 비교하여 크기준으로 재배치 한다
        Acending: 두 개의 레코드 중 큰 키 값은 뒤 쪽에, 작은 키 값은 앞 쪽에 정렬
        Decending: 두 개의 레코드 중 큰 키 값을 앞 쪽에, 작은 키 값을 뒤 쪽에 정렬
    2. 다음, 두 번째와 세 번째 레코드를 비교하여 크기순으로 재배치한다
    3. 이런 과정은 마지막으로 n - 1번째와 n번째 레코드를 비교하여 크기순으로 재배치하면 1회전(1-pass)의 단계가 끝난다
    4. 1회전이 끝나면 제일 큰 레코드(Acending) 또는 제일 작은 레코드(Decending)가 자료의 마지막에 위치한다
    5. 만약, 2회전이 끝난다면 두 번째로 큰(Acending) 또는 작은(Decending) 레코드가 n - 1번째에 위치한다
    6. 이러한 과정은 n - 1회전이 되면 정렬이 완료된다
 - 회전이 거듭될수록 비교하는 회수가 1씩 감소하기 때문에, 회전할수록 알고리즘의 수행 속도가 빨라진다
 - 단점: 이미 정렬이 끝난 상태에서도 n - 1회전을 진행한다(불필요한 회전)
    해결점: flag를 이용하여 정렬이 끝난 시점에 정렬을 종료시킨다
 - 수행 시간: O(n^2)
    (n - 1) + (n - 2) + ... + 2 + 1 = n(n - 1) / 2 =~ n^2 - n / 2 =~ n^2 / 2 =~ n^2
*/
#include <stdio.h>

void bubble_sort_noflag(int record[], int n, int type) {
    printf("##### Bubble sort with no flag #####\n");
    int i, j, temp;
    for (i = 0; i < (n - 1); i++) {
        printf("%d loop: ", (i + 1));
        for (j = 0; j < ((n - 1) - i); j++) {
            if (type == 0) {
                if (record[j] > record[j + 1]) {
                    temp = record[j];
                    record[j] = record[j + 1];
                    record[j + 1] = temp;
                }
            } else if (type == 1) {
                if (record[j] < record[j + 1]) {
                    temp = record[j];
                    record[j] = record[j + 1];
                    record[j + 1] = temp;
                }
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

void bubble_sort_flag(int record[], int n, int type) {
    printf("##### Bubble sort with no flag #####\n");
    int i = 0, j, flag, temp;
    
    flag = 1;
    while (flag > 0 && i <= (n - 1)) {
        printf("%d loop: ", (i + 1));
        flag = 0;
        for (j = 0; j < ((n - 1) - i); j++) {
            if (type == 0) {
                if (record[j] > record[j + 1]) {
                    temp = record[j];
                    record[j] = record[j + 1];
                    record[j + 1] = temp;
                    flag = 1;
                }
            } else if (type == 1) {
                if (record[j] < record[j + 1]) {
                    temp = record[j];
                    record[j] = record[j + 1];
                    record[j + 1] = temp;
                    flag = 1;
                }
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
    int sortType = 1;   // Acending: 0, Decending: 1
    
    int record1[5] = {9, 11, 4, 7, 8};
    printf("Initial Records: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", record1[i]);
    }
    printf("\n");
    bubble_sort_noflag(record1, sizeof(record1) / 4, sortType);
    printf("\n");
    
    int record2[5] = {9, 11, 4, 7, 8};
    printf("Initial Records: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", record2[i]);
    }
    printf("\n");
    bubble_sort_flag(record2, sizeof(record2) / 4, sortType);
    
    return 0;
}
