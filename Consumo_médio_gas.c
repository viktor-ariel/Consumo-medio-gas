#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {

    float km, litros_gas;

    system("cls");

    printf("Qual distancia voce vai percorrer em km? ");
    scanf("%f", &km);

    printf("Voce vai gastar quantos litros nessa viagem? ");
    scanf("%f", &litros_gas);


    float cons_medio = (km / litros_gas);
    printf ("Seu consumo medio de litros por km e: %f \n \n", cons_medio);

    system("pause");


}
