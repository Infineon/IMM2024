/*
 * main.c
 *
 *  Created on: 2024 Jun 12 07:01:48
 *  Author: AlbrechAndre
 */




#include "DAVE.h"                 //Declarations from DAVE Code Generation (includes SFR declaration)

/**

 * @brief main() - Application entry point
 *
 * <b>Details of function</b><br>
 * This routine is the application entry point. It is invoked by the device startup code. It is responsible for
 * invoking the APP initialization dispatcher routine - DAVE_Init() and hosting the place-holder for user application
 * code.
 */

int main(void)
{
  DAVE_STATUS_t status;

  status = DAVE_Init();           /* Initialization of DAVE APPs  */

  int VIN, VOUT, IIN, IL;

  if (status != DAVE_STATUS_SUCCESS)
  {
    /* Placeholder for error handler code. The while loop below can be replaced with an user error handler. */
    XMC_DEBUG("DAVE APPs initialization failed\n");

    while(1U)
    {


    }
  }

  /* Placeholder for user application code. The while loop below can be replaced with user application code. */
  while(1U)
  {
	  VIN = ADC_MEASUREMENT_GetResult(&ADC_MEASUREMENT_VIN_handle);
	  VOUT = ADC_MEASUREMENT_GetResult(&ADC_MEASUREMENT_VOUT_handle);
	  IIN = ADC_MEASUREMENT_GetResult(&ADC_MEASUREMENT_IIN_handle);
	  IL = ADC_MEASUREMENT_GetResult(&ADC_MEASUREMENT_IL_handle);


  }
}
