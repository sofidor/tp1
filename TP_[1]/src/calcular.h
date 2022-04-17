/*
 * calcular.h
 *
 *  Created on: 12 abr. 2022
 *      Author: sofia
 */

#ifndef CALCULAR_H_
#define CALCULAR_H_


/**
 *
 * @return
 *
 * esta funcion pide el ingreso de los kilometros y los valida en un rango
 */
float validarKilometro();

/**
 *
 * @return
 *
 * esta funcion pide el precio de Aerolineas Argentinas y lo valida en un rango
 */
float validarAerolineas();

/**
 *
 * @return
 * esta funcion pide el precio de Latam y lo valida en un rango
 */
float validarLatam();

/**
 *
 * @param precioLatam
 * @param precioAerolineas
 * @param precioConDescLatam //puntero
 * @param precioConDescAerolineas //puntero
 *
 * esta funcion realiza un 10% de descuento al precio asignado
 *
 */
void calcularDebito(float precioLatam , float precioAerolineas ,float* precioConDescLatam ,float*precioConDescAerolineas );
/**
 *
 * @param precioLatam
 * @param precioAerolineas
 * @param precioConInteresLatam //puntero
 * @param precioConInteresAerolineas //puntero
 *
 * esta funcion le realiza un 25% de interes al precio asignado
 */
void calcularCredito(float precioLatam , float precioAerolineas ,float* precioConInteresLatam ,float* precioConInteresAerolineas);
/**
 *
 * @param precioLatam
 * @param precioAerolineas
 * @param precioBitcoinLatam //puntero
 * @param precioBitcoinAero //puntero
 *
 * esta funcion calcula el precio en bitcoins del precio asignado
 */
void calcularBitcoin(float precioLatam , float precioAerolineas , float* precioBitcoinLatam , float* precioBitcoinAero);
/**
 *
 * @param precioLatam
 * @param precioAerolineas
 * @param km
 * @param precioUnitarioLatam // puntero
 * @param precioUnitarioAero //puntero
 *
 *  esta funcion  calcula el precio unitario por cada km ingresado
 */

void calcularPrecioUnitario(float precioLatam , float precioAerolineas , float km , float* precioUnitarioLatam , float* precioUnitarioAero);
/**
 *
 * @param precioLatam
 * @param precioAerolineas
 * @param diferenciaIngresada //puntero
 *
 *  esta funcion calcula la diferencia entre los dos precios ingresados
 */
void calcularDiferencia(float precioLatam , float precioAerolineas , float* diferenciaIngresada);
/**
 *
 * @param precioConDescLatam
 * @param precioConDescAerolineas
 * @param precioConInteresLatam
 * @param precioConInteresAerolineas
 * @param precioBitcoinLatam
 * @param precioBitcoinAero
 * @param precioUnitarioLatam
 * @param precioUnitarioAero
 * @param diferenciaIngresada *
 *
 * esta funcion muestra las respuestas de las diferentes opciones del menu
 */

void mostrarRespuestas(float precioConDescLatam , float precioConDescAerolineas , float precioConInteresLatam , float precioConInteresAerolineas , float precioBitcoinLatam , float precioBitcoinAero , float precioUnitarioLatam , float precioUnitarioAero , float diferenciaIngresada);

#endif /* CALCULAR_H_ */
