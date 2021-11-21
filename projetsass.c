#include <stdio.h>
#include <stdlib.h>

char Inscription(char nom[], char prenom[], char cin[], long int montant){
    int nombres, i;
    //printf("\e[1;1H\e[2J");
    printf("\t\tCombien de personnes voulez-vous enregistrer : ");
    scanf("%d", &nombres);
    if(nombres > 1){
        for(i = 0; i < nombres; i++){
            printf("\n\t\t\t\tSaisez Le nom : ");
            scanf("%s", &nom);
            printf("\n\t\t\t\tSaisez Le Prenom : ");
            scanf("%s", &prenom);
            printf("\n\t\t\t\tSaisez Le CIN : ");
            scanf("%s", &cin);
            printf("\n\t\t\t\tSaisez Le Montant : ");
            scanf("%d", &montant);
        }
    }
    else{
        printf("\n\t\t\t\tSaisez Le nom : ");
        scanf("%s", &nom);
        printf("\n\t\t\t\tSaisez Le Prenom : ");
        scanf("%s", &prenom);
        printf("\n\t\t\t\tSaisez Le CIN : ");
        scanf("%s", &cin);
        printf("\n\t\t\t\tSaisez Le Montant : ");
        scanf("%d", &montant);
    }
}

void verifiez(long int montant){

}
void retirerOuDeposer(long int montant){

}

int main(){
    int choix;
    Menu :
    printf("\t\t\t\t\t #La Banc AL-Aman#\n");
    printf("\t\t\t\t\t#Le Menu Principal#\n");
    printf("\t\tBienvenue a nos Precieux Clients De La Banc #Al-Aman# Qui Garde votre Argent \n");
    printf("\t\tInscrivez vous, Entrez Le Code 1 \n");
    printf("\t\tPour Verifiez Votre Sole Bancaire, Entrez Le Code 2 \n");
    printf("\t\tPour Retirer de L argent Ou Deposez, Entrez Le Code 3 \n");
    printf("\t\tChoisissez Le Bon Choix Pour Vous : ");
    scanf("%d", &choix);
    switch(choix){
        char nom[] = {}, prenom[] = {}, cin[] = {} ;
        long int montant = 0;
        case 1:{
            Inscription(nom, prenom, cin, montant = 0);
            break;
        }
        case 2:{
            verifiez(montant);
            break;
        }
        case 3:{
            retirerOuDeposer(montant);
            break;
        }
        default :{
            printf("\e[1;1H\e[2J");
            printf("\n\t\tSi vous voulez vous montrer le bon choix pour vous\n\n");
            goto Menu;
        }
    }
    return 0; 
}
