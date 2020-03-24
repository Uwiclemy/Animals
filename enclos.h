#ifndef ENCLOS_H
#define ENCLOS_H

#include "perso.h"
#define TAILLE 20 // definir la taille des chaine des caracteres


struct enclos
{
    int id;
    char e_nom [TAILLE];

};
typedef struct enclos fence;

void create_enclos();
void read_enclos(fence *enclos);
void update_enclos(fence *enclos);
void delete_enclos(fence *enclos);

#endif // ENCLOS_H


