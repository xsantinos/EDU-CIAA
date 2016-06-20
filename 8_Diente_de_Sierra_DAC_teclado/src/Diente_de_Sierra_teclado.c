

/*==================[inclusions]=============================================*/
#include "main.h"
#include "dac.h"
#include "timer.h"
#include "teclado_edu_ciaa.h"
#include "led.h"
/*==================[macros and definitions]=================================*/
#define base_de_tiempo 1
#define N_teclas 4
#define retardo 500000
/*==================[internal data declaration]==============================*/
uint16_t valor = 0;
uint8_t Teclado[N_teclas] = {1,1,1,1};
uint8_t Amplitud = 1;
uint32_t Periodo = 1024;
uint8_t Volt = 0;
uint32_t valorDAC = 0;

uint8_t Flag_T1 = 1;
uint8_t Flag_T2 = 1;
uint8_t Flag_T3 = 1;
uint8_t Flag_T4 = 1;
/*==================[internal functions declaration]=========================*/

/*==================[internal data definition]===============================*/

/*==================[external data definition]===============================*/

/*==================[internal functions definition]==========================*/

/*==================[external functions definition]==========================*/

/*Aplicación en la que se hacen parpadear todos los leds de la placa.*/

void Cambiar_Parametros (uint8_t teclado_edu_ciaa[N_teclas])
{
	if (teclado_edu_ciaa[Tec1] == 0 && Amplitud != 3)
		Amplitud += 1/4;
	if (teclado_edu_ciaa[Tec2] == 0 && Amplitud != 0.25)
		Amplitud -= 1/4;
	if (teclado_edu_ciaa[Tec3] == 0 && Periodo != 3072)
		Periodo += 256;
	if (teclado_edu_ciaa[Tec4] == 0 && Periodo != 256)
		Periodo -= 256;
}

void ActualizarValor (void)
{
	if (Volt >= Amplitud)
		Volt = 0;
	else
		Volt = Volt + Amplitud/Periodo;
	valorDAC = Volt * 1024 / 3;
}

void LlamadoRIT (void)
{
	Limpiar_RIT();
	ActualizarValor();
}



int main(void)
{
	InitGPIO_EDUCIAA_Leds();
	InicializarDAC();
	Inicializar_RIT();
	Setear_RIT(base_de_tiempo);

	while(1)
	{
		Escaneo_Teclado(Teclado);

		Cambiar_Parametros(Teclado);
	}
}
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/

