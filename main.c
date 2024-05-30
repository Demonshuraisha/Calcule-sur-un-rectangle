#include <stdio.h>
#include <stdlib.h>
#include "calculerPerimetreRectangle.h"
#include "calculerSurfaceRectangle.h"

int main()
{
    float longueur,largeur;

    

    printf("\n\n\n\t\t\tCalcule du périmètre et de la surface d'un Triangle");
    printf("\n\n\t\t\tSaisi de la dimension de notre rectangle\n");

    do
    {
        printf("\nEntrez la longueur du rectangle :");
        scanf("%f",&longueur);
    } while (longueur <= 0);
    

    do
    {
        printf("\nEntrez la largeur du rectangle :");
        scanf("%f",&largeur);
    } while (largeur > longueur);
    
    system("clear");

    printf("\n\n\n\t\t\tAffichage de du périmètre et de la surface \n\n");

    printf("Votre rectangle a une longueur de %f et une largeur de %f",longueur,largeur);

    printf("\n\nle périmètre de ce rectangle est %f",calculerPerimetreRectangle( longueur, largeur));
    printf("\n\nla surface de ce rectangle est %f",calculerSurfaceRectangle( longueur,largeur));

    return 0;
}
