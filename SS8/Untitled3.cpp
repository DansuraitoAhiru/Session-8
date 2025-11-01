#include  <stdio.h>
int main(){
	int array[5] = {1,31,32,96,69};
	int i, isValid=0;
	printf("Cac so chan trong mang la: ");
	for(i=0;i<5;i++){
	    if(array[i]%2==0){
		   printf(" %d ", array[i]);
		   isValid=1;
	}}
	if(isValid==0)
	    printf("Mang ko co so chan");
}
