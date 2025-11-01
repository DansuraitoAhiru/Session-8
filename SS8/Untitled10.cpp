#include <stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[%d]= ", i);
		scanf("%d", &arr[i]);
	}
	printf("Mang sau khi nhap la: ");
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\nCac so nguyen to trong mang la: ");
	for(int i=0;i<n;i++){
		if(arr[i]<=1){
			continue;
		}
		int isPrime=0;
		for(int j=2; j<arr[i]; j++){
			if(arr[i]%j==0){
			  isPrime=0;
			}
		}
		if(isPrime==1){
		    printf("%d ", arr[i]);
		}else{ 
		    printf("Mang ko co so nguyen to");
		}
	}
}

