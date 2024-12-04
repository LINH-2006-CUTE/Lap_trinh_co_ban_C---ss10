#include<stdio.h> 
int main() {
    int n, m;
    printf("Nhap so dong: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);
    int arr[n][m]; 

    printf("Nhap cac phan tu cho mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

        for(int i = 0; i <5; i++){
		for(int j = 0; j<5 - i - 1 ;j++){
		if(arr[j]>arr[j+1]){
			int temp;
			temp= arr[j];
			arr[j] = arr[ i + 1];
			arr[j+1]=temp;		
			
		}
		
	}
	
} 
    
    printf("Sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
