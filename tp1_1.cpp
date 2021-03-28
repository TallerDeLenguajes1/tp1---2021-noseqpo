#include <cstdio>

int main(int argc, char const *argv[])
{
    int variable=55368;
    int *var=&variable;
    // Contenido del puntero
    printf("El contendido del puntero es %d \n",*var);
    // La direccion de memoria almacenada por el puntero
    printf("La direccion almacenada en el puntero es %p\n",var);
    // La direccion de memoria de la variable
    printf("La direccion de la variable es %p\n",&variable);
    // La direccion de memoria del puntero
    printf("La direccion del puntero es %p\n",&var);
    // Tamaño de la memoria utilizado por la variable
    printf("El tamaño de memoria utilizado por la variable es %d\n",sizeof(variable));
    getchar();
    return 0;
}
