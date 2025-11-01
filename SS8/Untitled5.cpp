#include <stdio.h>
int main(){
	int arr[5]={4,1,28,98,1092};
	int max=arr[0], min=arr[0];
	for(int i=0;i<5;i++){
		if(arr[i]>max){ max=arr[i];}
		if(arr[i]<min){ min=arr[i];}
	}
	printf("Max trong mang la: %d \n", max);
	printf("Min trong mang la: %d", min);
}
