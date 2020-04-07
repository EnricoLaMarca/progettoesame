#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"
#include "Nodo.h"

void Lista_inizializza(Lista * l){
    l->testa = NULL;
    l->contatore = 0;
}

void Lista_stampa(Lista * l){
    Nodo *corrente = l->testa;

    printf("[%d] ", l->contatore);

    while (corrente != NULL) {
        printf("%d ---> ", corrente->val);
        corrente = corrente->next;
    }
    printf("NULL\n");
}

void Lista_inserisci_nodo(Lista *l, int val){
    Nodo *corrente = l->testa;
    Nodo *precedente = NULL;

    Nodo *temporanea = malloc(sizeof(Nodo));
    temporanea->val = val;
    temporanea->next = NULL;

    
    while (corrente != NULL && corrente->val < val) {
        precedente = corrente;
        corrente = corrente->next;
    }

    if (precedente == NULL){
        /* inserisce in testa */
        temporanea->next = l->testa;
        l->testa = temporanea;
    } else {
        /* inserisce dopo prev */
        precedente->next = temporanea;
        temporanea->next = corrente;
    }

    l->contatore++;
}

void Lista_rimuovi_nodo(Lista *l, int val){
    Nodo *corrente = l->testa;
    Nodo *precedente = NULL;
    Nodo *temporanea = NULL;

    
    while (corrente != NULL && corrente->val < val) {
        precedente = corrente;
        corrente = corrente->next;
    }

   
    if (corrente == NULL) {
        printf("rimuovi(): elemento %d non trovato, non faccio nulla\n", val);
        return;
    }

    printf("rimuovi(): elemento %d trovato, vediamo cosa fare\n", val);
    l->contatore--;

   
    if (precedente == NULL) {
        printf("L'elemento da eliminare e' in testa, elimina\n");
       
        temporanea = l->testa;           
        l->testa = l->testa->next;  
        free(temporanea);               
        return;
    }

    
    printf("L'elemento da eliminare non e' in testa, elimina\n");
    temporanea = precedente->next;
    precedente->next = temporanea->next;
    free(temporanea);
}

void Lista_pulisci(Lista *l)
{
    Nodo *temporanea;
    Nodo *corrente = l->testa;

    while (corrente != NULL) {
        temporanea = corrente;    
        corrente = corrente->next;
        
        printf("Cleaning node with value %d\n", temporanea->val);
        free(temporanea);
    }

    l->testa = NULL;
    l->contatore = 0;
}