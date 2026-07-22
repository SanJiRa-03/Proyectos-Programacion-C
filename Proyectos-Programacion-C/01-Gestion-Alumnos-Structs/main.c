#include <stdio.h>
#include <locale.h>

struct alumno
{
    char genero;
    int edad;
    float nota_algebra, nota_filosofia, nota_arte, nota_biologia;
} alumnos[30];

int AnalisisSeccion(int i, char gen, int ed, float alg, float filo, float art, float biol);

int main()
{
    setlocale(LC_ALL, "");
    int n = 0;

    do
    {
        printf("Introduzca el número de alumnos de la sección:\n");
        scanf("%d", &n);
        if (n <= 0 || n > 30)
        {
            printf("Cantidad no válida (debe ser entre 1 y 30).\n");
        }
    } while (n <= 0 || n > 30);

    for (int i = 0; i < n; i++)
    {
        printf("\n| ALUMNO |\n");
        printf("Alumno %d:\n", i + 1);
        printf("ID: %d\n", i + 1);

        do
        {
            printf("Inserte el género del alumno (H o M):\n");
            scanf(" %c", &alumnos[i].genero);
            if (alumnos[i].genero != 'H' && alumnos[i].genero != 'M')
            {
                printf("Inserte H o M para indicar el género (en mayúsculas).\n");
            }
        } while (alumnos[i].genero != 'H' && alumnos[i].genero != 'M');

        do
        {
            printf("Inserte la edad del alumno:\n");
            scanf("%d", &alumnos[i].edad);
            if (alumnos[i].edad < 18)
            {
                printf("Edad no válida, el alumno debe ser mayor de edad.\n");
            }
        } while (alumnos[i].edad < 18);

        do
        {
            printf("Inserte la nota en Álgebra [0,10]:\n");
            scanf("%f", &alumnos[i].nota_algebra);
            if (alumnos[i].nota_algebra < 0 || alumnos[i].nota_algebra > 10)
            {
                printf("Nota no válida.\n");
            }
        } while (alumnos[i].nota_algebra < 0 || alumnos[i].nota_algebra > 10);

        do
        {
            printf("Inserte la nota en Filosofía [0,10]:\n");
            scanf("%f", &alumnos[i].nota_filosofia);
            if (alumnos[i].nota_filosofia < 0 || alumnos[i].nota_filosofia > 10)
            {
                printf("Nota no válida.\n");
            }
        } while (alumnos[i].nota_filosofia < 0 || alumnos[i].nota_filosofia > 10);

        do
        {
            printf("Inserte la nota en Arte [0,10]:\n");
            scanf("%f", &alumnos[i].nota_arte);
            if (alumnos[i].nota_arte < 0 || alumnos[i].nota_arte > 10)
            {
                printf("Nota no válida.\n");
            }
        } while (alumnos[i].nota_arte < 0 || alumnos[i].nota_arte > 10);

        do
        {
            printf("Inserte la nota en Biología [0,10]:\n");
            scanf("%f", &alumnos[i].nota_biologia);
            if (alumnos[i].nota_biologia < 0 || alumnos[i].nota_biologia > 10)
            {
                printf("Nota no válida.\n");
            }
        } while (alumnos[i].nota_biologia < 0 || alumnos[i].nota_biologia > 10);
    }

    printf("\n--- RESULTADOS DE LA SECCIÓN ---\n");
    for (int i = 0; i < n; i++)
    {
        AnalisisSeccion(i, alumnos[i].genero, alumnos[i].edad, alumnos[i].nota_algebra,
                        alumnos[i].nota_filosofia, alumnos[i].nota_arte, alumnos[i].nota_biologia);
    }

    return 0;
}

int AnalisisSeccion(int i, char gen, int ed, float alg, float filo, float art, float biol)
{
    printf("-------------------------\n");
    printf("ID: %d\n", i + 1);
    printf("Género: %c\n", gen);
    printf("Edad: %d\n", ed);
    printf("Nota en Álgebra: %.2f\n", alg);
    printf("Nota en Filosofía: %.2f\n", filo);
    printf("Nota en Arte: %.2f\n", art);
    printf("Nota en Biología: %.2f\n", biol);
    printf("-------------------------\n");

    return 0;
}
