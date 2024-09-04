#include <stdio.h>
#include<string.h>

int main() {
char titre[10][10];
char lauteur[2][100];
float Prix[10];
int stock[10];
int choix=0;

do{
        printf("chosir un nombre :\n 1:pour ajouter :\n 2:pour afficher:\n 1:pour ajouter :\n 3:pour mofifier:\n 4:pour suprimer 5:pour afficher tatal de stock \n");
        scanf("%d",&choix);

 switch (choix) {


            case 1:
                for(int i=0;i<2;i++){
 printf("enter Titre du livre\t");
    scanf("%99s",titre[i]);

    printf(" l'auteur du livre\t");
    scanf("%99s",lauteur[i]);

    printf("Prix du livre\t");
    scanf("%f",&Prix[i]);

  printf("quantete  du livre\t");
    scanf("%d",&stock[i]);
}break;

            case 2:
                for(int i=0;i<2;i++){
    printf("/n Titre : %s \n", titre[i]);
    printf("Nom de l'auteur : %s\n", lauteur[i]);
    printf("Prix : %.2f \n", Prix[i]);
    printf("Stock : %d \n", stock[i]);
}break;


            case 3:
                //modification
printf("entrer le titre de livre");
char recherch[10];
scanf("%s",&recherch);
for(int i=0;i<=2;i++)
{
    if(strcmp(recherch,titre[i])==0)
    {
        printf("entrer la nouvelle valeur de quantete");
        scanf("%d",stock[i]);
    }
}break;

            case 4:
printf("entrer le titre de livre voudrais supprimer");
char recherche[10];
scanf("%s",&recherch);

   for (int i = 0; i <3; i++)
   {
       //titre[i]=titre[i+1];
       strcpy(titre[i],titre[i+1]);

        //lauteur[i]=lauteur[i+1];
        strcpy(lauteur[i],lauteur[i+1]);

       Prix[i]=Prix[i+1];
       stock[i]=stock[i+1];

   }break;
            case 5:
                break;

            case 7:
                printf("Au revoir !\n");
                break;

 default:
                printf("Choix invalide. Essayez encore.\n");
                break;


 }
}while(choix!=7);



    return 0;
}
