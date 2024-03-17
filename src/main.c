#include <stdio.h> //Libreria estandar (busca en el system path)
//#include "../include/greetings.h" // Libreria creada (referenciada por PATH)
#include <greetings.h>

int main(int argc, char* argv[])
{
    printf("Hello, OS II.\n");
    greetings();
    return 0;
}
