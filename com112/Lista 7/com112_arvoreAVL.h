#ifndef COM112_ARVOREAVL_H
#define COM112_ARVOREAVL_H

typedef struct NO* ArvAVL;

ArvAVL* cria_ArvAVL();

void libera_ArvAVL(ArvAVL *raiz);

int altura_ArvAVL(ArvAVL *raiz);

int totalNO_ArvAVL(ArvAVL *raiz);

void preOrdem_ArvAVL(ArvAVL *raiz);

void emOrdem_ArvAVL(ArvAVL *raiz);

void posOrdem_ArvAVL(ArvAVL *raiz);

int insere_ArvAVL(ArvAVL *raiz, int valor);

int remove_ArvAVL(ArvAVL *raiz, int valor);

int consulta_ArvAVL(ArvAVL *raiz, int valor);

#endif

