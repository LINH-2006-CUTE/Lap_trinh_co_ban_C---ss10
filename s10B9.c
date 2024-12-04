#include <stdio.h>
int main(){
    int n;
    printf("Nhap so hang va cot cho ma tran vuong: ");
    scanf("%d", &n);
    int arr[n][n]; 
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int length = n; 
    int val[length];
    for (int i = 0; i < length; i++) {
        val[i] = arr[i][i];
    }
    for (int i = 0; i < length - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < length; j++) {
            if (val[j] < val[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = val[i];
            val[i] = val[minIndex];
            val [minIndex] = temp;
        }
    }
    for (int i = 0; i < length; i++) {
        arr[i][i] = val[i];
    }
    printf("Ma tran sau khi sap xep duong cheo chinh:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

