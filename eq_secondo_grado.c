#include <stdio.h>
#include <math.h>


/*  
    In gcc potrebbero starci dei problemi nell'implementazione di math.h, bisogna passare
    un parametro aggiuntivo al comando: -lm, verrebbe una cosa del genere:

                    gcc eq_secondo_grado.c -o equazione -lm 
*/


int main() {
    // CREO LE VARIABILI PRINCIPALI ED ASSEGNO LORO DEI VALORI
    double a,b,c;
    double delta;
    double ris_positivo, ris_negativo;

    a = 2;
    b = 8;
    c = 7;
    
    // CONTROLLO PER EVITARE CHE a SIA 0, EVITIAMO IL COSIDDETTO DIVISION BY ZERO
    // banalmente superfluo visto che se a fosse 0 non sarebbe più un'equazione di secondo grado
    if (a == 0) {
        printf("Il primo coefficente NON può essere 0!\n");
        return 0;
    }

    // CREO DELLE VARIABILI 'DI SERVIZIO' PER LA POTENZA E LE MOLTIPLICAZIONE
    double potenza = pow(b, 2);
    printf("potenza: %g\n", potenza);

    double molt = 4*a*c;
    printf("moltiplicazione: %g\n", molt);

    // EFFETTUO IL CALCOLO DEL DELTA
    delta = potenza - molt;
    printf("delta: %g\n", delta);

    // FACCIO UN CONTROLLO PER ACCERTARMI CHE IL DELTA SIA NEL DOMINIO
    if (delta < 0) {
        printf("Il valore %g esce fuori dal dominio.\nIl programma termina qui", delta);
        return 0;
    }

    // EFFETTUO I CALCOLI DELLE INCOGNITE E STAMPO A VIDEO I RISULTATI
    ris_positivo = (-b + pow(delta, 0.5)) / (2*a); 
    ris_negativo = (-b - pow(delta, 0.5)) / (2*a);

    printf("I risultati dell'equazione sono: %g %g\n", ris_negativo, ris_positivo); 

}
