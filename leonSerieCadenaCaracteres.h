/*
*POLIRETOS-SERIE Cadena de Caracteres
*Nombre: Sebastian Leon
*Fecha: 11/06/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
/*
C01) Pedir una frase y contador las vocales.
 Ejemplo, frase: ballena
 salida: tiene 3 vocales
*/   
char  leonSerieC01(const char* palabra)
{
    char vocales[]="aeiou";
    int size= strlen(palabra);
    int contar=0;
  
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < strlen(vocales); j++) {
            if (palabra[i] == vocales[j]) {
                contar++;
                break;

            }
        }
    }
     printf("tiene %i vocales\n",contar);
    printf("\n"); 
    return 0;
}

/*
C02) Pedir una frase y contador las letras.
 Ejemplo, frase : ballena
 salida: tiene 4 letras
*/    
char  leonSerieC02(const char* palabra)
{
    char letras[]="bcdfghjklmnñpqrstvwxyz";
    int size= strlen(palabra);
    int contar=0;
  
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < strlen(letras); j++) {
            if (palabra[i] == letras[j]) {
                contar++;
                break;

            }
        }
    }
     printf("tiene %i letras\n",contar);
    printf("\n"); 
    return 0;
}

/*
C03) Pedir una frase y una vocal, eliminar la vocal ingresada de la frase.
 Ejemplo, frase: ballena azul
 vocal : a
 salida: b ll n z l

*/
char  leonSerieC03(char*palabra, char*vocal)
{
    int size= strlen(palabra);
  
    for (int i = 0; i < size; i++) {
            if (palabra[i] == vocal[0]) {
                palabra[i]=' ';
        }
    }
     printf("%s\n",palabra);
    return 0;
}

/*
C04) Pedir una frase y una letra, eliminar la letra ingresada de la frase.
 Ejemplo, frase: ballena azul
 letra : l
 salida: ba ena azu 
 */
char  leonSerieC04(char*palabra, char*letra)
{
    int size= strlen(palabra);
  
    for (int i = 0; i < size; i++) {
            if (palabra[i] == letra[0]) {
                palabra[i]=' ';
        }
    }
     printf("%s\n",palabra);
    return 0;
}

/*
C05) Pedir una frase y presentarla inverida con las vocales en mayusculas.
Ejemplo, frase: ballena
 salida: AnEllAb 
  */
char  leonSerieC05(char*palabra)
{
    char vocales[]="aeiou";
    char neword[100]="";
    int size= strlen(palabra);

    for (int i = 0; i < size; i++) {
        neword[i]=palabra[size-i-1];
    }
     for (int i = 0; i < 6; i++) {
        for (int s = 0; s < size; s++) {
            if (neword[s] == vocales[i]) {
                neword[s]=toupper(neword[s]);
            }
        }
     }

    printf("%s\n",neword);
    return 0;
}

    /*
    C06) Pedir una frase y presentarla inverida con las letras en mayusculas.
    Ejemplo, frase: ballena
    salida: aNeLLaB 

    */
    char  leonSerieC06(char*palabra)
    {
        char letras[]="bcdfghjklmnñpqrstvwxyz";
        int size= strlen(palabra);
        char neword[size];

        for (int i = 0; i < size; i++) {
        neword[i] = palabra[size - i - 1];
    }
        for (int i = 0; i < 24; i++) {
            for (int s = 0; s < size; s++) {
                    if (neword[s] == letras[i]) {
                        neword[s]=toupper(neword[s]);
                } 
            }
        }

        printf("%s\n",neword);
        return 0;
    }


/*
C07) Pedir una frase y presentarla en mayusculas y sin la J
 Ejemplo, frase: mujeres
 salida: MUERES 

  */
char  leonSerieC07(char*palabra)
{
    int size= strlen(palabra);
  
    for (int i = 0; i < size; i++) {
        if (palabra[i] == 'j') {
           for (int j = i; j < size; j++) {
                palabra[j] = palabra[j + 1];
        }
        size--;  
        i--; 
        }
        palabra[i]=toupper(palabra[i]);
    }
     printf("%s\n",palabra);
    return 0;
}

/*
C08) Anagramas de palabras.
 Se forman cuando se utilizan todas las letras de una palabra pero
 modificando el orden.
 Mostrar una palabra de un conjunto y solicita que ingrese el Anagramas de
esa palabra.
 Si falla a la tercera mostrar la respuesta
 Ejemplo, palabra : delira
 salida : lidera
 conjunto = {delira – lidera, Ballena: llenaba, Alondra – Ladrona, España –
apañes, Enrique – quieren}
 */

//para comparar si dos palabras son iguales
char compare(char*comp1, char*comp2)
{
  int len1=strlen(comp1);

for(int w=0; w<len1;w++)
{
 if(comp1[w] != comp2[w])
 {
return 1;
} 
  }
return 0;

}


int leonSerieC08(int nro)
{

char intento[30];
char par1[30];
char par2[30];


switch(nro)
{
  case 1: strcpy(par1,"lidera");
  strcpy(par2,"delira");
  break;
  case 2: strcpy(par1,"ballena");
  strcpy(par2,"llenaba");
  break;
  case 3: strcpy(par1,"alondra");
  strcpy(par2,"ladrona");
  break;
  case 4: strcpy(par1,"espana");
  strcpy(par2,"apanes");
  break;
  case 5: strcpy(par1,"enrique");
  strcpy(par2,"quieren");
  break;

}
    for (int i = 0; i < 3;i++) 
      {
        printf("Escribe el anagrama de %s: ", par1);

        scanf("%s",&intento);
int result=compare(par2, intento);

     if (result==0) {
            printf("la respuesta es correcta!!!\n");
       return 0;
     }else{
if (i==2){
  break;
}
           printf("Incorrecto, vuelve a intentarlo\n\n");
        }
    }
        printf("Incorrecto. La respuesta correcta es %s\n",par2);

    return 0;
}




/*
C09) Ingresa una frase y convertir una leta a mayusculas y otra a minisculas
 Ejemplo, frase : di mi nombre
 salida : Di Mi NoMbRe
*/
char  leonSerieC09(char*palabra)
{
    int size= strlen(palabra);
  
    for (int i = 0; i < size; i++) {
        if (i%2 == 0)
        {
            palabra[i]=toupper(palabra[i]);
        } else {
            palabra[i]=tolower(palabra[i]);
        }
    }
     printf("%s\n",palabra);
    return 0;
}
