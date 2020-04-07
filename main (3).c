
#include <stdio.h>
#include "Lista.h"



int main()
{
    Lista l;

    Lista_inizializza(&l);
    
    Lista_stampa(&l);

    Lista_inserisci_nodo(&l, 4);
    Lista_stampa(&l);

    Lista_inserisci_nodo(&l, 14);
    Lista_stampa(&l);

    Lista_inserisci_nodo(&l, 9);
    Lista_stampa(&l);

    Lista_inserisci_nodo(&l, 1);
    Lista_stampa(&l);

    Lista_inserisci_nodo(&l, 6);
    Lista_stampa(&l);

    Lista_rimuovi_nodo(&l, 14);
    Lista_stampa(&l);

    Lista_rimuovi_nodo(&l, 9);
    Lista_stampa(&l);

    Lista_rimuovi_nodo(&l, 1);
    Lista_stampa(&l);
    
    Lista_rimuovi_nodo(&l, 50);
    Lista_stampa(&l);

    Lista_pulisci(&l);
    
    Lista_inserisci_nodo(&l, 34);
    Lista_stampa(&l);

    Lista_inserisci_nodo(&l, 20);
    Lista_stampa(&l);
    
    Lista_rimuovi_nodo(&l, 20);
    Lista_stampa(&l);
    
    Lista_pulisci(&l);
    
    return 0;
}