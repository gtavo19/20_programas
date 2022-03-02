//Gustavo 5990 13 21853

#include <stdio.h>
 
 
 
int main (){
	int n;
 
 
	printf("Ingrese un Numero\n");
	scanf("%d",&n);
 
 
	for(int total=0; total=2; total++){
	do{
		for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if((j>0 && j<n-1)&&(i>0&&i<n-1)){
				printf(" ");
			}else{
				printf("*");
			}
		}
		printf("\n");
 
	}
	}while(n<2 && n<0);
	printf("\n");
	--n;
	}
} 
