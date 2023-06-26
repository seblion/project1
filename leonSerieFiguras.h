/*
*POLIRETOS-SERIE FIGURAS
*Nombre: Sebastian Leon
*Fecha: 11/06/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#define DELAY 5000

/*
F1: * * * * *
    *       *
    *       *
    *       *
    * * * * *
*/
     
int  leonSerieF1(int nro)
{
    int a =0, b=1, c=1;
    for (int i = 0; i < nro; i++)
    {
        for(int w = 0; w < nro; w++)
        {
            if(w==0 || w==nro-1 || i==0 ||i==nro-1)
            {
                printf (" *");
            } else {  
                printf ("  ");
            }
            usleep(DELAY);
        }
        printf("\n");
    }
    printf("\n"); 
    return 0;
}

/*
F2: * + * + *
    +       +
    *       *
    +       +
    * + * + *

*/
int  leonSerieF2(int nro)
{
    for (int i = 0; i < nro; i++)
    {
        for(int w = 0; w < nro; w++)
        {
            if(w==0 || w==nro-1 || i==0 ||i==nro-1)
            {
                if((i+w)%2==0 ){
                    printf (" *");
                }else{
                    printf (" +");
                }
            } else {  
                printf ("  ");
            }
            usleep(DELAY);
        }
        printf("\n");
    }
    printf("\n"); 
    return 0;
}

/*
F3: 
 *
 * *
 * * *
 * * * *
 * * * * * 
*/
int  leonSerieF3(int nro)
{
    for (int i = 1; i <= nro; i++)
    {
        for(int w = 0; w < nro; w++)
        {
            if(w<i)
            {
                printf (" *");
            } else {  
                printf ("  ");
            }
            usleep(DELAY);
        }
        printf("\n");
    }
    printf("\n"); 
    return 0;
}

/*
F4:         *
          * *
        * * *
      * * * *
    * * * * *
*/
int  leonSerieF4(int nro)
{
    for (int i = 1; i <= nro+1; i++)
    {
        for(int w = 0; w < nro; w++)
        {
            if(nro-i<w)
            {
                printf (" *");
            } else {  
                printf ("  ");
            }
            usleep(DELAY);
        }
        printf("\n");
    }
    printf("\n"); 
    return 0;
}

/*
F5:
 *********
  *******
   *****
    ***
     *
     
*/
int  leonSerieF5(int nro)
{
    for (int i = 0; i < nro; i++)
    {
        for(int w = 0; w < nro*2-i; w++)
        {
            if(w> i || (2*nro-w>i)&&(w>nro))
            {
                printf ("*");
            } else {  
                printf (" ");
            }
            usleep(DELAY);
        }
        printf("\n");
    }
    printf("\n"); 
    return 0;
}

/*
F6:
     *
    ***
   *****
  *******
 *********
     
*/
int  leonSerieF6(int nro)
{
    for (int i = 0; i < nro; i++)
    {
        for(int w = 0; w < nro*2+1; w++)
        {
            if(((w>nro-i)&&(w<nro+1))||((w<=nro+1+i)&&(w>=nro+1)))
            {
                printf ("*");
            } else {  
                printf (" ");
            }
            usleep(DELAY);
        }
        printf("\n");
    }
    printf("\n"); 
    return 0;
}

/*
F7:
 ___
    |___
        |___
            |___
                |___
*/
int  leonSerieF7(int nro)
{
    printf("___\n");
    for (int i = 0; i < nro; i++)
    {
        printf("   ");
        for(int w = 0; w < i; w++)
        {
            printf("    "); 
            usleep(DELAY);
        }

        printf("|___\n");
    }
    return 0;
}

/*
F8:
                 ___
             ___|
         ___|
     ___|
 ___|

*/
int  leonSerieF8(int nro)
{
    for(int s = 0; s <nro+1; s++)
        {
            printf("    "); 
        }
    printf("___\n");

    for (int i = 0; i < nro; i++)
    {
        for(int w = 0; w <nro-i; w++)
        {
            printf("    "); 
            usleep(DELAY);
        }
        printf("___|\n");
        
    }
    return 0;
}

