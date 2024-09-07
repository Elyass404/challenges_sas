#include <stdio.h>
#include <string.h>
typedef struct {
    int enfants ;
    char nom_1er_enfant[20];
    int  age[20];
}famille;

typedef struct {
    int numero ;
    char nom[20];
    char post[20];
    famille status_famille;
}joueur;

int main() {
    
    joueur j1 = {19,"messi","attack"};
    joueur *p=&j1; // hada rah pointer, ila chti lcode o nta mzl ma9riti poiters, mat7m9ch rassk, khdm b syntax dyal dot . bach takhod les valeur dyal les varible structure dyalk, easy money;
   
    
    joueur j2;
    joueur *p2=&j2; //htta hada rah pointer
    j2.numero = 7;
    j2.status_famille.enfants =5;
    strcpy(j2.nom , "ronaldo");
    strcpy(j2.post , "attack");
    
    strcpy(p->nom , "messi 9dim");
    
    printf("please enter the name of the second player: ");
    scanf("%[^\n]%*c",&p2->nom);//hna affectena la valeur b tari9a dyal pointers, 
    printf("%d %s\n", j1.numero, p->nom);
    printf("%d %s\n",j2.numero, j2.nom);
    printf("ronaldo has :%d children\n",j2.status_famille.enfants);
    strcpy(j2.status_famille.nom_1er_enfant , "junior");
    printf("ronaldo's first son called %s",j2.status_famille.nom_1er_enfant);
    
    
    
    

    return 0;
}