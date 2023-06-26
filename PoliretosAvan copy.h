/*
*POLIRETOS-SERIES NUMERICAS
*Nombre: Sebastian Leon
*Fecha: 11/06/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#define TIME 100000

// // 

// S1:  0 1 1 2 3 5 8 13 ...      
int  leonSerieS1(int nro)
{
    int a =0, b=1, c=1;
    for (int i = 0; i < nro; i++)
    {
        printf ("%i  ", c);
        c = a + b;
        a = b;
        b = c;
    usleep(TIME);
    }
    printf("\n"); 
    return 0;
}

// S2:  1 0 3 0 5 0 7 0 9 ...
int  leonSerieS2(int nro)
{
    int a=1;
    for (int i=0; i < nro; i++)
    {
        if(a%2==0){
            printf("0 ");
        } else {
            printf("%i ",a);
        }
    a++;
    usleep(TIME);
    }   
    printf("\n"); 
    return 0;    
}

// S3:  0/1  1/3  1/5  2/7  3/9   5/11  8/13  13/15 ...
int  leonSerieS3(int nro)
{
    int a=0, w=1, b=1, c=0;
    for (int i=0; i < nro; i++)
    {
        printf("%i/%i ", a, w);
        w=w+2;
        printf("  ");
        c = a + b;
        a = b;
        b = c;
    usleep(TIME);
    }   
    printf("\n"); 
    return 0;    
}

// S4:  0/2  1/4  1/6  2/8  3/10  5/12  8/14  13/16 ...
int  leonSerieS4(int nro)
{
    int a=0, w=2, b=1, c=0;
    for (int i=0; i < nro; i++)
    {
        printf("%i/%i ", a, w);
        w=w+2;
        printf("  ");
        c = a + b;
        a = b;
        b = c;
    usleep(TIME);
    }   
    printf("\n"); 
    return 0;    
}

//ShowPrimo
//indica los numeros primos
 int showPrimo(int valor)
 {
     if (valor <= 1) {
        return 0;
    }
    for (int i = 2; i < valor; i++) {
        if (valor % i == 0) {
            return 0;
        }
    }
    return 1;
 }

// S5:  2  3  5   7  11  13  17  19  23  29  31 ...
int leonSerieS5(int nro)
{
    int contar=0, s=2;

    while (contar < nro)
    {
   if(showPrimo(s)){
    printf("%i ", s);
    contar++;
    usleep(TIME);
   }
    s++;

    }
    printf("\n"); 
    return 0;    
}

// S6: 1 4 9 16 25 36 49 64 ....
int leonSerieS6(int nro)
{
    int sumImpar=1,serie=1;
    for(int i=0; i<nro; i++)
    {
        sumImpar = sumImpar+2;
        printf("%i ", serie);
        serie   = serie+sumImpar;
        usleep(TIME);
    }
    printf("\n"); 
    return 0;    
}

// S7: 1 4 7 10 13 16 19 22 25 ...
int leonSerieS7(int nro)
{
    int numero=1, sumando=3;
    for(int i=0; i<nro; i++)
    {
        printf("%i ", numero);
        numero = numero+sumando;
        usleep(TIME);

    }
    printf("\n"); 
    return 0;    
}

// S8: 3, 8, 13, 18, 23, 28, 33, 38, ...
int leonSerieS8(int nro)
{
    int numero=3, sum=5;
    for(int i=0; i<nro; i++)
    {
        printf("%i, ", numero);
        numero = numero+sum;
        usleep(TIME);

    }
    printf("\n"); 
    return 0;    
}

// S9: 2, 4, 8, 16, 32, 64, 128, 256, ...
int leonSerieS9(int nro)
{
    int numero=0, base=2;
    for(int i=1; i<=nro; i++)
    {
    // la variable i hace las funciones de exponente
    numero = pow(base, i);
        printf("%i, ",numero);
        usleep(TIME);
    }
    printf("\n"); 
    return 0;    
}

// S10: 3, 9, 27, 81, 243, 729, 2187, ...
int leonSerieS10(int nro)
{
    int numero=0, base=3;
    for(int i=1; i<=nro; i++)
    {
    // la variable i hace las funciones de exponente
    numero = pow(base, i);
        printf("%i, ",numero);
        usleep(TIME);
    }
    printf("\n");
    return 0;    
}

// S12: 2 6 12 20 30 42 56 72 ...
int leonSerieS12(int nro)
{
    int sumPar=2,serie=2;
    for(int i=0; i<nro; i++)
    {
        sumPar = sumPar+2;
        printf("%i ", serie);
        serie   = serie+sumPar;
        usleep(TIME);
    }
    printf("\n"); 
    return 0;    
}

// // SERIES DE CARACTERES

// Car_S1: + - + - + - + ... 
int leonSerieCarS1(int nro)
{
    int a =0, b=1, c=1;
    for (int i = 0; i < nro; i++)
    {
        if (i%2==0)
        {
            printf ("+ ");
        } else {
            printf ("- ");
        }
    usleep(TIME);
    }
    printf("\n"); 
    return 0;
}
     
// Car_S2: + + ++ +++ +++++ ++++++++ +++++++++++++ ...
int leonSerieCarS2(int nro)
{
    int a =0, b=1, c=1;
    for (int i = 0; i < nro; i++)
    {
        for (int w=0; w<c; w++)
        {
            printf ("+");
        }
        printf("  ");
        c = a + b;
        a = b;
        b = c;
    usleep(TIME);
    }
    printf("\n"); 
    return 0;
}

// Car_S3: ++ +++ +++++ +++++++ +++++++++++ +++++++++++++ ...
int leonSerieCarS3(int nro)
{
     int contar=0, s=2;

    while (contar < nro)
    {
        if(showPrimo(s)){
            for(int w=0; w<s; w++)
            {
                printf("+");
            }
            printf("  ");    
            contar++;
            usleep(TIME);
        }
        s++;
    }
    printf("\n"); 
    return 0;    
}

// Car_S4: + - * / + - * / + - * / ...
int leonSerieCarS4(int nro)
{
    char caracter[]="+-*/ ";
    for(int i=0; i<nro; i++)
    {
        printf("%c ", caracter[i%4]);
        usleep(TIME);
    }
    printf("\n"); 
    return 0;
}

// Car_S5:  \ | / - | \ | / - | \ | / - | ....
int leonSerieCarS5(int nro)
{
char caracter[]="\\|/-| ";
    for(int i=0; i<nro; i++)
    {
        printf("%c ", caracter[i%5]);
        usleep(TIME);
    }
    printf("\n"); 
    return 0;
}

// Car_S6:  a b c d e f g h ...
int leonSerieCarS6(int nro)
{
char caracter[]="abcdefghijklmnopqrstuvwxyz ";
    for(int i=0; i<nro; i++)
    {
        printf("%c ", caracter[i%27]);
        usleep(TIME);
    }
    printf("\n"); 
    return 0;
}
// Car_S7:  a b c d e f g h ...
