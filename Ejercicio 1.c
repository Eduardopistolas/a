*******************************************************************************/

#include <stdio.h>
// Practica 3 
// factorial de un numero 

int main()

{
    int numero, contador, factorial;

    // Módulo de entrada
    do {
        printf("Ingrese un número entero no negativo: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("El número debe ser no negativo. Intente de nuevo.\n");
        }
    } while (numero < 0);

    // Módulo de procesamiento
    contador = 2;
    factorial = 1;

    while (contador <= numero) {
        factorial *= contador;
        contador++;
    }

    // Módulo de salida
    printf("El factorial de %d es: %d\n", numero, factorial);

    return 0;
}
