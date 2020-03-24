#include "Animal.h"
#include"enclos.h"


int main()
{
    liste_animales *animales;// creation de la liste animales
    //create_animal();
    stock_animal(create_animal(), animales);
    stock_animal(create_animal(), animales);
    stock_animal(create_animal(), animales);

    read_list_animal(animales);

    //create_enclos();

    return 0;
}

