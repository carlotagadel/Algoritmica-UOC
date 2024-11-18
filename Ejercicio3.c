#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

int main() {
    int aleatorio, num = 0, usuario, uno = 171, dos = 171, tres = 171, cuatro = 171, cinco = 171, uno_u = 0, dos_u = 0, tres_u = 0, cuatro_u = 0, cinco_u = 0;
    bool uno_b = false, dos_b = false, tres_b = false, cuatro_b = false, cinco_b = false, premio = false;

    //Generamos numero aleatorio entre 0 y 9

    srand(time(NULL));
    aleatorio = rand() % 10;

    //Generamos los 5 dígitos

    while (num < 5) {
        printf("%d\n", aleatorio);
        Sleep(100);
        num++;
        system("cls");

        //Almacenamos los dígitos en variables

        if (num == 1) uno = aleatorio;
        if (num == 2) dos = aleatorio;
        if (num == 3) tres = aleatorio;
        if (num == 4) cuatro = aleatorio;
        if (num == 5) cinco = aleatorio;

        //Printamos como char para que aparezca el carácter 171

        printf("*************\n");
        printf("* %d %c %c %c %c *\n", uno, dos + 48, tres + 48, cuatro + 48, cinco + 48);
        printf("*************\n");

        //generamos otro número aleatorio entre 0 y 9 hasta que lleguemos a los 5

        aleatorio = rand() % 10;
    }

    //Preguntamos al usuario que número ha jugado

    printf("Que numero has jugado?\n");
    scanf_s("%d", &usuario);

    //Extraemos los dígitos del número introducido por el usuario

    uno_u = (usuario / 10000) % 10;
    dos_u = (usuario / 1000) % 10;
    tres_u = (usuario / 100) % 10;
    cuatro_u = (usuario / 10) % 10;
    cinco_u = usuario % 10;

    //Desvelamos los números acertados

    printf("*************\n");
    printf("* %c %c %c %c %c *\n", uno_u + 48, dos_u + 48, tres_u + 48, cuatro_u + 48, cinco_u + 48);
    printf("*************\n");
    printf("*************\n");

    printf("* %c %c %c %c %c *\n", uno_u, dos_u, tres_u, cuatro_u, cinco_u);
    printf("*************\n");

    //Vamos a mirar ahora que premios tienes
    
    //Iniciaremos en este paso los booleanos para cada numero
    if (uno == uno_u) {
        uno_b = true;
    }

    if (dos == dos_u) {
        dos_b = true;
    }

    if (tres == tres_u) {
        tres_b = true;
    }

    if (cuatro == cuatro_u) {
        cuatro_b = true;
    }

    if (cinco == cinco_u) {
        cinco_b = true;
    }

    //los 5 números 1000000 euros

    if (uno_b && dos_b && tres_b && cuatro_b && cinco_b) {
        printf("Has acertado los 5 numeros. Has ganado 1000000 euros!!\n");
        premio = true;
    }
    //los 4 últimos 10000 euros
    else if (dos_b && tres_b && cuatro_b && cinco_b) {
        printf("Has acertado los 4 ultimos numeros. Has ganado 10000 euros!!\n");
        premio = true;
    }
    //los 3 últimos 1000 euros
    else if (tres_b && cuatro_b && cinco_b) {
        printf("Has acertado los 3 ultimos numeros. Has ganado 1000 euros!!\n");
        premio = true;
    }
    //los 2 últimos 100 euros
    else if (cuatro_b && cinco_b) {
        printf("Has acertado los 2 ultimos numeros. Has ganado 100 euros!!\n");
        premio = true;
    }
    //el último o el primero, o ambos, 100 euros
    else if (uno_b || cinco_b) {
        printf("Has acertado el primero o el ultimo. Has ganado 10 euros!!\n");
        premio = true;
    }

    if (!premio) {
        printf("Lo sentimos, no has acertado ningun numero.\n");
    }

    return 0;
}