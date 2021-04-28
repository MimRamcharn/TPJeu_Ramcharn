/*

Jeu du Pendu
ce fichier contient les fonctions de pendu.c

*/

#ifndef DEF_PENDU
#define DEF_PENDU

int piocherMot(char * motPioche);
int nombreAleatoire(int nombreMax);

char lireCharactere();
int gagne(int lettreTrouvee[], long tailleMot);
int rechercheLettre(char lettre, char motSecret[], int lettreTrouvee[]);

#endif
