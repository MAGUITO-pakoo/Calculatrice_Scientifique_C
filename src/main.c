#include <stdio.h>
#include <stdlib.h>
#include "..\include\operations.h"
#include "..\include\puissance.h"
#include "..\include\trigo.h"
#include "..\include\utils.h"

int main()
{
    int n, choix, run;
    unsigned int a, b;
    int x, y;

    run = 1;
    while(run == 1){
        pauseScreen();
        clearScreen();
        printf(CYAN "===CALCULATRICE SCIENTIFIQUE===\n" RESET);
        printf("Faire un choix\n1) Multiplication\n2) Factoriel\n3) PGCD\n4) PPCM\n5) Soustraction\n6) Addition\n");
        printf("7) Puissance\n8) Racine nieme\n9) Racine carree\n10) Sinus\n11) Cosinus\n12) Tangente\n99) Quitter\n" VERT">> " RESET);
        scanf("%d", &choix);
        choix = (int)choix;

        switch (choix)
        {
        case 1:
            printf(CYAN " Fonctionnalite 1: Multiplication \n" RESET);
            printf("Entrer le premier nombre\n>> ");
            scanf("%d", &x);
            printf("Entrer le deuxieme nombre\n>> ");
            scanf("%d", &y);
            printf(VERT "%d * %d = %d\n" RESET, x, y, multiplication(x, y) );
            getchar();
            break;
        case 2:
            printf(CYAN " Fonctionnalite 2: Factoriel \n" RESET);
            printf("Entrer un nombre\n>> ");
            scanf("%d", &n);
            printf(VERT "%d! = %d\n" RESET, n, factoreil(n));
            getchar();
            break;
        case 3:
            printf(CYAN " Fonctionnalite 3: PGCD \n" RESET);
            printf("Entrer le premier nombre\n>> ");
            scanf("%d", &a);
            printf("Entrer le deuxieme nombre\n>> ");
            scanf("%d", &b);
            printf(VERT "PGCD(%d, %d) = %d\n" RESET, a, b, pgcd(a, b));
            getchar();
            break;
        case 4:
            printf(CYAN " Fonctionnalite 4: PPCM \n" RESET);
            printf("Entrer le premier nombre\n>> ");
            scanf("%d", &a);
            printf("Entrer le deuxieme nombre\n>> ");
            scanf("%d", &b);
            printf(VERT "PPCM(%d, %d) = %d\n" RESET, a, b, ppcm(a, b));
            getchar();
            break;
        case 5:
            printf(CYAN " Fonctionnalite 5: Soustraction \n" RESET);
            printf("Entrer le premier nombre\n>> ");
            scanf("%d", &x);
            printf("Entrer le deuxieme nombre\n>> ");
            scanf("%d", &y);
            printf(VERT "%d - %d = %d\n" RESET, x, y, soustraction(x, y));
            getchar();
            break;
        case 6:
            printf(CYAN " Fonctionnalite 6: Addition \n" RESET);
            printf("Entrer le premier nombre\n>> ");
            scanf("%d", &x);
            printf("Entrer le deuxieme nombre\n>> ");
            scanf("%d", &y);
            printf(VERT "%d - %d = %d\n" RESET, x, y, somme(x, y));
            getchar();
            break;
        case 7:
            printf(CYAN " Fonctionnalite 7: Puissance \n" RESET);
            printf("Entrer un nombre\n>> ");
            scanf("%d", &x);
            printf("Entrer l'exposant'\n>> ");
            scanf("%d", &n);
            printf(VERT "%d ^ %d = %d\n" RESET, x, n, puissance(x, n));
            getchar();
            break;
        case 8:
            printf(CYAN " Fonctionnalite 8: Racine nieme \n" RESET);
            printf("Entrer un nombre\n>> ");
            scanf("%d", &x);
            printf("Entrer le n\n>> ");
            scanf("%d", &n);
            printf(VERT "racine %dieme de %d  = %d\n" RESET, n, x,racine(x, n));
            getchar();
            break;
        case 9:
            printf(CYAN " Fonctionnalite 9: Racine carree \n" RESET);
            printf("Entrer un nombre\n>> ");
            scanf("%d", &n);
            printf(VERT "Racine carree de %d = %d\n" RESET, n, racineCarree(n));
            getchar();
            break;
        case 10:
            printf(CYAN " Fonctionnalite 10: Sinus \n" RESET);
            printf("Entrer un angle en degre\n>> ");
            scanf("%d", &n);
            printf(VERT "sin(%d) = %d\n" RESET, n, sinus(n));
            getchar();
            break;
        case 11:
            printf(CYAN " Fonctionnalite 11: Cosinus \n" RESET);
            printf("Entrer un angle en degre\n>> ");
            scanf("%d", &n);
            printf(VERT "cos(%d) = %d\n" RESET, n, cosinus(n));
            getchar();
            break;
        case 12:
            printf(CYAN " Fonctionnalite 12: Tangente \n" RESET);
            printf("Entrer un angle en degre\n>> ");
            scanf("%d", &n);
            printf(VERT "tan(%d) = %d\n" RESET, n, tangente(n));
            getchar();
            break;
        case 99:
            printf(ROUGE GRAS "\n Merci d'avoir utilise le programme ! Au revoir.\n" RESET);
            getchar();
            run = 0;
            break;
        default:
            printf(ROUGE "Choix invalide. Veuillez reessayer.\n" RESET);
            getchar();
        }
    }
    
    return 0;
}



/* int main() {
    int a, b, resultat;

    
    printf("Entrez le premier nombre : ");
    scanf("%d", &a);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &b);

    
    resultat = somme(a, b);


    printf("La somme de %d et %d est %d\n", a, b, resultat);

    return 0;
}
 */