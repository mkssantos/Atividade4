#include "lista.h"

int main(){

	Lista L;
    Item aux;
	FLVazia(&L);

    for(int i=0;i< MAXTAM ; i++){
        printf("Digite numeros para a posição %d:",i+1);
        scanf("%d",&aux.value);

        Insere(&L, aux);
    }
    
    EncontraSoma(&L);
	Imprimir(&L);

	return 0;
}