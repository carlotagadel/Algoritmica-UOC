#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

int main() {
    int aleatorio, num = 1, usuario, uno = 0, dos = 0, tres = 0, cuatro = 0, mayor, numeroMayor;

    //Generamos numero aleatorio entre 1 y 4
    srand(time(NULL));
    aleatorio = rand() % 4 + 1;


    while (num <= 20) {

        //lo imprimimos y mostramos durante 1 d�cima de segundo y borramos la pantalla

        printf("%d\n", aleatorio);
        Sleep(100);


        num++;

        system("cls");

        if (aleatorio==1) uno++;
        if (aleatorio==2) dos++;
        if (aleatorio==3) tres++;
        if (aleatorio==4) cuatro++;

        //Generamos nuevo n�mero aleatorio

        aleatorio = rand() % 4 + 1;

    }

    //Determinamos cual ha salido en mas ocasiones
    if (uno >= dos) {
        mayor = uno;
        numeroMayor = 1;
    }
    else {
        mayor = dos;
        numeroMayor = 2;
    }

    if (mayor < tres) {
        mayor = tres;
        numeroMayor = 3;
    }

    if (mayor < cuatro) {
        mayor = cuatro;
        numeroMayor = 4;
    }


    //Preguntamos al usuario que n�mero ha salido mas veces
    printf("Que numero ha salido mas veces?\n");
    scanf_s("%d", &usuario);

    if (usuario==numeroMayor) {
        printf("Has acertado. Los numeros han salido en estas candidades: \n");
    }
    else {
        printf("No has acertado. Los numeros han salido en estas candidades: \n");
    }

    //Mostramos las frecuencias de aparici�n

    printf("1: %d, 2: %d, 3: %d, 4: %d, Mayor frecuencia: %d\n", uno, dos, tres, cuatro, numeroMayor);


    return 0;
}