/*
F9:
                 ____
             ___|    |___
        ___|             |___
    ___|                     |___
___|                             |___

*/
int  leonSerieF9(int nro)
{
    for(int s = 0; s <nro+1; s++)
        {
            printf("    "); 
        }
    printf("____\n");
    
    for (int i = 0; i < nro; i++)
    {
        for(int w = 0; w <nro-i; w++)
        {
            printf("    "); 
            usleep(DELAY);
        }
        printf("___|");
        
        for(int w = 0; w < i*2+1; w++)
        {
            printf("    "); 
            usleep(DELAY);
        }

        printf("|___\n");
    }
    return 0;
}

/*
F10:
 _+_
    |_-_
        |_+_
            |_-_
                |_+_
                    |
*/
int  leonSerieF10(int nro)
{
    printf("_+_\n");
    for (int i = 0; i < nro-1; i++)
    {
        printf("   ");
        for(int w = 0; w < i; w++)
        {
            printf("    "); 
            usleep(DELAY);
        }
        printf((i%2==0)?"|_-_\n":"|_+_\n");
    }
       for(int w = 0; w < nro-1; w++)
        {
            printf("    "); 
            usleep(DELAY);
        }
        printf("   |");
    printf("\n");
    return 0;
}

/*
F11:
 | _
    | _ _
         | _ _ _
                | _ _ _ _
                         | _ _ _ _ _
*/
int  leonSerieF11(int nro)
{
    for (int i = 0; i < nro; i++)
    {
        printf("\t");
        for(int w = 0; w < i*i; w++)
        {
            printf(" "); 
        }
        for(int w = 0; w < i*3; w++)
        {
            printf(" "); 
        }
        printf("|");
        for(int s = 0; s <= i; s++)
        {
            printf(" _"); 
            usleep(DELAY);
        }
        printf("\n");

    }
     
    return 0;
}

/*
F12:
 ...
 123456789
 12345678
 1234567
 123456
 12345
 1234
 123
 12
 */
int  leonSerieF12(int nro)
{
    for (int i = 0; i < nro; i++)
    {
        for(int w = 1; w <= nro-i; w++)
        {
            printf ("%i",w);
            usleep(DELAY);
        }
        printf("\n");
    }
    return 0;
}

/*
F13:
 1
 12
 123
 1234
 12345
 123456
 1234567
 12345678
 123456789
*/
int  leonSerieF13(int nro)
{
    for (int i = 0; i <= nro; i++)
    {
        for(int w = 1; w <= i; w++)
        {
            printf ("%i",w);
            usleep(DELAY);
        }
        printf("\n");
    }
    return 0;
}

/*   
F14:
          1
        1   1
      1   2   1
     1  3    3   1
   1  4    6   4   1
 1  5   10  10   5   1
*/
int coeficienteBinomial(int f, int c) 
{
    if (c == 0 || c == f)
        return 1;
    else
        return coeficienteBinomial(f - 1, c - 1) + coeficienteBinomial(f - 1, c);
}

int leonSerieF14(int numFilas) 
{
    int trianguloPascal[numFilas][2 * numFilas - 1]; // Array 

    for (int i = 0; i < numFilas; i++) {
        int espacios = numFilas - i - 1; 

        for (int j = 0; j < espacios; j++) {
            printf(" "); 
            usleep(DELAY);
        }

        for (int j = 0; j <= i; j++) {
            trianguloPascal[i][numFilas - 1 + j] = coeficienteBinomial(i, j);
            printf("%d ", trianguloPascal[i][numFilas - 1 + j]);
            usleep(DELAY);
        }

        printf("\n");
    }
}

/*   
F15:
1
1   1
1   2   1
1   3   3   1
1   4   6   4   1
1   5   10  10   5   1
*/

// Función para imprimir el Triángulo de Pascal
int leonSerieF15(int numFila) 
{
    int trianguloPascal[numFila][numFila]; 

    for (int i = 0; i < numFila; i++) {
        for (int j = 0; j <= i; j++) {
            trianguloPascal[i][j] = coeficienteBinomial(i, j);
            printf("%d ", trianguloPascal[i][j]);
            usleep(DELAY);
        }
        printf("\n");
    }
    return 0;
}



