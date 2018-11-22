#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int liczba1, liczba2;

        printf("Podaj liczbe 1:");
        scanf("%d",&liczba1);
        fflush(stdin);

        printf("Podaj liczbe 2:");
        scanf("%d",&liczba2);
        fflush(stdin);
        
        printf("wynik to: %d\n", liczba1 ,liczba2);

        return 0;
        system("pause");
}


