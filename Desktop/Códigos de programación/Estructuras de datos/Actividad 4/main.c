#include <stdio.h>
#include <stdlib.h>


int main()
{
    char opc,cadena[50];
    int veces;
    do
    {
        system("CLS");
        fflush(stdin);
        printf("1. Capturar enteros \n");
        printf("2. Mostrar Cadena n veces \n");
        printf("3. Agregar Personaje \n");
        printf("4. Mostrar Personaje \n");
        printf("0. salir \n");
        scanf("%c",&opc);
        fflush(stdin);

        switch (opc)
        {
        case '1':
        capturar();
            break;
        case '2':
        printf("Inserte una cadena de caracteres \n");
        fgets(cadena,sizeof(cadena),stdin);
        fflush(stdin);
        printf("Cuantas veces \n");
        scanf("%i",&veces);
        mostrar(veces,cadena);
        break;

        case '3':
        capturarp();
        break;
        case '4':
        mostrarp();
        break;
        
        }
    } while (opc!= '0');
    
    return 0;
}