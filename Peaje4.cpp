#include <stdio.h>

int main() {
    int monedas10 = 0, monedas5 = 0, monedas2 = 0, monedas1 = 0, totalMonedas = 0;
    float Cobro, Saldo, MonedasRestantes, vuelto =0;
    printf("Ingrese cuanto cuesta el estacionamiento \n");
    scanf("%f", &Cobro);
    while (Cobro<0)
    {
         printf("Ingreso un numero negativo vuelve a ingresar \n");
    scanf("%f", &Cobro);
    }
    
    printf("Ingrese cuanto pago el cliente \n");
    scanf("%f", &Saldo);
    while (Saldo<Cobro)
    {
       printf("El cliente pago un valor inferior al costo total ingrese otro dato \n");
    scanf("%f", &Saldo);
    }
    
    vuelto=Saldo-Cobro;
    MonedasRestantes = Saldo - Cobro;

    while (MonedasRestantes >= 10) 
    {
        monedas10 = monedas10 + 1;
        MonedasRestantes = MonedasRestantes - 10;
    }

    while (MonedasRestantes >= 5) 
    {
        monedas5 = monedas5 + 1;
        MonedasRestantes = MonedasRestantes - 5;
    }

    while (MonedasRestantes >= 2) 
    {
        monedas2 = monedas2 + 1;
        MonedasRestantes = MonedasRestantes - 2;
    }

    monedas1 = MonedasRestantes;

    totalMonedas = monedas10 + monedas5 + monedas2 + monedas1;

    printf("El cambio a devolver es: %.2f pesos\n", vuelto);
    printf("Monedas de 10 pesos: %d\n", monedas10);
    printf("Monedas de 5 pesos: %d\n", monedas5);
    printf("Monedas de 2 pesos: %d\n", monedas2);
    printf("Monedas de 1 peso: %d\n", monedas1);
    printf("Total de monedas: %d\n", totalMonedas);

    return 0;
}