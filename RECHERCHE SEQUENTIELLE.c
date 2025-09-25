
#include <stdio.h>
int main() {
    int n, i, valeur, trouve = 0;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tableau[n];
    printf("Entrez les %d éléments du tableau :\n", n);
    for (i = 0; i < n; i++) {
        printf("Élément %d : ", i);
        scanf("%d", &tableau[i]);
    }
    printf("Entrez la valeur à rechercher : ");
    scanf("%d", &valeur);
    for (i = 0; i < n; i++) {
        if (tableau[i] == valeur) {
            printf("Valeur trouvée à la position %d (indice %d).\n", i + 1, i);
            trouve = 1;
            break;
        }
    }
    if (!trouve) {
        printf("Valeur non trouvée dans le tableau.\n");
    }

    return 0;
}
recherche séquentielle 1.c
