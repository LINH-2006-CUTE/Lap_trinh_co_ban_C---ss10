#include <stdio.h>
int main(){
	int arr[] = {1,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(int);
	printf("Mang ban dau: ");
	for ( int i =0; i< n; i++){
		printf("\t%d", arr[i]);
	}
	for ( int i = 0; i< 8; i++){
		int key = arr[i];
		int j = i-1;
		while( j >= 0 && key < arr[j] ){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
	printf("\nMang moi la: \t");
	for ( int i =0; i< 8; i++){
		printf("\t%d", arr[i]);
	}
	
	return 0;
}
