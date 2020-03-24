
#include "perso.h"

int lire_int() {
	char nombreTexte[100] = { 0 };
	if (lire(nombreTexte, 100)) {
		return atoi(nombreTexte);
	}
	else {
		return 0;
	}
}
int lire(char *chaine, int longueur) {
	char *positionEntree = NULL;
	if (fgets(chaine, longueur, stdin) != NULL) {
		positionEntree = strchr(chaine, '\n');
		if (positionEntree != NULL) {
			*positionEntree = '\0';
		}
		else {
			viderBuffer();
		}
		return 1;
	}
	else {
		viderBuffer();
		return 0;
	}
}
void viderBuffer() {
	int c = 0;
	while (c != '\n' && c != EOF) {
		c = getchar();
	}
}
char lire_char() {
	char caractere = 0;
	caractere = getchar();
	while (getchar() != '\n');
	return caractere;
}
int continuer() {
	char c;
	do {
		printf("Voulez-vous continuer ? (O/N)");
		c = lire_char();
		//system("cls");
	} while (c != 'o' && c != 'n' && c != 'O' && c != 'N');
	if (c == 'o' || c == 'O') {
		return 1;
	}
	else {
		return 0;
	}
}


