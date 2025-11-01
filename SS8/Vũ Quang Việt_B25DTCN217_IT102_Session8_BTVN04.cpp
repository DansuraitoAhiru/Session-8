#include <stdio.h>
int main(){
	int array[100],n;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++ ){
		printf("array[%d]: ", i);
		scanf("%d", &array[i]);
	}
}
