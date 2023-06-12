/*serie caarateres*/
#include <stdio.h>
//serie caracteres//

void caracterAlternado(int n)// + - + - ...//
{
    for (int i=0; i<n; i++)
        {
            if (i%2==0) 
            printf (" + ");
            else
            printf (" - ");
        }
        printf (" \n ");
}
//serie caracteres s2//
/*void caracterAlternadoFibonacci(int n)  //buscar//
{
    for (int i=0; i<n; i++)
        {
            if (i%2==0) 
            printf (" + ");
            else
            printf (" - ");
        }
}*/

//serie caracteres s4 + - */+ - * / ... //
void serieCaracterFiguraMasMenos(int num)
{
    for (int i=0; i<num; i++)
    {
        printf (" + - * / ");
    } 
}

int main()
{
    int numero=0;
        printf ("Elija un numero: ");
        scanf ("%i",&numero);

    caracterAlternado(numero);
   serieCaracterFiguraMasMenos(numero);
}