/*
F16:
 +                +
    -         -
         +
    -         -
 +                +
 */
int leonSerieF16(int nro)
{
    for (int i = 0; i < nro; i++)
    {
        for(int w = 0; w < nro; w++)
        {
            if(w==i || w==nro-1-i)
            {
                // if(w==0 || w==nro-1 || w==nro/2)
                if(i%2==0)  
                {
                    printf ("-   ");
                } else {
                    printf("+   ");
                }
            } else {  
                printf ("    ");
            }
            usleep(DELAY);
        }
        printf("\n");
    }
    printf("\n"); 
    return 0; 
}

/*
F17:
 1                1
    0         0
         1
    0         0
 1                1
 */
int leonSerieF17(int nro)
{
    for (int i = 0; i < nro; i++)
    {
        for(int w = 0; w < nro; w++)
        {
            if(w==i || w==nro-1-i)
            {
                // if(w==i || w==nro-1-i)
                if(i%2==0)
                {
                    printf ("1   ");
                } else {
                    printf("0   ");
                }
            } else {  
                printf ("    ");
            }
            usleep(DELAY);
        }
        printf("\n");
    }
    printf("\n"); 
    return 0; 
}

/*
F18:
 2
 1 2
 1 3 2
 1 4 5 2
 1 5 9 7 2
 1 6 14 16 9 2
 ....
 */
int leonSerieF18(int filas) 
{
    int triangulo[filas][filas]; 
    for (int i = 0; i < filas; i++) {
            for (int j = 0; j <= i; j++) {
                if ( j == i) {
                    triangulo[i][j] = 2;
                } else if (j == 0 ){
                    triangulo[i][j] = 1;
                } else {
                    triangulo[i][j] = triangulo[i - 1][j - 1] + triangulo[i - 1][j];
                }
                printf("%d ", triangulo[i][j]);
                usleep(DELAY);
            }
            printf("\n");
            }
        
    return 0;
}

/*
F19:
 *
 + *
 + 3 *
 + 4 5 *
 + 5 9 7 *
 + 6 14 16 9 *
 ....
 */
int leonSerieF19(int filas) 
{
    int triangulo[filas][filas]; 
    for (int i = 0; i < filas; i++) {
            for (int j = 0; j <= i; j++) {
                if ( j == i) {
                    triangulo[i][j] = 2;
                } else if (j == 0 ){
                    triangulo[i][j] = 1;
                } else {
                    triangulo[i][j] = triangulo[i - 1][j - 1] + triangulo[i - 1][j];
                }
            if ( j == i) {
                    printf("*  ");
                } else if (j == 0 ){
                    printf("+  ");
                } else {
                    printf("%d  ", triangulo[i][j]);
                }
                usleep(DELAY);
            }
            printf("\n");
            }
        
    return 0;
}

void leonSerieFiguras(int num)
{
        printf("\nF1: \n\n");        
        leonSerieF1(num);
        printf("\nF2: \n\n");        
        leonSerieF2(num);
        printf("\nF3: \n\n");
        leonSerieF3(num);
        printf("\nF4: \n\n");
        leonSerieF4(num);
        printf("\nF5: \n\n");
        leonSerieF5(num);
        printf("\nF6: \n\n");
        leonSerieF6(num);
        printf("\nF7: \n\n");
        leonSerieF7(num);
        printf("\nF8: \n\n");
        leonSerieF8(num);
        printf("\nF9: \n\n");
        leonSerieF9(num);
        printf("\nF10: \n\n");
        leonSerieF10(num);
        printf("\nF11: \n\n");
        leonSerieF11(num);
        printf("\nF12: \n\n");
        leonSerieF12(num);
        printf("\nF13: \n\n");
        leonSerieF13(num);
        printf("\nF14: \n\n");
        leonSerieF14(num);
        printf("\nF15: \n\n");
        leonSerieF15(num);
        printf("\nF16: \n\n");
        leonSerieF16(num);
        printf("\nF17: \n\n");
        leonSerieF17(num);
        printf("\nF18: \n\n");  
        leonSerieF18(num);
        printf("\nF19: \n\n");
        leonSerieF19(num);
}