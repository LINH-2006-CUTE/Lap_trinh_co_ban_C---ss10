#include<stdio.h>
int main(){
	int arr[5]={3,8,4,1,7};
	
for(int i = 0; i <5; i++){
	for(int j=0; j<5 - i - 1 ;j++){
		if(arr[j]>arr[j+1]){
			int temp;
			temp= arr[j];
			arr[j]=arr[j + 1];
			arr[j+1]=temp;		
			
			
		}
		
		
	}
	
} 
	for(int i = 0; i < 5 ; i++ ){
		printf(" %d", i); 
		
	}

	
	
	return 0; 
} 
