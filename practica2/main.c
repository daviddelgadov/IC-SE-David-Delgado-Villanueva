/*
 * main.c
 *
 *  Created on: Mar 2, 2023
 *      Author: atcsol
 */

#include "leon3_uart.h"

int main()
{
	leon3_putchar('p');
	leon3_putchar('2');
	leon3_putchar('\n');
	return 0;
}

