#include <stdio.h>
#include <stdlib.h>

int negopos (int num){
	if(num>0){
		printf("0 \n");
	}
	else{
		printf("1 %d \n",abs(num));
	}
}
	
int main(){
	int num;
	printf("Ingrese un numero entero: ");
	scanf("%d",&num);
	negopos(num);
	
	system("pause");
	return 0;
}
