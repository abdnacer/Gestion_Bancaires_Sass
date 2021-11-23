#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char cin[10];
    char nom[20];
    char prenom[20];
    int montant;
}compt;
compt client[100];

int i = 0;
int nombres;

void Deposer();
void retirer();
void Ascendent();
void Descendant();
void AscendentChiffres();





int main(){
    int choix;
    //client a;
    printf("\t\t\t\t\t============== #La Banc AL-Aman# =============\n\n");
    printf("\t\t\t\t\t============= #Le Menu Principal# ============\n\n");
    printf("\t\t\t Bienvenue a nos Precieux Clients De La Banc #Al-Aman# Qui Garde votre Argent \n\n");
    Menu :
    printf("\t\tIntroduire un compt bancaire, Entrez Le Code 1 \n\n");
    printf("\t\tIntroduire au plusieur compt bancaire, Entrez Le Code 2 \n\n");
    printf("\t\tPour Choisir Un Service Pour Retirer De L'argent Ou Deposer, Entrez Le Code 3 \n\n");
    printf("\t\tPour Afficher Par Ordre Ascendant Et Descendant, Entrez Le Code 4 \n\n");
    printf("\tPour La Fidelisation Qui Ajout 1.3 Aux Compt Ayant Les 3 Personnes De Montant Superieur, Entrez Le Code 5 \n\n");
    printf("\t\t Pour Quiter L application, Entrer le code 6 \n\n");
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
              scanf("%d", &client[i].montant);
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
          scanf("%d", &client[i].montant);  
          i++;
          system("cls");
        }

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
            printf("\t\tPour Ordre Ascendant, Entrer Le Code 1 \n\n");
            printf("\t\tPour Ordre Descendant, Entrer Le Code 2 \n\n");
            printf("\t\tPour Ordre Ascendant les Comptes bancaires ayant un montant supérieur à un chiffre introduit, Entrer Le Code 3 \n\n");
            printf("\t\tPour Ordre Descendant les comptes bancaires ayant un montant supérieur à un chiffre introduit, Entrer Le Code 4 \n\n");
            printf("\t\tSi Vous Souhaitez Quitter Ce Service, Entrer Le Code 5 \n\n");
            printf("\t\tChoisissez Le Bon Choix Pour Vous : ");
            scanf("%d", &choix);
            switch(choix){
              case 1:{
                Ascendent();
                system("cls");
                for(i = 0; i < nombres; i++){
                  printf("\n\t\t\t============ #Compt Numero %d # ===========\n\n", i+1);
                  printf("\t\t\t\t CIN : %s \n", client[i].cin);
                  printf("\t\t\t\t Nom : %s \n", client[i].nom);
                  printf("\t\t\t\t Prenom : %s \n", client[i].prenom);
                  printf("\t\t\t\t Montant : %d DH \n\n", client[i].montant);
                }
                goto Menu;
                break;
              }
              case 2 : {
                Descendant();
                system("cls");
                for(i = 0; i < nombres; i++){
                  printf("\n\t\t\t============ #Compt Numero %d # ===========\n\n", i+1);
                  printf("\t\t\t\t CIN : %s \n", client[i].cin);
                  printf("\t\t\t\t Nom : %s \n", client[i].nom);
                  printf("\t\t\t\t Prenom : %s \n", client[i].prenom);
                  printf("\t\t\t\t Montant : %d DH \n\n", client[i].montant);
                }
                goto Menu;
                break;
              }
              case 3 :{
                system("cls");
                AscendentChiffres();
                for(i = 0; i < nombres; i++){
                  printf("\n\t\t\t============ #Compt Numero %d # ===========\n\n", i+1);
                  printf("\t\t\t\t CIN : %s \n", client[i].cin);
                  printf("\t\t\t\t Nom : %s \n", client[i].nom);
                  printf("\t\t\t\t Prenom : %s \n", client[i].prenom);
                  printf("\t\t\t\t Montant : %d DH \n\n", client[i].montant);
                }
                break;
              }
              case 4 :{
                // DescendantChiffre();
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

            break;
        }

        case 6 :{

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
    scanf("%s",&cin_user);
    
    for(i = 0; i < index; i++){

    if(strstr(cin_user , client[i].cin)){
      printf("\n\t\tCombien D argent Voulez-vous Extraire : ");
      scanf("%f",&solde);

      if(solde > client[i].montant){
        system("cls");
        printf("\n\t\t ===== Impossible Votre Sold Inferieur ===== \n\n");
        break;
      }

      else{
        system("cls");
        client[i].montant += solde;
        printf("\n\t\t\t=======Le Nouveau Montant C Est : %d =======\n\n", client[i].montant);
        break;
      }
    }
    else{
      printf("\n\t\t\t Sasiez Autre Fois CIN Correcte : \n\n");
      break;
    }
  }
}


/* ----------- Retirer Les Payements ----------- */
void retirer(){
    float solde;
    char cin_user[7];
    int i;
    int index = i;
    printf("\n\t\t\t Entre Votre CIN : ");
    scanf("%s",&cin_user); 
    for(i = 0; i < index; i++){

    if(strstr(cin_user , client[i].cin)){
      printf("\n\t\tCombien D argent Voulez-vous Extraire : ");
      scanf("%f",&solde);

      if(solde > client[i].montant){
        system("cls");
        printf("\n\t\t ======= Impossible Votre Sold Inferieur ======= \n\n");
        break;
      }

      else{
        system("cls");
        client[i].montant -= solde;
        printf("\n\t\t\t=======Le Nouveau Montant C Est : %d =======\n\n", client[i].montant);
        break;
      }
    }
    else{
        system("cls");
      printf("\n\t\t\t ======= CIN N est Pas Correct ======= \n\n");
      break;
    }
  }
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

void AscendentChiffres(){
   int chiffres;
   printf("Entrez Un Montant Pour Vous Montrer Les Plus Gros Comptes Bancaires : ");
   scanf("%d", &chiffres);


    compt temporaire;
    client new[100];
    int i, j ;
        if(chiffres < client[i].montant){
          new[i] = client[i].montant;
        }


      for(i = 0; i < new[i]; i++)
        for(j = 0; j < new[j]; j++)
            if(new[i] > new[j]){
              temporaire = new[i];
              new[i] = new[j];
              new[j]= temporaire;
        }
}