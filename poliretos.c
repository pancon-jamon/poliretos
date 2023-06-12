/*serie caarateres*/
#include <stdio.h>
//serie caracteres//

void caracterAlternado(int n)
{
    for (int i=0; i<n; i++)
        {
            if (i%2==0) 
            printf (" + ");
            else
            printf (" - ");
        }

}

int main()
{
    int numero=0;
        printf ("Elija un numero: ");
        scanf ("%i",&numero);

    caracterAlternado(numero);
}


