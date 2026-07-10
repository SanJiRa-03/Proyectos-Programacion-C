#include <stdio.h>
#include <string.h>
#include <stdlib.h> //Para poder usar system("cls")

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
            printf("=========================================\n");
            printf("          GESTION DE DEPORTISTAS         \n");
            printf("=========================================\n");
            printf("Introduzca una opcion:\n");
            printf("1.- Anadir a un deportista.\n");
            printf("2.- Eliminar a un deportista.\n");
            printf("3.- Buscar a un deportista.\n");
            printf("4.- Mostrar la informacion de la lista.\n");
            printf("5.- Guardar la informacion en fichero.\n");
            printf("6.- Salir.\n");
            printf("-----------------------------------------\n");
            printf("Opcion: ");
            scanf("%d", &op);

            switch(op)
            {
                //CASO 1:
                case 1:
                    system("cls"); // Limpia el menú para introducir datos
                    printf(">>> AÑADIR NUEVO DEPORTISTA <<<\n\n");
                    for(int i=0; i<=0; i++)
                    {
                        printf("Inserte el nombre del deportista: ");
                        scanf("%s", deportista[i].nombre);
                        printf("Inserte la edad del deportista: ");
                        scanf("%d", &deportista[i].edad);
                        printf("Inserte la altura del deportista (m): ");
                        scanf("%f", &deportista[i].altura);
                        printf("Inserte el peso del deportista (kg): ");
                        scanf("%f", &deportista[i].peso);
                    }
                    system("cls");
                    printf("[OK] Deportista añadido correctamente.\n\n");
                break;

                //CASO 2:
                case 2:
                    system("cls");
                    printf(">>> ELIMINAR DEPORTISTA <<<\n\n");
                    {
                        char nombre[30];
                        printf("Inserte el nombre del deportista que desee eliminar: ");
                        scanf("%s", nombre);

                        printf("\n[OK] Deportista eliminado con exito.\n\n");
                    }
                break;

                //CASO 3:
                case 3:
                    system("cls");
                    printf(">>> BUSCAR DEPORTISTA <<<\n\n");
                    {
                      int cont = 0;
                      char nombre[30];
                        printf("Inserte el nombre del deportista que desee buscar: ");
                        scanf("%s", nombre);
                        printf("\n--- Resultado de la busqueda ---\n");
                        for(int i=0; i<=0; i++)
                        {
                           if(strcmp(nombre, deportista[i].nombre) == 0)
                            {
                                printf("Nombre: %s\n", deportista[i].nombre);
                                printf("Edad: %d anyos\n", deportista[i].edad);
                                printf("Altura: %.2f m\n", deportista[i].altura);
                                printf("Peso: %.2f kg\n", deportista[i].peso);
                                cont++;
                            }
                        }
                        if(cont == 0)
                        {
                            printf("No existe ningun deportista con ese nombre.\n");
                        }
                        printf("---------------------------------\n\n");
                    }
                break;

                //CASO 4:
                case 4:
                    system("cls");
                    printf(">>> LISTA DE DEPORTISTAS REGISTRADOS <<<\n\n");
                    {
                       int cont2 = 0;
                        for(int i=0; i<=0; i++)
                        {
                            printf("Nombre: %s\n", deportista[i].nombre);
                            printf("Edad: %d anyos\n", deportista[i].edad);
                            printf("Altura: %.2f m\n", deportista[i].altura);
                            printf("Peso: %.2f kg\n", deportista[i].peso);
                            printf("---------------------------------\n");
                            cont2++;
                        }
                        if(cont2 == 0)
                        {
                            printf("No hay ningun deportista guardado en memoria.\n\n");
                        }
                        printf("\n");
                    }
                break;

                //CASO 5:
                case 5:
                    system("cls");
                    {
                        FILE *f;
                        f = fopen("ListaDeportistas.txt", "a");

                        if(f == NULL)
                        {
                            printf("[ERROR] Se ha producido un error al abrir el archivo.\n\n");
                        }
                        else
                        {
                            for(int i=0; i<=0; i++)
                            {
                                fprintf(f, "Nombre: %s\n", deportista[i].nombre);
                                fprintf(f, "Edad: %d\n", deportista[i].edad);
                                fprintf(f, "Altura: %.2f\n", deportista[i].altura);
                                fprintf(f, "Peso: %.2f\n", deportista[i].peso);
                                fprintf(f, "---------------------------------\n");
                            }
                            fclose(f);
                            printf("[OK] Informacion volcada y guardada con exito en ListaDeportistas.txt.\n\n");
                        }
                    }
                break;

                //CASO 6:
                case 6:
                    system("cls");
                    printf("Has decidido salir del menu. Hasta pronto!\n\n");
                    fin = 1;
                break;
            }

        if(op != 1 && op != 2 && op!= 3 && op != 4 && op != 5 && op != 6)
        {
            system("cls");
            printf("[!] Seleccione una opcion correcta del menu.\n\n");
        }
    }
    return 0;
}
