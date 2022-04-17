/* Dorbessan Sofia Milagros
 Tp1 laboratorio
Div j
*/

#include <stdio.h>
#include <stdlib.h>
#include "calcular.h"

int main(void){

	setbuf(stdout , NULL);

	int opcion;
	float km =0;
	float precioAerolineas=0;
	float precioLatam=0;
	float precioConDescLatam;
	float precioConDescAerolineas;
	float precioConInteresLatam;
	float precioConInteresAerolineas;
	float precioBitcoinLatam;
	float precioBitcoinAero;
	float precioUnitarioLatam;
	float precioUnitarioAero;
	float diferenciaIngresada;

	do{

	printf("1)Ingresar Kilómetros: ( km=x) \n"
			"2)Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z) \n"
			"3)Calculo de todos los costos\n"
			"4)Informe de Resultados\n"
			"5)Carga forzada de datos \n"
			"6)Salir \n");

	printf("\nIngrese una opcion:");
	scanf("%d" , &opcion);

	while(opcion <1 || opcion >6){
		printf("Error , ingrese un dato valido (entre 1 y 6)");
		scanf("%d" , &opcion);
		}

	switch(opcion){

		case 1:
			km = validarKilometro();

				break;

		case 2:

			precioAerolineas = validarAerolineas();
			precioLatam = validarLatam();

				break;

		case 3:
			 if(km != 0 && precioAerolineas != 0 && precioLatam != 0){

				  calcularDebito(precioLatam , precioAerolineas , &precioConDescLatam , &precioConDescAerolineas);
				  calcularCredito(precioLatam , precioAerolineas , &precioConInteresLatam , &precioConInteresAerolineas);
				  calcularBitcoin( precioLatam ,  precioAerolineas , &precioBitcoinLatam , &precioBitcoinAero);
				  calcularPrecioUnitario( precioLatam ,precioAerolineas , km , &precioUnitarioLatam , &precioUnitarioAero);
				  calcularDiferencia( precioLatam ,  precioAerolineas , &diferenciaIngresada);
			 }
			 else{
				 printf("\n\nError , no se ingresaron valores\n\n");
			 }
			break;

		case 4:
			 mostrarRespuestas( precioConDescLatam ,  precioConDescAerolineas ,  precioConInteresLatam ,  precioConInteresAerolineas ,  precioBitcoinLatam ,  precioBitcoinAero ,  precioUnitarioLatam ,  precioUnitarioAero ,  diferenciaIngresada);
			 break;

		case 5:
				precioLatam = 159339;
				precioAerolineas = 162965;
				km = 7090;

			calcularDebito(precioLatam , precioAerolineas , &precioConDescLatam , &precioConDescAerolineas);
			calcularCredito(precioLatam , precioAerolineas , &precioConInteresLatam , &precioConInteresAerolineas);
			calcularBitcoin( precioLatam ,  precioAerolineas , &precioBitcoinLatam , &precioBitcoinAero);
			calcularPrecioUnitario( precioLatam ,precioAerolineas , km , &precioUnitarioLatam , &precioUnitarioAero);
			calcularDiferencia( precioLatam ,  precioAerolineas , &diferenciaIngresada);
			mostrarRespuestas( precioConDescLatam ,  precioConDescAerolineas ,  precioConInteresLatam ,  precioConInteresAerolineas ,  precioBitcoinLatam ,  precioBitcoinAero ,  precioUnitarioLatam ,  precioUnitarioAero ,  diferenciaIngresada);

			break;
	}
	}while(opcion != 6);

	system("pause");
	return 0;
}


