#include "SampleLib.h"
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
unsigned int result = 1;
while ( value > 1 ) {
result *= value;
value --;
}
return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
if ( pow == 0 ) return 1;
if ( pow == 1 ) return value;int accumulator = 1;
while( pow > 0 ) {
accumulator *= value;
pow--;
}
return accumulator;
}
//Defition de la fonction message.
void afficherBonjour(){
printf("Bonjour\n");
       }
//Defition de la fonction nverser.
void inverser() {
 int n, k;
 int rest=0;
 printf("entrer un entier: ");
 scanf("%d",&n);
 while (n!=0) {
        k=n%10;
     rest=rest*10+k;
 n/=10;
 }
 printf("l'inverse de %d est %d\n",n,rest) ;
       }

//Definition de la fonction produit.
void produit (){
float a, b, p;
printf("entrer deux reels: ");
scanf("%f%f",&a,&b);
p=a*b;
printf("le produit de %f et de %f est %.3f\n",a,b,p);

}
//Definition de la fonction parite.
void parite (){
int n;
printf("entrer un entier pour etudier sa parite: ");
scanf("%d",&n);
if (n%2==0) printf("%d est pair\n",n);
else printf("%d est impair\n",n);

}
//Definition de la fonction comparaison.
void comparaison () {
int a, b;
printf("entrer deux entier pour les comparer: ");
scanf("%d%d",&a,&b);
if (a==b) {
    printf("%d=%d\n",a,b);
}
else if (a>b) {
    printf("%d>%d\n",a,b);
}
else {
    printf("%d<%d\n",a,b);
}
}
//Definition de la fonction ordre.
void ordre() {
int a,b,c, i;
printf("entrer trois entiers pour ies classer dans l'ordre croissant: ");
scanf("%d%d%d",&a,&b,&c);
if(a>b) {
    i=a;
    a=b;
    b=i;
}
if (b>c){
    i=b;
    b=c;
    c=i;
}
if (a>b) {
    i=a;
    a=b;
    b=i;
}
printf("l'ordre croissant des nombres entres est %d %d %d\n",a,b,c);
}
