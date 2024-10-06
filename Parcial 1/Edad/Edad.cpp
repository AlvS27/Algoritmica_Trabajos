/*Programa: Edad*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int dia,mes,ano,edad;
    printf("Ingrese su Dia de Nacimiento: "); scanf("%d",&dia);
    printf("\nIngrese su Mes de Nacimiento: "); scanf("%d",&mes);
    printf("\nIngrese su Año de Nacimiento: "); scanf("%d",&ano);
    edad= 2024-ano;
    printf("\nTu edad es de: %d",edad); printf(" años");
    getch();
    return 0;
}
