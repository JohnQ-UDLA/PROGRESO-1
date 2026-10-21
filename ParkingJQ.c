#include<stdio.h>
#include<string.h>


//Definición de constantes y variables globales

#define espacios 5  //Son los espacios que existen en el parqueadero
#define tarifa 1.50 //Es la tarífa de parquear una hora o menos de una hora
#define LimitePagos 100 //Es el límite de pagos que se pueden realizar

char placas[espacios][20];  //Areglo para registrar las placas
int ocupado[espacios];  //  0 = libre, 1 = ocupado
int minutosIngreso[espacios];  // hora de ingreso en minutos

// Opcion 1 → Mostrar espacios disponibles

void mostrarEspaciosDisponibles() 
{
    int i;


    printf("Espacio\tEstado\tPlaca\n");
    for(i = 0; i < espacios; i = i + 1)
    {

        if (ocupado[i] == 1)
        {
            printf("%d\tOcupado\t\t%s\n", i, placas[i]);




        } else {

            printf("%d\tLibre\t\t-\n", i);


        }


    }






}


// Opcion 2 → Registrar el ingreso de los vehículos

void ingresoVehiculos()
{

    char placas[20];
    int espacio;
    int horas, minutos;


    printf("Placa: \n");
    scanf("%19s", placa);

    printf("Espacio (0 - 4): \n");
    while (scanf("%d", &espacio) != 1)
    {




    }




}




int main()   //Main para menú y llamado de funciones
 {

    int opcion; // varibale para el menu
    int otra; //variable para repetir el menú


    do {

        printf("\n--------Seleccione una opción---------\n");
        printf("1. Mostrar espacios disponibles\n");
        printf("2. Registrar ingreso de vehiculo\n");
        printf("3. Registrar salida de vehiculo\n");
        printf("4. Mostrar pagos\n");
        printf("5. Elegir otra opción\n");
        printf("6. Salir\n");
        printf(">> ");
        
        scanf("%d", &opcion);  // leer la opción que ingresa el usuario

        switch (opcion)
        {

            case 1:
            
                mostrarEspaciosDisponibles();
                break;

            case 2:
                //ingresoVehiculos();
                break;
            case 3:
                printf("Funcionalidad no disponible aún \n");
                break;
            case 4:
                printf("Funcionalidad no disponible aún \n");
                break;
            case 5:
                printf("Ingrese la opción que ahora desea realizar: \n");
                scanf("%d", &opcion);
                break;
            case 6:
                printf("Saliendo del programa....\n");
                break;
            default:
                printf("OPCIÓN NO VALIDA\n");


        }

        printf("Desea realizar otra operación? (1=Si, 2=No): \n");
        scanf("%d", &otra);



    } while (opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4)







}