#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[5] = {};
	int *ptr = a;
	for(int i=0; i<5; i++){
		scanf("%d",ptr+i);
	}
	for(int i=0 ; i<5; i+=2){
		printf("%d ",ptr[i]);
	}
	return 0;
}