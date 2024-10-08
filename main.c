#include <stdio.h>
int main() {
    float voto;
    float nVoti;
    float somma_voti;
    float media;
    printf("Inserisci i voti di cui vuoi fare la media, digitare 0 per terminare: ");
    while(voto!=0) {
        scanf("%f", &voto);
        somma_voti+=voto;
        nVoti++;
    }
    if (nVoti > 0) {
        media = somma_voti / (nVoti-1);
        printf("La media dei voti è: %.2f\n", media);
    } else {
        printf("Nessun voto inserito.\n");
        return 0;
    }
}

