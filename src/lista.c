#include "lista.h"

void FLVazia(Lista *L){
	L->Primeiro = 0;
	L->Ultimo  = 0;
}

void EncontraSoma(Lista *L){
    int numMax = -99999999, cont = 0, soma = 0;
    int vet[L->Ultimo];

    for (int i = L->Primeiro; i < L->Ultimo; i++) {
        for (int j = i; j < L->Ultimo; j++) {
            soma += L->vet[j].value;
            if (soma > numMax) {
                numMax = soma;
                vet[cont] = numMax;
            }
        }
        soma = 0;
        numMax = -99999999;
        cont++;
    }

    for (int i = L->Primeiro; i < L->Ultimo; i++) {
        if (vet[i]>numMax) {
            numMax = vet[i];
        }
    }

    printf("\nA soma é %d\n", numMax);



}

void Insere(Lista *L, Item d){
	if (L->Ultimo >= MAXTAM){
		printf("LISTA CHEIA!\n");
	}else{
		L->vet[L->Ultimo] = d;
		L->Ultimo ++;
	}
}

void Imprimir(Lista *L){
	for(int i=L->Primeiro; i<L->Ultimo; i++)
		printf("%d\t", L->vet[i].value);
	printf("\n");
}


