
#ifndef TECLADO_EDU_CIAA_H
#define TECLADO_EDU_CIAA_H

/*==================[inclusions]=============================================*/
#include "chip.h"
#include "stdint.h"

/*==================[macros]=================================================*/
#define lpc4337            1
#define mk60fx512vlq15     2
#define num_teclas 4
/*==================[typedef]================================================*/
enum TECLAS {Tec1 = 0,Tec2,Tec3,Tec4};

uint8_t teclado[num_teclas]={1,1,1,1};

/*==================[external data declaration]==============================*/

/*==================[external functions declaration]=========================*/

/*Función para configurar las teclas */
void InitGPIO_EDUCIAA_Teclas(void);

/*Función para detectar tecla presionada*/
uint8_t Detectar_Tecla (uint8_t tecla);

/*Escaneo de teclado. Recibe un puntero a una estructura edu_CIAA_teclado, y
 * finalizada la función, se actualizan los estados de cada tecla en la estructura.*/
void Escaneo_Teclado (uint8_t teclado[num_teclas]);

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
#endif /* #ifndef TECLAS_H */

