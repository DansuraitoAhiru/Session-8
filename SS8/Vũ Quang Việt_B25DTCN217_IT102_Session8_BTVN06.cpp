#include <stdio.h>
int main(){
	int arr[5]={1,34,36,69,96954};
	for(int i=0;i<5;i++){
		if(arr[i]%2==0){
			arr[i]=arr[i]+3;
		}else{
			arr[i]=arr[i]+2;
		}
	printf("[");
    for(i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if(i < 4) printf(",");
    }
    printf("]\n");
	}
}
