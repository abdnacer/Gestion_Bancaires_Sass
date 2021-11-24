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
int nombres;
int cased = 0;

void Deposer();
void retirer();
void Ascendent();
void Descendant();
void AscendentChiffres();
void DescendantChiffres();
void fedilisation(compt client[], int nombres);

void affichage(){
  for(i = 0; i < nombres; i++){
      printf("\n\t\t\t============ #Compt Numero %d # ===========\n\n", i+1);
      printf("\t\t\t\t CIN : %s \n", client[i].cin);
      printf("\t\t\t\t Nom : %s \n", client[i].nom);
      printf("\t\t\t\t Prenom : %s \n", client[i].prenom);
      printf("\t\t\t\t Montant : %.2f DH \n\n", client[i].montant);
    }
}





int main(){
    int choix;
    printf("\t\t\t============== #La Banc AL-Aman# =============\n\n");
    printf("\t\t\t============= #Le Menu Principal# ============\n\n");
    printf("\t\t Bienvenue a nos Precieux Clients De La Banc #Al-Aman# Qui Garde votre Argent \n\n");
    Menu :
    printf("\t\tIntroduire un compt bancaire, Entrez Le Code 1 \n\n");
    printf("\t\tIntroduire au plusieur compt bancaire, Entrez Le Code 2 \n\n");
    printf("\t\tPour Choisir Un Service Pour Retirer De L'argent Ou Deposer, Entrez Le Code 3 \n\n");
    printf("\t\tPour Afficher Par Ordre Ascendant Et Descendant, Entrez Le Code 4 \n\n");
    printf("\t\tPour La Fidelisation Qui Ajout 1.3 Aux Compt Ayant Les 3 Personnes De Montant Superieur, Entrez Le Code 5 \n\n");
    printf("\t\tPour Quiter L application, Entrer le code 6 \n\n");
    printf("\t\tChoisissez Le Bon Choix Pour Vous : ");
    scanf("%d", &choix);
    system("cls");
    switch(choix){
        case 1:{
              printf("\n\t\t\t============ #Creer un Compt# ===========\n");
              printf("\n\t\t\t\tSaisez Le CIN : ");
              scanf("%s", client[i].cin);
              printf("\n\t\t\t\tSaisez Le nom : ");
              scanf("%s",client[i].nom);
              printf("\n\t\t\t\tSaisez Le Prenom : ");
              scanf("%s", client[i].prenom);
              printf("\n\t\t\t\tSaisez Le Montant : ");
              scanf("%f", &client[i].montant);
              i++;
              system("cls");
              printf("\n\t\t\t\t ============== #Creation Succes# =============\n\n\n");
            goto Menu;
            break;
        }
            
        case 2:{
          int x, index = i;
          printf("\t\tCombien de personnes voulez-vous enregistrer : ");
          scanf("%d", &nombres);
          for(x = index; x < nombres + index; x++){
          printf("\n\t\t\t============ #Creer un Compt# ===========\n");
          printf("\n\t\t\t============ #Compt Numero %d # ===========\n", x+1);
          printf("\n\t\t\t\tSaisez Le CIN : ");
          scanf("%s", client[i].cin);
          printf("\n\t\t\t\tSaisez Le nom : ");
          scanf("%s", client[i].nom);
          printf("\n\t\t\t\tSaisez Le Prenom : ");
          scanf("%s", client[i].prenom);
          printf("\n\t\t\t\tSaisez Le Montant : ");
          scanf("%f", &client[i].montant);  
          i++;
          system("cls");
          }

          system("cls");
          printf("\n\t\t\t\t ============== #Creation Succes# =============\n\n\n");
          goto Menu;
          break;
        }

        case 3:{
          
          int specifier;
          Specification :
          printf("\t\t\tSi vous souhaitez retirer des fonds, entrez le code 1 \n\n");
          printf("\t\t\tSi vous voulez payer de l'argent, entrez le code 2 \n\n");
          printf("\t\t\tQuiter, Entrer le code 3 \n\n");
          printf("\t\t\tChoisissez Le Bon Choix Pour Vous : ");
          scanf("%d", &specifier);
          switch(specifier){
            case 1 :{
                    retirer();
                    goto Menu;
                    break;
            }
            case 2 :{ 
                    Deposer();
                    goto Menu;
                    break;
            }
            case 3 :{
                    system("cls");
                    goto Menu;
                    break;
            }
            default :{
                    system("cls");
                    printf("\n\t\t\t Si vous voulez vous montrer le bon choix pour vous\n\n");
                    goto Specification;
                    break;
            }
          }
          break;
        }

        case 4 :{
            int choix;
            Affichage :
            printf("\tPour Ordre Ascendant, Entrer Le Code 1 \n\n");
            printf("\tPour Ordre Descendant, Entrer Le Code 2 \n\n");
            printf("\tPour Ordre Ascendant les Comptes bancaires ayant un montant supérieur à un chiffre introduit, Entrer Le Code 3 \n\n");
            printf("\tPour Ordre Descendant les comptes bancaires ayant un montant supérieur à un chiffre introduit, Entrer Le Code 4 \n\n");
            printf("\tSi Vous Souhaitez Quitter Ce Service, Entrer Le Code 6 \n\n");
            printf("\tChoisissez Le Bon Choix Pour Vous : ");
            scanf("%d", &choix);
            switch(choix){
              case 1:{
                Ascendent();
                system("cls");
                affichage();
                goto Menu;
                break;
              }
              case 2 : {
                Descendant();
                system("cls");
                affichage();
                goto Menu;
                break;
              }
              case 3 :{
                system("cls");
                AscendentChiffres();
                goto Menu;
                break;
              }
              case 4 :{
                system("cls");
                DescendantChiffres();
                goto Menu;
                break;
              }
              default :{
                system("cls");
                printf("\n\t\t\t Si vous voulez vous montrer le bon choix pour vous\n\n");
                goto Affichage;
                break;
              }
            }
            break;
        }

        case 5 :{
            fedilisation(client,nombres);
            goto Menu;
            break;
        }

        case 6 :{
            exit(1); 
            break;
        }

        default :{
            system("cls");
            printf("\t\t !!!! Le Choix N est Pas Correct, Sasiez Le Bon Choix Pour Effectuer Le Service Que Vous Souhaitez !!!! \n\n");
            goto Menu;
            break;
        }
        
    return 0; 
    }
    }

    /* ----------- Deposer Les Payements ----------- */
    void Deposer(){
    float solde;
    char cin_user[7];
    int i;
    int index = i;

    printf("\n\t\t\t Entre Votre CIN : ");
    N:
    scanf("%s",&cin_user);
    for(i = 0; i < index; i++){

    if((strcmp(cin_user , client[i].cin)) == 0){
      printf("\n\t\tCombien D argent Voulez-vous Extraire : ");
      scanf("%f",&solde);

      if(solde > client[i].montant){
        system("cls");
        printf("\n\t\t ===== Impossible Votre Sold Inferieur ===== \n\n");
        return;
      }

      else{
        system("cls");
        client[i].montant += solde;
        printf("\n\t\t\t=======Le Nouveau Montant C Est : %.2f =======\n\n", client[i].montant);
        return ;
      }
    }
  }
      printf("\n\t\t\t Sasiez Autre Fois CIN Correcte : \n\n");
      goto N;

}


