#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char cin[10];
    char nom[20];
    char prenom[20];
    float montant;
}compt;
compt client[100];
int i = 0;

int main(){
    int choix;
    //client a;
    Menu :
    printf("\t\t\t============== #La Banc AL-Aman# =============\n");
    printf("\t\t\t============= #Le Menu Principal# ============\n");
    printf("\t\tBienvenue a nos Precieux Clients De La Banc #Al-Aman# Qui Garde votre Argent \n");
    printf("\t\tIntroduire un compt bancaire, Entrez Le Code 1 \n");
    printf("\t\tIntroduire au plusieur compt bancaire, Entrez Le Code 2 \n");
    printf("\t\tPour Retirer de L argent Ou Deposez, Entrez Le Code 3 \n");
    printf("\t\tChoisissez Le Bon Choix Pour Vous : ");
    scanf("%d", &choix);
    system("cls");
    switch(choix){
        case 1:{
              printf("\n\t\t\t============ #Creer un Compt# ===========\n");
              int i = 0;
              printf("\n\t\t\t\tSaisez Le nom : ");
              scanf("%s",client[i].nom);
              printf("\n\t\t\t\tSaisez Le Prenom : ");
              scanf("%s", client[i].prenom);
              printf("\n\t\t\t\tSaisez Le CIN : ");
              scanf("%s", client[i].cin);
              printf("\n\t\t\t\tSaisez Le Montant : ");
              scanf("%d", &client[i].montant);
              system("cls");
              printf("\n\t\t\t============== #Creation Succes# =============\n\n");
            goto Menu;
            break;
        }
            
        case 2:{
          int nombres;
          int i;
          printf("\t\tCombien de personnes voulez-vous enregistrer : ");
          scanf("%d", &nombres);
          for(i = 0; i < nombres; i++){
          printf("\n\t\t\t============ #Creer un Compt# ===========\n");
          printf("\n\t\t\t\tSaisez Le nom : ");
          scanf("%s", client[i].nom);
          printf("\n\t\t\t\tSaisez Le Prenom : ");
          scanf("%s", client[i].prenom);
          printf("\n\t\t\t\tSaisez Le CIN : ");
          scanf("%s", client[i].cin);
          printf("\n\t\t\t\tSaisez Le Montant : ");
          scanf("%d", &client[i].montant);  
          system("cls");
        }
          system("cls");
          printf("\n\t\t\t ============== #Creation Succes# =============\n\n");
            //i++;
            goto Menu;
            break;
        }

        // case 3:{
        //   int specifier;
        //   Specification :
        //   printf("Si vous souhaitez retirer des fonds, entrez le code 1 : ");
        //   printf("Si vous voulez payer de l'argent, entrez le code 2 : ");
        //   scanf("%d", &specifier);
        //   switch(specifier){
        //     case 1 :{
        //       //retirer();
        //       break;
        //     }
        //     case 2 :{ 
        //       //Deposer();
        //     }
        //     default :{
        //       system("cls");
        //       printf("\n\t\tSi vous voulez vous montrer le bon choix pour vous\n\n");
        //       goto Specification;
        //     }
        //   }
        // }
        // case 4 :{
        //   //search();
        // }
        // default :
        //     system("cls");
        //     printf("\n\t\tSi vous voulez vous montrer le bon choix pour vous\n\n");
        //     goto Menu;
        
    return 0; 
    }
    }