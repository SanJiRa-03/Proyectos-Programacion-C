#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ejercicio3(){
    srand(time(NULL));
    int x = 15, y = 15;

    //Usamos rand para añadir valores aleatorios a las coordenadas.
    int x0 = rand() % 31; //x del objeto 1.
    int y0 = rand() % 31; //y del objeto 1.
    int x1 = rand() % 31; //x del objeto 2.
    int y1 = rand() % 31; //y del objeto 2.

    int x2, y2; //Estas variables son las auxiliares
    int cont = 0;
    int dis1 = 0;
    int dis2 = 0;
    char d = 'D', n = 'N', a = 'A', w = 'W', e = 'E', c = 'C', s = 'S', b = 'B', g = '-';

    //calculamos el valor absoluto, para que no nos salgan valores en negativo, para calcular las distancias que
    //hay entre el robot y los objetos.
    dis1 = abs(x - x0) + abs(y - y0);
    dis2 = abs(x - x1) + abs(y - y1);

    //inidcamos la posición en la que se encuentran los objetos y sus distancias.
    printf("Posicion Objeto1. y:%d, x:%d\n", y0, x0);
    printf("Posicion Objeto2. y:%d, x:%d\n", y1, x1);
    printf("Distancia a Objeto 1: %d\n", dis1);
    printf("Distancia a Objeto 2: %d\n", dis2);

    //Comparamos las distancias con las variables aux. Si la dis1 es mayor que la dis2, el robot deberá ir a la dis2, y
    //por lo tanto al objeto 2. Las variables aux. adquieren el valor del objeto que esté más cerca, es por eso que las
    //igualamos.
    if(dis1 > dis2){
        printf("Recoger primero objeto 2.\n");
        x2 = x1;
        y2 = y1;
    }else{
        printf("Recoger primero objeto 1.\n");
        x2 = x0;
        y2 = y0;
    }

    printf("Mov\tY\t\tX\n");
    printf("=======================================\n");
    printf("%c\t%2d\t\t%2d\n", g, y, x);

    //Realizamos todas las combinaciones posibles para ver hacia qué dirección se mueve el robot.
    do{
        if (x > x2 && y > y2)       { x--; y--; printf("%c\t%2d\t\t%2d\n", c, y, x); }
        else if(x > x2 && y < y2)   { x--; y++; printf("%c\t%2d\t\t%2d\n", d, y, x); }
        else if(y < y2 && x < x2)   { x++; y++; printf("%c\t%2d\t\t%2d\n", a, y, x); }
        else if(x < x2 && y > y2)   { x++; y--; printf("%c\t%2d\t\t%2d\n", b, y, x); }
        else if(x > x2 && y == y2)  { x--;      printf("%c\t%2d\t\t%2d\n", w, y, x); }
        else if(x == x2 && y > y2)  { y--;      printf("%c\t%2d\t\t%2d\n", s, y, x); }
        else if(y == y && x < x2)   { x++;      printf("%c\t%2d\t\t%2d\n", e, y, x); }
        else if(x == x && y < y2)   { y++;      printf("%c\t%2d\t\t%2d\n", n, y, x); }
        else if(x == x2 && y == y2){
            cont++; //Una vez que las x e y son iguales, quiere decir que el robot ha alcanzado uno de los dos objetos, por lo
            //tanto la x e y del robot estará en la misma posición del objeto que acaba de recoger y se repetirá el bucle para
            //el segundo objeto.
            x = x2;
            y = y2;

            //Le indicamos al programa que si la variable auxiliar está en la posición del objeto 2, deberá ir entonces a
            //por el objeto 1, y viceversa.
            if(x2 == x1 && y2 == y1){
                x2 = x0;
                y2 = y0;
            }
            else if (x2 == x0 && y2 == y0){
                x2 = x1;
                y2 = y1;
            }

            if (cont < 2)
                printf("Cambiando objeto.\n");
        }
    }while(cont < 2);

    //Si el contador llega a 2 el bucle para.
    if(cont == 2){
        printf("Todos los objetos han sido recogidos.\n");
    }
}

int main() {
    ejercicio3();
    return 0;
}
