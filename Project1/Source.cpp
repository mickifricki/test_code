#include <stdio.h>
int main(int argc, char** argv) //argc nos dice cuantos argumentos tenemos y argv nos lo guarda en un puntero. char** argv = char argv[][]
{
	char c[10] = "hola"; //en el fondo esto es un puntero, c es la direccion del primero de los 10 caracteres
	printf("%s", &c[1]);
	printf("%i", argc);
	getchar();
}