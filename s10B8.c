#include<stdio.h> 
int main() {
    int row, col;
    printf("Nhap so dong: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);
    int arr[row][col]; 

    printf("Nhap cac phan tu cho mang:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

 		for (int i = 0; i < col - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < col; j++) {
            if (arr[row][j] < arr[row][minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[row][i];
            arr[row][i] = arr[row][minIndex];
            arr[row][minIndex] = temp;
        }
    }
}

    	printf("Sau khi sap xep:\n");
    	for (int i = 0; i < row; i++){
        	for (int j = 0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0; 
}
