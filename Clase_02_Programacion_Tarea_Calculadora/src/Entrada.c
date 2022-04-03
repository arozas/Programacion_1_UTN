/*
 * Entrada.c
 *
 *  Created on: 1 abr. 2022
 *      Author: Alejandro Alberto Martín Rozas
 *      Biblioteca de funciones de entrada.
 *      Versión 0.1 del 01 de abril de 2022
 */
#include "Entrada.h"


void ingresoNumero(char solicitarNumero[40], float* respuesta)
{
	printf("\n%s\n",solicitarNumero);
	scanf("%f",&(*respuesta));
}
short menuUno(char nombreMenu[40], char opcion1[40], char opcion2[40])
{
	short opcionIngresada;

	printf("\n\t\t\t%s\n",nombreMenu);
	printf("1. %s\n",opcion1);
	printf("2. %s\n",opcion2);
	printf("\nINTRODUZCA UNA OPCIÓN<1-2>:");
	scanf("%hi",&opcionIngresada);
	validarOpcionNum(opcionIngresada, 1, 2, &opcionIngresada);
	printf("\nOPCIÓN INGRESADA:%hi\n",opcionIngresada);

	return opcionIngresada;
}
short menuDos(char nombreMenu[40], char opcion1[40], char opcion2[40], char opcion3[40])
{
	short opcionIngresada;

	printf("\n\t\t\t%s\n",nombreMenu);
	printf("1. %s\n",opcion1);
	printf("2. %s\n",opcion2);
	printf("3. %s\n",opcion3);
	printf("\nINTRODUZCA UNA OPCIÓN<1-3>:");
	scanf("%hi",&opcionIngresada);
	validarOpcionNum(opcionIngresada, 1, 3, &opcionIngresada);
	printf("\nOPCIÓN INGRESADA:%hi\n",opcionIngresada);

	return opcionIngresada;
}
short menuTres(char nombreMenu[40], char opcion1[40], char opcion2[40], char opcion3[40], char opcion4[40])
{
	short opcionIngresada;

	printf("\n\t\t\t%s\n",nombreMenu);
	printf("1. %s\n",opcion1);
	printf("2. %s\n",opcion2);
	printf("3. %s\n",opcion3);
	printf("4. %s\n",opcion4);
	printf("\nINTRODUZCA UNA OPCIÓN<1-4>:");
	scanf("%hi",&opcionIngresada);
	validarOpcionNum(opcionIngresada, 1, 4, &opcionIngresada);
	printf("\nOPCIÓN INGRESADA:%hi\n",opcionIngresada);

	return opcionIngresada;
}
short menuCuatro(char nombreMenu[40], char opcion1[40], char opcion2[40], char opcion3[40], char opcion4[40], char opcion5[40])
{
	short opcionIngresada;

	printf("\n\t\t\t%s\n",nombreMenu);
	printf("1. %s\n",opcion1);
	printf("2. %s\n",opcion2);
	printf("3. %s\n",opcion3);
	printf("4. %s\n",opcion4);
	printf("5. %s\n",opcion5);
	printf("\nINTRODUZCA UNA OPCIÓN<1-5>:");
	scanf("%hi",&opcionIngresada);
	validarOpcionNum(opcionIngresada, 1, 5, &opcionIngresada);
	printf("\nOPCIÓN INGRESADA:%hi\n",opcionIngresada);

	return opcionIngresada;
}

