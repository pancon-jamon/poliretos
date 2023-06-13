/*serie caarateres*/
#include <stdio.h>
//#define alfabeto = "abcdefghijklmnopqrstuvwxyz"
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
    printf ("\n");
}

//serie caracteres s5 \ l / - l...//
void serieCaracterFigura2(int num)
{
    for (int i=0; i<num; i++)
    {
        printf (" \\ l / - l ");
    } 
    printf ("\n");
}

void serieCaracterAbecedario(int num)
{
    char alfabeto[]="abcdefghijklmnopqrstuvwxyz";
    int contador=26;
    
    for (int i=0; i<num; i++)
    {
        printf("%c ",alfabeto[i%contador],i);
    } 
    printf ("\n");
}

void serieCaracterAbecedarioAlternado(int num)
{
    char alfabeto[]="abcdefghijklmnopqrstuvwxyz";
    int contador=26;
    
    for (int i=0; i<num; i++)
    {
        if (i%2==0)
        printf("%c ",alfabeto[i%contador],i);
        else 
        printf ((i%4==1)?"+ ":"- ");
    } 
}

void serieCaracterAbecedarioDoble(int num)
{
    char alfabeto[]="abcdefghijklmnopqrstuvwxyz";
    int contador=26;
    
    for (int i=0; i<num; i++)
    {
        printf("%c ",alfabeto[i%contador],i);
    } 
    printf ("\n");
}

int main()
{
    int numero=0;
        printf ("Elija un numero: ");
        scanf ("%i",&numero);
        
    caracterAlternado(numero);
   serieCaracterFiguraMasMenos(numero);
   serieCaracterFigura2(numero);
   serieCaracterAbecedario(numero);
   serieCaracterAbecedarioAlternado(numero);
   serieCaracterAbecedarioDoble(numero);
}