/* ----------- Retirer Les Payements ----------- */
void retirer(){
    float solde;
    char cin_user[7];
    int i;
    int index = i;
    N:
    printf("\n\t\t\t Entre Votre CIN : ");
    scanf("%s",&cin_user); 
    for(i = 0; i < index; i++){

    if((strcmp(cin_user , client[i].cin)) == 0){
      printf("\n\t\tCombien D argent Voulez-vous Extraire : ");
      scanf("%f",&solde);

      if(solde > client[i].montant){
        system("cls");
        printf("\n\t\t ======= Impossible Votre Sold Inferieur ======= \n\n");
        return;
      }

      else{
        system("cls");
        client[i].montant -= solde;
        printf("\n\t\t\t=======Le Nouveau Montant C Est : %.2f =======\n\n", client[i].montant);
        return ;
      }
    }
  }
      system("cls");
      printf("\n\t\t\t ======= CIN N est Pas Correct ======= \n\n");
      goto N;
}

/* ----------- Trier A Ascendent ----------- */
void Ascendent(){
  compt temporaire;
  int i, j;
  for(i = 0; i < nombres; i++)
    for(j = 0; j < nombres; j++)
      if(client[i].montant < client[j].montant){
        temporaire = client[i];
        client[i] = client[j];
        client[j]= temporaire;
      }
}

