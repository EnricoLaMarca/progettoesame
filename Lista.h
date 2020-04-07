#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

struct lista {
    Nodo *testa;
    int contatore;
};
typedef struct lista Lista;

void Lista_inizializza(Lista *l);
void Lista_stampa(Lista *l);
void Lista_inserisci_nodo(Lista *l, int val);
void Lista_rimuovi_nodo(Lista *l, int val);
void Lista_pulisci(Lista *l);

#endif