#include"Animal.h"

Animals *create_animal()
{
    Animals *animal= malloc(sizeof(*animal)); // declaration et initialization du pointeur de la variable
    printf("\n nom : ");
    lire(animal->nom, TAILLE);
    printf("\n weight : ");
    animal->weight= lire_int();
    printf("\n gender (male=1, female=0): ");
    animal->gender= lire_int();
    printf("\n specie : ");
    lire(animal->specie, TAILLE);
   return animal;
}

void read_animal(Animals *animal)
{
    printf("\n ****Affichage animal**** ");
    printf("\n nom : %s", animal->nom);
    printf("\n wieght : %d", animal->weight);

    if (animal->gender == 1)
        printf("\n gender : Male");
    else
        printf("\n gender : Female");

    printf("\n specie : %s", animal->specie);

}
void read_list_animal(liste_animales *animales)
{
    animales->current_animal=animales->first_animal;
    while(animales->current_animal!= NULL)
    {
        read_animal(animales->current_animal);

        Animals* animal = animales->current_animal;

        animales->current_animal= animal->a_next;
    }
}
void update_animal(Animals *animal)
{
    // creation de variale
    int choix;
    // modification de l'animal
    printf("\nVoulez vous modifier le nom? (oui=0, non=1): ");
    choix= lire_int();
    if (choix== 0)
    {
        printf("\nNouveau nom : ");
        lire(animal->nom, TAILLE);
    }
    printf("\nVoulez vous modifier le poids? (oui=0, non=1): ");
    choix= lire_int();
    if (choix== 0)
    {
        printf("\nNouveau poids : ");
        animal->weight= lire_int();
    }
    printf("\nVoulez vous modifier le genre? (oui=0, non=1): ");
    choix= lire_int();
    if (choix== 0)
    {
        printf("\nNouveau genre (male=1, female=0) : ");
        animal->gender= lire_int();
    }
    printf("\nVoulez vous modifier l'espece? (oui=0, non=1): ");
    choix= lire_int();
    if (choix== 0)
    {
        printf("\nNouveau espece : ");
        lire(animal->specie, TAILLE);
    }
    read_animal(animal);
}
void delete_animal(Animals *animal)
{

}
void stock_animal(Animals *animal, liste_animales *animales)
{
    if(animales->current_animal == NULL)
    {
        animales->first_animal= animal;
        animales->last_animal= animal;
    }
    else
    {

        animal->a_previous=animales->last_animal;
        animal->a_previous->a_next=animal;
        animales->last_animal= animal;
    }
        animales->current_animal= animal;
}

