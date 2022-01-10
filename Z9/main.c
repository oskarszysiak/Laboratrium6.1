#include <stdio.h>
#include <stdlib.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int random=((rand()%100))+1;
    int tries=0;
    int userguess;
    printf("Zgadnij liczbe od 1 do 100\n");
    do{
        printf("Podaj liczbe:");
        scanf("%d", &userguess);
        if(userguess>random){
            printf("Podana liczba jest wieksza od liczby, ktora masz odgadnac!\n");
        }
        else if(userguess<random){
            printf("Podana liczba jest mniejsza od liczby, ktora masz odgadnac!\n");
        }
        tries++;
    }while(userguess!=random);
    printf("Odgadles/as liczbe po %d probach!!!", tries);


}