/* ----------- Trier A Descendant ----------- */
void Descendant(){
  compt temporaire;
    int i, j;
      for(i = 0; i < nombres; i++)
        for(j = 0; j < nombres; j++)
          if(client[i].montant > client[j].montant){
            temporaire = client[i];
            client[i] = client[j];
            client[j]= temporaire;
          }
}

/* ----------- Trier A Ascendent De Chiffres ----------- */
void AscendentChiffres(){
    compt temporaire[30];
    int i,j=0;
    int chiffres;
    printf("\t\tEntrez Un Montant Pour Vous Montrer Les Plus Gros Comptes Bancaires : ");
    scanf("%d", &chiffres);

    for(i = 0; i < nombres; i++){
      if(client[i].montant >= chiffres){
          temporaire[cased] = client[i];
          cased++;
      }
    }
    compt temp;
    for(i = 0; i < cased; i++)
      for(j = 0; j < cased-1; j++)
        if(temporaire[i].montant < temporaire[j].montant){
          temp = temporaire[i];
          temporaire[i] = temporaire[j];
          temporaire[j]= temp;
          }
    
      for(i = 0; i < cased; i++){
          printf("\n\t\t\t============ #Compt Numero %d # ===========\n\n", i+1);
          printf("\t\t\t\t CIN : %s \n", temporaire[i].cin);
          printf("\t\t\t\t Nom : %s \n", temporaire[i].nom);
          printf("\t\t\t\t Prenom : %s \n", temporaire[i].prenom);
          printf("\t\t\t\t Montant : %.2f DH \n\n", temporaire[i].montant);
      }
}

/* ----------- Trier A Descendant De Chiffres ----------- */

void DescendantChiffres(){
    compt temporaire[30];
    int i,j=0;
    int chiffres;
    printf("Entrez Un Montant Pour Vous Montrer Les Plus Gros Comptes Bancaires : ");
    scanf("%d", &chiffres);

    for(i = 0; i < nombres; i++){
      if(client[i].montant >= chiffres){
          temporaire[cased] = client[i];
          cased++;
      }
    }
    compt temp;
    for(i = 0; i < cased; i++)
      for(j = 0; j < cased-1; j++)
        if(temporaire[i].montant > temporaire[j].montant){
          temp = temporaire[i];
          temporaire[i] = temporaire[j];
          temporaire[j]= temp;
          }
    
      for(i = 0; i < cased; i++){
          printf("\n\t\t\t============ #Compt Numero %d # ===========\n\n", i+1);
          printf("\t\t\t\t CIN : %s \n", temporaire[i].cin);
          printf("\t\t\t\t Nom : %s \n", temporaire[i].nom);
          printf("\t\t\t\t Prenom : %s \n", temporaire[i].prenom);
          printf("\t\t\t\t Montant : %.2f DH \n\n", temporaire[i].montant);
      }
}




/* ----------- Fedilisation ----------- */
void fedilisation(compt client[], int nombres){
  compt temporaire;
    int i, j;
      for(i = 0; i < nombres; i++){
        for(j = 0; j < nombres; j++){
          if(client[i].montant > client[j].montant){
            temporaire = client[i];
            client[i] = client[j];
            client[j]= temporaire;
          }
        }

      }
      for(i = 0; i < 3; i++){
          client[i].montant = client[i].montant * 0.13;
          printf("\n\t\t\t============ #Compt Numero %d # ===========\n\n", i+1);
          printf("\t\t\t\t CIN : %s \n", client[i].cin);
          printf("\t\t\t\t Nom : %s \n", client[i].nom);
          printf("\t\t\t\t Prenom : %s \n", client[i].prenom);
          printf("\t\t\t\t Montant : %.2f DH \n\n", client[i].montant);
  }
}