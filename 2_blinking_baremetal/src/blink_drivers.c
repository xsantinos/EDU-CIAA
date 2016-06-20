

/*==================[inclusions]=============================================*/
#include "main.h"
#include "led.h"

/*==================[macros and definitions]=================================*/

/*==================[internal data declaration]==============================*/

/*==================[internal functions declaration]=========================*/

/*==================[internal data definition]===============================*/

/*==================[external data definition]===============================*/

/*==================[internal functions definition]==========================*/

/*==================[external functions definition]==========================*/

/*Aplicación en la que se hacen parpadear todos los leds de la placa.*/
int main(void)
{

#define DELAY 5000000
	edu_CIAA_ledRGB ledRGB;
	ledRGB.red = 1;
	ledRGB.green = 1;
	ledRGB.blue = 1;
	uint32_t i;

/*Configuro/inicializo los puertos para operar sobre los leds.*/
	InitGPIO_EDUCIAA_Leds();

/*Hago parpadear todos los leds*/
	while(1)
		{
			for(i = DELAY; i != 0; i--)
			{
				asm("nop");
			}
			ToggleLed(LED_AMARILLO);
			ToggleLed(LED_ROJO);
			ToggleLed(LED_VERDE);
			ToggleLedRGB(&ledRGB);
		}
}
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/

