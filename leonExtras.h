/*
*POLIRETOS-SERIE FIGURAS
*Nombre: Sebastian Leon
*Fecha: 17/06/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <string.h>

#define WAIT 20000

char espacio(int sp)
{
    for (int i=0; i<sp; i++)
    {
       printf(" ");
    }
}

/*
a) Desplazar a la derecha la "o" en la misma linea el numero de espacios que
ingrese el usuario
*/
int leonSerieExtraA(int nro)
{
    for (int i = 0; i < nro; i++)
    {
        espacio(i);
        printf("o\r");
        usleep(WAIT);
    }
    printf("\n"); 
    return 0;
}

/*
e) Desplazar a la Izquierda la "o" en la misma linea el numero de espacios que
ingrese el usuario
*/
int leonSerieExtraE(int nro)
{
        for (int i = nro; i > 0; i--)
    {
        espacio(i);
        printf("o\r");
        usleep(WAIT);
        espacio(i+1);
        fflush(stdout);
        printf("\r");
    }
    printf("\n"); 
    return 0;
}

/*
i) usar los signos \|/-| para simular un movimiento rotacional de carga 0% hasta
100% 
*/
int leonSerieExtraI()
{
    char signo[]="\\|/-| ";
        for (int i = 0; i <= 100; i++)
    {

        printf("%c  %%%i", signo[i%6], i);
        usleep(WAIT*4);
        printf("\r");
    }
    printf("\n"); 
    return 0;
}

/*
o) Cargar su nombre completo letra a letra en la misma linea 0% hasta 100%
considerando la tamaño de su nombre.
Ejemplo:
                 0%
 Patricio        50%
 Patricio Paccha 100%
*/
int leonSerieExtraO(char* name)
{
    int largo = strlen(name);
    char nombre[largo];
    strcpy(nombre, name);
    char imprimir[largo];
        
       for (int i = 0; i <= 100; i++)
    {
        int wordSize = (largo * i) / 100;
        strncpy(imprimir, nombre, wordSize);
        imprimir[wordSize] = '\0';
        
        printf("%s \r", imprimir);
        usleep(WAIT * 4);
        espacio(largo+3);
        printf("%%%i \r", i);
        usleep(WAIT * 1);
        fflush(stdout);
    }
    printf("%s", imprimir);
    printf("\n"); 
    return 0;
}

/*
u) Desplazar la figura a la derecha
   \|||/
   (> <)
ooO-(_)-Ooo
*/
int leonSerieExtraU(int nro)
{
    for (int i = 0; i < nro; i++)
    {
        espacio(i);
        printf("   \\|||/\n");
        espacio(i);
        printf("   (> <)\n");
        espacio(i);
        printf("ooO-(_)-Ooo\n");
        printf("\033[3A");
        usleep(WAIT);
    }
    printf("\n\n\n"); 
    return 0;
}