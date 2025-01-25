# include <stdio.h>
#include <stdlib.h>

int somme (int a, int b) {
return a+b;
}
int main ()
{
int x,y;
printf("Entrez deux entiers: ");
scanf("%d%D",&x,&y);

 int resultat =somme(x,y);
  printf("la somme est: %d + %d == %d\n",x,y,resultat);
  return EXIT_SUCCESS;

}
