#include <stdio.h>


// LEZIONE SUGLI IF
int main() {
    printf("____________________________________________________\n\n");

    int x = 3;

    /* STRUTTURA BASE DELL'IF

        if (condizione) {
            esegui
            blocco
            di codici
        } else {
            esegui blocco di codici
            se la condizione non è
            verificata
        }
    */

    //______________________________ ESEMPIO _________________________________________________

    // se x è maggiore di 5
    if (x > 5) {
        //fai queste cose
        printf("%d è maggiore di 5\n", x);
    } 
    // altrimenti

    // else può tranquillamente non essere inserito se non vuoi effettuare ulteriori azioni
    else {
        // fai queste altre cose
        printf("%d è minore di 5\n", x);
    }
    // riprende il flusso del programma

    //_______________________________________________________________________________________

    /* 
        Esistono diversi operatori di confronto da utilizzare nella condizione dell'if
        questi sono:

            == -> per verificare se i due operatori sono uguali
            != -> per verificare se i due operatori sono diversi
            > -> per verificare se il primo operatore è maggiore del secondo
            >= -> per verificare se il primo operatore è maggiore o uguale al secondo
            < -> per verificare se il primo operatore è minore del secondo
            <= -> per verificare se il primo operatore è minore o uguale al secondo
     */

     /*  
        Nulla vieta di utilizzare più if nidificati, del tipo:

        if (condizione) {
            if (altra condizione) {
                fai questo
            } else {
                fai questo se non rispetti
                l'altra condizione
            }
            riprendi a fare questo che sta
            dentro l'if superiore
        }
        continuo del programma...
     */












    printf("\n____________________________________________________\n");
}