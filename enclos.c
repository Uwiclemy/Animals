#include"enclos.h"

void create_enclos()
{
    fence *enclos= malloc(sizeof(*enclos)); // initialization du pointeur de la variable
    printf("\n id : ");
    enclos->id= lire_int();
    printf("\n nom : ");
    lire(enclos->e_nom, TAILLE);

    read_enclos(enclos);// appel de focntion pour afficher le contenant du message
    update_enclos(enclos);
}
void read_enclos(fence *enclos)
{
    printf("\n ****AFFICHAGE ENCLOS**** ");
    printf("\n id : %d", enclos->id);
    printf("\n nom : %s", enclos->e_nom);
}

void update_enclos(fence *enclos)
{
    // creation de variale
    int choix;
    // modification de l'enclos

    printf("\nVoulez vous modifier le nom de l'enclos? (oui=0, non=1): ");
    choix= lire_int();
    if (choix== 0)
    {
        printf("\nNouveau nom : ");
        lire(enclos->e_nom, TAILLE);
    }

    read_enclos(enclos);
}
void delete_enclos(fence *enclos)
{

}


