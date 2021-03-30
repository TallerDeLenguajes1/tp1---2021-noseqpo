
#include <cstdio>
#include <iostream>

int cuadrado(int a){
    return a*a;
}

void cuadradoVoid(int &a){
    a=a*a;
}

void imprimir(int &a){
    std::cout<<"\nDireccion de la variable: \n"<<&a<<"\nContenido de la variable: \n"<< a;
}

void Invertir(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void orden(int &a, int &b){
    int temp=b;
    if (a>b){
        b=a;
        a=temp;
    }
}

int main()
{
    /* 
    std::cout << cuadrado(5); 
    */ // Para probar la funcion del punto a)
    
    /*
    int campo=3;
    cuadradoVoid(campo);
    std::cout << campo;
    */ //Para probar la funcion del punto b)
        
    /* 
    int variable=55368;
    int *var=&variable;
    // Contenido del puntero
    printf("\n\nEl contendido del puntero es %d \n",*var);
    // La direccion de memoria almacenada por el puntero
    printf("La direccion almacenada en el puntero es %p\n",var);
    // La direccion de memoria de la variable
    printf("La direccion de la variable es %p\n",&variable);
    // La direccion de memoria del puntero
    printf("La direccion del puntero es %p\n",&var);
    // Tamaño de la memoria utilizado por la variable
    printf("El tamaño de memoria utilizado por la variable es %d\n",sizeof(variable));

    imprimir(variable);
    */ // Reutilizamos el codigo del punto anterior para corroborar los resultados para el punto c)

    /*
    int uno=11111;
    int dos=22222;
    Invertir(uno,dos);
    std::cout << uno << "\n" << dos; 
    */ // Para probar la funcion invertir del punto d)

    /* 
    int chico=500;
    int grande=550;
    orden(chico,grande);
    std::cout << chico << "\n" << grande;
    */ // Codigo para porbar la funcion orden del punto e)

    // No entiendo el punto f)

    getchar();
    return 0;
}