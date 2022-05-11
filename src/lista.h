#ifndef LISTA_H 
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAXTAM 10 //tamanho da Lista

typedef struct Item Item;
typedef struct Lista Lista;


struct Item{
	int value;
};

struct Lista{
	Item vet[MAXTAM];
	int Primeiro;
	int Ultimo;
};


void FLVazia(Lista *L);
void Insere(Lista *L, Item d);
void EncontraSoma(Lista *L);
void Imprimir(Lista *L);

#endif