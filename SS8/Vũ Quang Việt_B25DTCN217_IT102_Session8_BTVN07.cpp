#include <stdio.h>
int main(){
	int arr[100], n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
	   do{
		printf("arr[%d]: ", i);
		scanf("%d", &arr[i]);
	    if(arr[i]%2==0){
	    	printf("Yeu cau nhap lai! \n");
	    }
	} while (arr[i]%2==0);
	}
	printf("\nCac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
