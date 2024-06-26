#include <stdio.h>

int main(){
	
	int n, result, i, acumulador;
	int binario[8]={1, 2, 4, 8, 16, 32, 64, 128};
	int conv[8]={0,0,0,0,0,0,0,0};
	
	printf("Señor usuario, por favor introduzca su numero: ");
	scanf("%d", &n);
	
	printf("Numero a convertir es: %d ", n);

	if(n == 0){
		printf("\n");
		printf("Tu numero binario es: ");
		for(i=0; i<=7; i++){
			printf("%d ", conv[i]);
		}
	}
	
	while(n != 0){

		if(n >= binario[0] && n < binario[1]){
			conv[7] = 1;
			printf("\n");
			printf("Tu numero binario es: ");
			for(i=0; i<=7; i++){
				printf("%d ", conv[i]);
			}
			n = n - binario[0];
		}
		else if(n >= binario[1] && n < binario[2]){
			conv[6] = 1;
			n = n - binario[1];
			if(n == 0){
				printf("\n");
				printf("Tu numero binario es: ");
				for(i=0; i<=7; i++){
					printf("%d ", conv[i]);
				}
			}
		}
		else if(n >= binario[2] && n < binario[3]){
			conv[5] = 1;
			n = n - binario[2];
			if(n == 0){
				printf("\n");
				printf("Tu numero binario es: ");
				for(i=0; i<=7; i++){
					printf("%d ", conv[i]);
				}
			}
		}
		else if(n >= binario[3] && n < binario[4]){
			conv[4] = 1;
			n = n - binario[3];
			if(n == 0){
				printf("\n");
				printf("Tu numero binario es: ");
				for(i=0; i<=7; i++){
					printf("%d ", conv[i]);
				}
			}
		}
		else if(n >= binario[4] && n < binario[5]){
			conv[3] = 1;
			n = n - binario[4];
			if(n == 0){
				printf("\n");
				printf("Tu numero binario es: ");
				for(i=0; i<=7; i++){
					printf("%d ", conv[i]);
				}
			}
		}
		else if(n >= binario[5] && n < binario[6]){
			conv[2] = 1;
			n = n - binario[5];
			if(n == 0){
				printf("\n");
				printf("Tu numero binario es: ");
				for(i=0; i<=7; i++){
					printf("%d ", conv[i]);
				}
			}
		}
		else if(n >= binario[6] && n < binario[7]){
			conv[1] = 1;
			n = n - binario[6];
			if(n == 0){
				printf("\n");
				printf("Tu numero binario es: ");
				for(i=0; i<=7; i++){
					printf("%d ", conv[i]);
				}
			}
		}
		else if(n == binario[7]){
			printf("\n");
			printf("Tu numero binario es: ");
			for(i=0; i<=7; i++){
				printf("%d ", conv[i]=1);
			}
			n = 0;
		}
	}	
	
	//IMPLEMENTAR AHORA PARA NUMEROS MAYORES A 128...proximamente
	
	return 0;
}
