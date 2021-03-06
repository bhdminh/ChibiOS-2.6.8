/*
    ChibiOS/RT - Copyright (C) 2006,2007,2008,2009,2010,
                 2011,2012 Giovanni Di Sirio.

    This file is part of ChibiOS/RT.

    ChibiOS/RT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS/RT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/*
 * AVR drivers configuration.
 * The following settings override the default settings present in
 * the various device driver implementation headers.
 * Note that the settings for each driver only have effect if the driver
 * is enabled in halconf.h.
 */

/*
 * ADC driver system settings.
 */

#define AVR_ADC_USE_ADC1              TRUE

/*
 * CAN driver system settings.
 */

/*
 * MAC driver system settings.
 */

/*
 * PWM driver system settings.
 */

#define USE_AVR_PWM1              TRUE
#define USE_AVR_PWM2              TRUE


/*
 * SERIAL driver system settings.
 */
#define USE_AVR_USART0              TRUE
#define USE_AVR_USART1              FALSE

/*
 * SPI driver system settings.
 */

#define USE_AVR_SPI1		    TRUE
#define USE_AVR_SPI2		    FALSE

/*
 * GPT driver system settings.
 */

#define USE_AVR_GPT1		    TRUE
#define USE_AVR_GPT2		    TRUE
