#include <stdio.h>
int main(){
    int n, a; 
	int count = 0;
	int  vitri = 0; 
    printf("Nhap so luong phan tu : ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Nhap phan tu cho mang :\n");
    for (int i = 0; i < n; i++) {
        printf(" arr[%d]: ");
        scanf("%d", &arr[i]);
    }
    printf("Phan tu can kiem tra: ");
    scanf("%d", &a);
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            count++; 
            vitri = i; 
            break; 
        }
    }
    if (count) {
        printf("Phan tu %d o vi tri %d\n", a, vitri);
    } else {
        printf("Phan tu khong ton tai\n", a);
    }

    return 0;
}


// trong TH khong co thi in ra ptu
// in ra cac phan tu 
// b5,6 s10
