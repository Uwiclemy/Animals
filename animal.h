#ifndef ANIMAL_H
#define ANIMAL_H

#include "perso.h"
#define TAILLE 20 // definir la taille des chaine des caracteres

typedef struct Animal Animals;
struct Animal
{
    int id;
    char nom [TAILLE];
    int weight;
    int gender;
    char specie [TAILLE];

    Animals *a_next; // strucutre pr l' animal suivant
    Animals *a_previous;
};

typedef struct list_animal liste_animales;
struct list_animal
{
    int id;
    int number;
    int first_animal;
    int last_animal;
    int current_animal;
};

Animals *create_animal();
void read_animal(Animals *animal);
void update_animal(Animals *animal);
void delete_animal(Animals *animal);
void stock_animal(Animals *animal, liste_animales *animales);
void read_list_animal(liste_animales *animales);
#endif // ANIMAL_H

