/* $projectname$ - an application for the Pololu Orangutan X2
 *
 * This application uses the Pololu AVR C/C++ Library.  For help, see:
 * -User's guide: http://www.pololu.com/docs/0J20
 * -Command reference: http://www.pololu.com/docs/0J18
 *
 * Created: $time$
 *  Author: $username$
 */

#include <pololu/orangutan.h>

int main()
{
	play_from_program_space(PSTR(">g32>>c32"));  // Play welcoming notes.

	while(1)
	{
		// Print battery voltage (in mV) on the LCD.
		clear();
		print_long(read_battery_millivolts_x2());

		red_led(1);     // Turn on the red LED.
		delay_ms(200);  // Wait for 200 ms.

		red_led(0);     // Turn off the red LED.
		delay_ms(200);  // Wait for 200 ms.
	}
}
