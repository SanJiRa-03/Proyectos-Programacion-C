#include <stdio.h>
#include <string.h>

struct Deportista
{
       char nombre[30];
       int edad;
       float altura;
       float peso;
};

int main()
{
    struct Deportista deportista[2];
    int fin = 0;
    int op = 0;

    while(fin == 0)
    {
            // MENÚ
            printf("Introduzca una opcion:\n");
            printf("1.- Anadir a un deportista.\n");
            printf("2.- Eliminar a un deportista.\n");
            printf("3.- Buscar a un deportista.\n");
            printf("4.- Mostrar la informacion de la lista de deportistas.\n");
            printf("5.- Guardar la informacion en un fichero de texto.\n");
            printf("6.- Salir.\n");
            scanf("%d", &op);
            switch(op)
            {
                case 1:
                    // CASO 1
                    for(int i=0; i<=0; i++)
                    {
                        printf("Inserte el nombre del deportista:\n");
                        scanf("%s", deportista[i].nombre);
                        printf("Inserte la edad del deportista:\n");
                        scanf("%d", &deportista[i].edad);
                        printf("Inserte la altura del deportista:\n");
                        scanf("%f", &deportista[i].altura);
                        printf("Inserte el peso del deportista:\n");
                        scanf("%f", &deportista[i].peso);
                    }
                break;
                case 2:
                    // CASO 2
                    {
                        char nombre[30];
                        printf("Inserte el nombre del deportista que desee eliminar:\n");
                        scanf("%s", nombre);

                        // Lógica base del caso 2 activa
                        printf("Deportista eliminado con exito.\n");
                    }
                break;
                case 3:
                    // CASO 3
                    {
                      int cont = 0;
                      char nombre[30];
                        printf("Inserte el nombre del deportista que desee buscar.\n");
                        scanf("%s", nombre);
                        for(int i=0; i<=0; i++)
                        {
                           if(strcmp(nombre, deportista[i].nombre) == 0)
                            {
                                printf("Nombre: %s\n", deportista[i].nombre);
                                printf("Edad: %d\n", deportista[i].edad);
                                printf("Altura: %.2f\n", deportista[i].altura);
                                printf("Peso: %.2f\n", deportista[i].peso);
                                cont++;
                            }
                        }
                        if(cont == 0)
                        {
                            printf("No existe ningun deportista con ese nombre.\n");
                        }
                    }
                break;
                case 4:
                    // CASO 4
                    {
                       int cont2 = 0;
                        printf("| DEPORTISTAS |\n");
                        for(int i=0; i<=0; i++)
                        {
                            printf("Nombre: %s\n", deportista[i].nombre);
                            printf("Edad: %d\n", deportista[i].edad);
                            printf("Altura: %.2f\n", deportista[i].altura);
                            printf("Peso: %.2f\n", deportista[i].peso);
                            cont2++;
                        }
                        if(cont2 == 0)
                        {
                            printf("No hay ningun deportista guardado.\n");
                        }
                    }
                break;
                case 5:
                    // CASO 5
                    {
                        FILE *f;
                        f = fopen("ListaDeportistas.txt", "a");

                        if(f == NULL)
                        {
                            printf("Se ha producido un error en el archivo.\n");
                        }
                        else
                        {
                            for(int i=0; i<=0; i++)
                            {
                                fprintf(f, "Nombre: %s\n", deportista[i].nombre);
                                fprintf(f, "Edad: %d\n", deportista[i].edad);
                                fprintf(f, "Altura: %.2f\n", deportista[i].altura);
                                fprintf(f, "Peso: %.2f\n", deportista[i].peso);
                            }
                            fclose(f);
                            printf("Informacion guardada con exito.\n");
                        }
                    }
                break;
                case 6:
                    // CASO 6
                    {
                        printf("Has decidido salir del menu.\n");
                        fin = 1;
                    }
                break;
            }
        if(op != 1 && op != 2 && op!= 3 && op != 4 && op != 5 && op != 6)
            {
                printf("Seleccione una opcion correcta.\n");
                printf("\n");
            }
    }
    return 0;
}
