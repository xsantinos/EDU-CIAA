//
//#ifndef TECLADOS_H
//#define TECLADOS_H
//
///*==================[inclusions]=============================================*/
//#include "chip.h"
//#include "stdint.h"
//#include "timer.h"
///*==================[macros]=================================================*/
//#define lpc4337            1
//#define mk60fx512vlq15     2
//
///*==================[typedef]================================================*/
//
///*Defino vectores correspondientes a cada tipo de teclado, y una variable
// * global que servirá para que el driver se comporte según el tipo de teclado
// * seleccionado. Esta variable queda definida en la función de configuración
// * del teclado.*/
//
//uint8_t TecladoPlaca [4] = {1, 1, 1, 1};
//uint8_t TecladoMatricial [16] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
//uint8_t TipodeTeclado;
//
//enum TIPO_TECLADO {EDU_CIAA = 4, MATRICIAL = 16, COMBINADO = 20};
//
///*==================[external data declaration]==============================*/
//
///*==================[external functions declaration]=========================*/
//
//
//void InicializarTeclado(uint8_t tipo_de_teclado);
//
//void ConfigurarTecladoEDU_CIAA();
//
//void ConfigurarTecladoMatricial();
//
//void EscaneoTeclado();
//
///** @} doxygen end group definition */
///** @} doxygen end group definition */
///** @} doxygen end group definition */
///*==================[end of file]============================================*/
//#endif /* #ifndef MI_NUEVO_PROYECTO_H */
//
