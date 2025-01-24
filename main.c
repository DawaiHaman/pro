#include <stdio.h>
#include <stdlib.h>
#include "T.c"
int main( void ) {
int result = power( 2, 4 );
printf( "2³ == %d\n", result );
result = fact( 5 );
printf( "6! == %d\n", result );

 afficherBonjour();
 inverser();
 produit ();
 parite ();
 comparaison ();
 ordre ();
return EXIT_SUCCESS;
}
