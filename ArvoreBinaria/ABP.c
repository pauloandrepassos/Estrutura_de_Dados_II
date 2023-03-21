#include "ABP.h"
#include <stdio.h>
#include <stdlib.h>


PONT inicializa(){
    return (NULL);
}
PONT criaNovoNO(TIPOCHAVE ch) {
    PONT novoNo = (PONT) malloc(sizeof (NO));
    novoNo->esq = NULL;
    novoNo->dir = NULL;
    novoNo->chave = NULL;
    return (novoNo);
}
PONT adiciona(PONT raiz, PONT no) {
    if (raiz == NULL)
        return (no);
    if (no->chave < raiz->chave)
        raiz->esq = adiciona(raiz->esq, no);
    else
        raiz->dir = adiciona(raiz->dir, no);
    return (raiz);
}