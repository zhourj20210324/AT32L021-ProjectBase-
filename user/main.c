#include "at32l021_board.h"
#include "at32l021_clock.h"
/**
  * @brief  main function.
  * @param  none
  * @retval none
  */

int main(void)
{
  system_clock_config();
  at32_board_init(); 
  while(1)
  { 
  }
}


