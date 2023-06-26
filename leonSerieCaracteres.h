/*
*POLIRETOS-SERIES DE CARACTERES
*Nombre: Sebastian Leon
*Fecha: 11/06/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#define waiting 50000

// // 

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
    usleep(waiting);
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
    usleep(waiting);
    }
    printf("\n"); 
    return 0;
}

//mostrarPrimo
//indica los numeros primos
 int mostrarPrimo(int valor)
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

// Car_S3: ++ +++ +++++ +++++++ +++++++++++ +++++++++++++ ...
int leonSerieCarS3(int nro)
{
     int contar=0, s=2;

    while (contar < nro)
    {
        if(mostrarPrimo(s)){
            for(int w=0; w<s; w++)
            {
                printf("+");
            }
            printf("  ");    
            contar++;
            usleep(waiting);
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
        usleep(waiting);
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
        usleep(waiting);
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
        usleep(waiting);
    }
    printf("\n"); 
    return 0;
}

// S6b: a + c - e + g - ...
int leonSerieCarS6b(int nro)
{
    char resta[]="-", suma[]="+";
    char caracter[]=" abcdefghijklmnopqrstuvwxyz";
    for(int i=1; i <= nro; i++)
    {  
         if(i%2==0)
        {
            printf((i%4 == 0)? resta : suma);
        } else {
            printf("%c", caracter[i%27]);
        }
    printf(" ");
    usleep(waiting);
    }
    printf("\n");
    return 0;
}

//S7: aa bbbb cccccc dddddddd ...
int leonSerieCarS7(int nro)
{
    int a=0, c=0;
    char caracter[]=" abcdefghijklmnopqrstuvwxyz";
    for (int i=0; i <= nro; i++)
    {
        for (int w=0; w < a; w++)
        {
            printf("%c", caracter[i%27]);
        }
        a=a+2;
        printf(" "); 
        usleep(waiting);
    }  
    printf("\n");
    return 0;
}

//S8: a bbb ccccc ddddddd eeeeeeeee...
int leonSerieCarS8(int nro)
{
    int a=1;
    char caracter[]="abcdefghijklmnopqrstuvwxyz";
    for (int i=0; i < nro; i++)
    {
        for (int w=0; w < a; w++)
        {
            printf("%c", caracter[i%27]);
        }
        a=a+2;
        printf(" "); 
        usleep(waiting);
    }  
    printf("\n");
    return 0;
}

//S9: a b c dd eee fffff gggggggg ... 
int leonSerieCarS9(int nro)
{
    int a =0, b=1, c=1;
    char caracter[]=" abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < nro; i++)
    {
        for (int w=0; w < a; w++)
        {
            printf("%c", caracter[i%27]);
        }
            if(i==1){
                a=a;
            } else {
                c = a + b;
                a = b;
                b = c;
            }
        printf(" "); 
        usleep(waiting);
    }  
    printf("\n");
    return 0;
}


  void leonSerieCaracteres(int num)
  {
        printf("\nCarS1: \n\n");
        leonSerieCarS1(num);
        printf("\nCarS2: \n\n");
        leonSerieCarS2(num);
        printf("\nCarS3: \n\n");
        leonSerieCarS3(num);
        printf("\nCarS4: \n\n");
        leonSerieCarS4(num);
        printf("\nCarS5: \n\n");
        leonSerieCarS5(num);
        printf("\nCarS6: \n\n");
        leonSerieCarS6(num);
        printf("\nCarS6b: \n\n");
        leonSerieCarS6b(num);
        printf("\nCarS7: \n\n");
        leonSerieCarS7(num);
        printf("\nCarS8: \n\n");
        leonSerieCarS8(num);
        printf("\nCarS9: \n\n");
        leonSerieCarS9(num);
  }