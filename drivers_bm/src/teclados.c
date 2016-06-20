//
///*==================[inclusions]=============================================*/
//
//#include "teclados.h"
///*==================[macros and definitions]=================================*/
//
///*PARA TECLADO DE EDU-CIAA*/
///*Las siguientes constantes corresponden al número de paquete de pines
// * donde se encuentran las teclas.*/
//#define TECLA_1_PACK_NUMBER 1
//#define TECLA_2_PACK_NUMBER 1
//#define TECLA_3_PACK_NUMBER 1
//#define TECLA_4_PACK_NUMBER 1
//
///*Las siguientes constantes corresponden al pin dentro del paquete
// * donde se encuentran las teclas.*/
//#define TECLA_1_PACK_PIN 0
//#define TECLA_2_PACK_PIN 1
//#define TECLA_3_PACK_PIN 2
//#define TECLA_4_PACK_PIN 6
//
///*Las siguientes constantes corresponden a los puertos GPIO donde se
// * encuentran las distintas teclas. Para T1, T2 y T3, GPIO0. Para T4
// * GPIO1*/
//#define TECLA_1_GPIO_NUMBER 0
//#define TECLA_2_GPIO_NUMBER 0
//#define TECLA_3_GPIO_NUMBER 0
//#define TECLA_4_GPIO_NUMBER 1
//
///*Las siguientes constantes corresponden a los pines dentro de los
// * puertos GPIO de cada tecla. */
//#define TECLA_1_GPIO_PIN 4
//#define TECLA_2_GPIO_PIN 8
//#define TECLA_3_GPIO_PIN 9
//#define TECLA_4_GPIO_PIN 9
//
///*PARA TECLADO MATRICIAL*/
//#define
//
///*==================[internal data declaration]==============================*/
//
///*==================[internal functions declaration]=========================*/
//
///*==================[internal data definition]===============================*/
//
///*==================[external data definition]===============================*/
//
///*==================[internal functions definition]==========================*/
//void InicializarTeclado(uint8_t tipo_de_teclado)
//{
//	switch (tipo_de_teclado)
//	{
//	case EDU_CIAA:
//		TipodeTeclado = EDU_CIAA;
//		ConfigurarTecladoEDU_CIAA();
//		break;
//	case MATRICIAL:
//		TipodeTeclado = MATRICIAL;
//		ConfigurarTecladoMatricial();
//		break;
//	case COMBINADO:
//		TipodeTeclado = COMBINADO;
//		ConfigurarTecladoMatricial();
//		ConfigurarTecladoEDU_CIAA();
//		break;
//	}
//}
//
//void ConfigurarTecladoEDU_CIAA(void)
//{
///*mapea P1 0 en GPIO 0[4], SW1*/
//	Chip_SCU_PinMux(TECLA_1_PACK_NUMBER, TECLA_1_PACK_PIN, MD_PUP|MD_EZI|MD_ZI, FUNC0);
//	/*mapea P1 1 en GPIO 0[8], SW2*/
//	Chip_SCU_PinMux(TECLA_2_PACK_NUMBER, TECLA_2_PACK_PIN, MD_PUP|MD_EZI|MD_ZI, FUNC0);
//	/*mapea P1 2 en GPIO 0[9], SW3*/
//	Chip_SCU_PinMux(TECLA_3_PACK_NUMBER, TECLA_3_PACK_PIN, MD_PUP|MD_EZI|MD_ZI, FUNC0);
//	/*mapea P1 6 en GPIO 1[9], SW4*/
//	Chip_SCU_PinMux(TECLA_4_PACK_NUMBER, TECLA_4_PACK_PIN, MD_PUP|MD_EZI|MD_ZI, FUNC0);
//
//	/*Configuro los pines de las teclas como entradas.*/
//	Chip_GPIO_SetDir(LPC_GPIO_PORT, TECLA_1_GPIO_NUMBER, 1<<TECLA_1_GPIO_PIN, 0);
//	Chip_GPIO_SetDir(LPC_GPIO_PORT, TECLA_2_GPIO_NUMBER, 1<<TECLA_2_GPIO_PIN, 0);
//	Chip_GPIO_SetDir(LPC_GPIO_PORT, TECLA_3_GPIO_NUMBER, 1<<TECLA_3_GPIO_PIN, 0);
//	Chip_GPIO_SetDir(LPC_GPIO_PORT, TECLA_4_GPIO_NUMBER, 1<<TECLA_4_GPIO_PIN, 0);
//}
//
//void ConfigurarTecladoMatricial(void)
//{
//
//}
///*==================[external functions definition]==========================*/
//
///*==================[end of file]============================================*/
//
