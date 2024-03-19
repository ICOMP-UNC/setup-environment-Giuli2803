#include <stdio.h> //Libreria estandar (busca en el system path)
//#include "../include/greetings.h" // Libreria creada (referenciada por PATH)
#include <greetings.h>
#include "shared.h"
#include "static.h"

int main(int argc, char* argv[])
{
    printf("Hello, OS II.\n");
    greetings();
    printf("Calling shared lib from main program. I get '%ld'\n", shared_lib_function("Hello, OS II"));
    printf("Calling static lib from main program. I get '%ld'\n", static_lib_function("Bye, OS II"));
    return 0;
}