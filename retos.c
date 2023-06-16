#include <stdio.h>

void  coelloSerieNumericaFibonacci(int cantidad)
{
    printf ("Serie 1.1:\t ");
    int a =0, b=1, c=1;
    for (int i = 0; i < cantidad; i++)
    {
        printf("%i",&c);
        printf("\t");
        c = a + b;
        a = b;
        b = c;
    }
    printf("\t");
    cantidad =0;
    printf("\n");
}

void  coelloCaracterFibonacciMas(int cantidad)
{
    printf ("Serie 2.2: ");
    int a =0, b=1, c=1;
    for (int i = 0; i < cantidad; i++)
    {
        printf(" +");
        for (int s = 0; s < c; s++)
            printf ("+");
        printf("\t");
        c = a + b;
        a = b;
        b = c;
    }
    cantidad =0;
    printf("\ncoelloCaracterFibonacciMas.cantida %i",cantidad); 
    printf("\n");
}

void  coelloCaracterFibonacciMasDesde2(int cantidad)
{
    printf ("Serie 2.2: ");
    int a =0, b=1, c=1;
    for (int i = 1; i < cantidad; i++)
    {
        printf(" +");
        for (int s = 0; s < c; s++)
            printf ("+");
        printf("\t");
        c = a + b;
        a = b;
        b = c;
    }
    cantidad =0;
    printf("\n coelloCaracterFibonacciMas.cantida %i",cantidad); 
    printf("\n");
}


/*void coelloCaracterAlternado(int n)// + - + - ...//
{
    for (int i=0; i<n; i++)
        {
            if (i%2==0) 
            printf (" + ");
            else
            printf (" - ");
        }
        printf (" \n ");

}*/
void coelloSerieNumericaParImparConCeros(int n)
{
    for (int i=0; i<=n; i++)
        {
            if (i%2==0) 
                printf (" 0 ");
            else
                printf (" %i ",i);
        }
    printf (" \n ");

}

void coelloSeriePotencias(int n)
{
    printf("Serie 1.6: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int s=0;
            s=i*j;
            printf ("%i\t",&s);
        }
        
    }
    printf ("\n");

}

void coelloSerieMasTres(int n){
    printf ("Serie numerica 1.7 \t");
    for (int i = 1; i < n; i=i+3)
    {
        printf ("%i\t",&i);
    }
     printf ("\n");
}

void coelloSerieMasCinco(int n){
    printf ("Serie numerica 1.8 \t");
    for (int i = 3; i < n; i=i+5)
    {
        printf ("%i\t",&i);
    }
     printf ("\n");
}

void coelloSeriePorDos(int n){
    printf ("Serie numerica 1.9 \t");
    for (int i = 1; i < n; i=i*2)
    {
        printf ("%i\t",&i);
    }
     printf ("\n");
}

void coelloSeriePorTres(int n){
    printf ("Serie numerica 1.10 \t");
    for (int i = 1; i < n; i=i*3)
    {
        printf ("%i\t",&i);
    }
     printf ("\n");
}

/*int main()
{
    
    for (int i = 0; i < n; i++)
    {
       int s=n+i;
        if (s%2==0)
        printf ("0 /n");
        else
        printf (" %i ", s);
    }
}*/



/*serie caarateres*/
//serie caracteres//

void coelloCaracterAlternado(int n)// + - + - ...//
{
    printf ("serie 2.2: \t");
    for (int i=0; i<n; i++)
        {
            if (i%2==0) 
            printf (" + ");
            else
            printf (" - ");
        }
    printf ("\n");
}

void serieCaracterFigura2(int num)
{
    for (int i=0; i<num; i++)
    {
        printf (" \\ | / - | ");
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
//serie caracteres s2//
/*void coelloCaracterAlternadoFibonacci(int n)  //buscar//
{
    for (int i=0; i<n; i++)
    {
        if (i%2==0) 
        printf (" + ");
        else
        printf (" - ");
    }    
}*/


void coelloSerieCaracterFiguraMasMenos(int num)
{
    printf ("serie 2.3: \t");
    for (int i=0; i<num; i++)
    {
        printf (" + - * / \t");
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
    printf("\n");
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


void coelloFiguraCuadrado(int size)
{
    printf ("Serie 3.1: \n");
    for (int v = 1; v <= size; v++)
    {
        for (int h = 1; h <= size; h++)
        {
            if ( (h == 1 || h== size) || (v == 1 || v== size) )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void coelloFiguraCuadradoAlternado(int size)
{
    printf ("Serie 3.2: \n");
    for (int v = 1; v <= size; v++)
    {
        for (int h = 1; h <= size; h++)
        {
            if ( (h == 1 || h== size) || (v == 1 || v== size) )
                printf("* ");
            if ((h == 1 || h== size) || (v == 1 || v== size)&&(h%2==0)&&(v%2==0))
            printf ("+");
            else
                printf("  ");
        }
        printf("\n");
    }
}


void coelloFiguraTriangulo(int size)
{
    printf ("Serie 3.3: \n");
    for (int f = 1; f <= size; f++)
    {
        for (int c = 1; c <= size; c++)
        {
        if (f >= c)
            printf ("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    
}

void coelloFiguraTrianguloInvertido(int size)
{
    printf ("Serie 3.3: \n");
    for (int f = 1; f <= size; f++)
    {
        for (int c = 1; c <= size; c++)
        {
        if (f <= c)
            printf ("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    
}


void coelloFiguraPascal(int n) {
    int  coef = 1, space, i, j;

    for (i = 0; i < n; i++) {
        for (space = 1; space <= n - i; space++)
            printf("  ");

        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            printf("%4d", coef);
        }

        printf("\n");
    }

}


int main()
{
    int numero=0, i;
    printf ("Elija un numero: ");
    scanf ("%i",&numero);
    
    coelloSerieNumericaFibonacci(numero);
    coelloCaracterAlternado(numero);
    coelloSerieNumericaParImparConCeros(numero);
    coelloSerieMasTres(numero);
    coelloSerieMasCinco(numero);
    coelloSeriePorDos(numero);
    coelloSeriePotencias(numero);
    coelloCaracterFibonacciMas(numero);
    coelloCaracterAlternado(numero);
    serieCaracterFigura2(numero);
    serieCaracterAbecedario(numero);
    serieCaracterAbecedarioAlternado(numero);
   serieCaracterAbecedarioDoble(numero);
    //coelloCaracterAlternadoFibonacci(numero);
    coelloSerieCaracterFiguraMasMenos(numero);
    coelloFiguraCuadrado(numero);
    //coelloFiguraCuadradoAlternado(numero);
    coelloFiguraTriangulo(numero);
    coelloFiguraTrianguloInvertido(numero);
    coelloFiguraPascal(numero);
    coelloCaracterFibonacciMasDesde2(numero);
}
