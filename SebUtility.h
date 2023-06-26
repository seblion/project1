#include <stdio.h>
#include <unistd.h>
#include <string.h>

char validarPalabra(char* palabra)
{
   for (int i=0; i<(strlen(palabra));i++)
        {
        int validacion = isalpha(palabra[i]);
        if (validacion==0)
        {
            return 1; //no es una palabra
        }  
        return 0; //es una palabra
        } 
}

void getspalabra( char *label, char *frase)
{
    int valid = 0;  
     do
     {
        printf("\n %s ", label);
        gets(frase); 
        valid = validarPalabra(frase);
     } while (valid==1);
}

int getNumeroPositivo(char *label) //
{
    int numero;
    char str[3];  //999 abc
    do
    {
        printf("\n %s", label);
        gets(str);
        sscanf(str,"%d", &numero);   
    } while (numero <= 0 );
    fflush(stdin);
    return numero;  
}

void LoadingBar(int size)
{ 
    char barra[size];
    float porcentaje = (float)100/(float)size;
    for (int i = 0; i <= size; i++)
        barra[i]=' ';
    
    for (int i = 0; i <= size; i++)
    {
        barra[i]='#';
        printf("%c%c [%s]  %.0f %%", RETORNO, TAB, barra, i*porcentaje);
        usleep(TIEMPO*2);
    }
}