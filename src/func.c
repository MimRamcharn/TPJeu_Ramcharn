#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<ctype.h>
#include <string.h>

#include "../include/func.h"

int nivo;
int piocherMot(char *motPioche)
{
    FILE* dico = NULL; 
    int nombreMots = 0, numMotChoisi = 0, i = 0;
    int caractereLu = 0;

ret:while(nivo){
if (nivo== 1){
    dico = fopen("../ressource/mots1.txt", "r");
   goto next;
   }
else if (nivo==2){
    dico = fopen("../ressource/mots2.txt", "r");
goto next;
   }
else if (nivo==3){
    dico = fopen("../ressource/mots3.txt", "r");
goto next;
   }
else{
      printf("Choice does not exist!! Reinput choice please : "); 
      scanf("%d",&nivo);
      goto ret;
   }
}

next: if (dico == NULL) 
    {
        printf("\nCant load file of words\n");
goto next2;
    }

next2:do
    {
        caractereLu = fgetc(dico);
        if (caractereLu == '\n')
            nombreMots++;
    } while(caractereLu != EOF);

    numMotChoisi = nombreAleatoire(nombreMots); 

    rewind(dico);
    while (numMotChoisi > 0)
    {
        caractereLu = fgetc(dico);
        if (caractereLu == '\n')
            numMotChoisi--;
    }


    fgets(motPioche, 100, dico);

    motPioche[strlen(motPioche) - 1] = '\0';
    fclose(dico);

    return 1; 
}

int nombreAleatoire(int nombreMax)
{
    srand(time(NULL));
    return (rand() % nombreMax);
}

/*char hint(char x)
{
char caractere=0;
caractere=x;
caractere=toupper(caractere);
while(getchar() !='\n');
return caractere;
}*/
