// startup.s
//By :Rashad

#include "stdint.h"

extern int main (void);
void  Reset_Handler (void);
void Default_Handler()
{
	Reset_Handler();
}

void NMI_Handler(void)				__attribute__ ((weak, alias("Default_Handler")));;
void H_Fault_Handler(void)			__attribute__ ((weak, alias("Default_Handler")));;
// trick  that we don't have to use extern 
static unsigned long Stack_top[256];

void ( * const g_p_fn_Vectors[])() __attribute__ ((section(".vectors"))) =
{
	(void(*)())  ((unsigned long)Stack_top + sizeof(Stack_top)),
	&Reset_Handler,
	&NMI_Handler,
	&H_Fault_Handler
};



/*
uint32 vectors[] __attribute__ ((section(".vectors"))) = 
{
	(uint32)	&_STACK_TOP,
	(uint32)	&Reset_Handler,
	(uint32)	&NMI_Handler,
	(uint32)	&H_Fault_Handler,
	(uint32)	&MM_Fault_Handler,
	(uint32)	&Bus_Fault,
	(uint32)	&Usage_Fault_Handler
};
*/
extern uint32_t _E_TEXT ;
extern uint32_t _S_DATA ;
extern uint32_t _E_DATA ;
extern uint32_t _S_BSS ;
extern uint32_t _E_BSS ;

/********************************************************************************************/

void Reset_Handler (void)
{
	/* copy data from ROM to RAM */
	uint32_t DATA_Size = (uint8_t*)&_E_DATA - (uint8_t*)&_S_DATA ;
	uint8_t* P_src = (uint8_t*)&_E_TEXT ;
	uint8_t* P_dst = (uint8_t*)&_S_DATA ;
	
	for (int i = 0; i < DATA_Size; ++i)
		{
			*((uint8_t*)P_dst++) = *((uint8_t*)P_src++) ; 
		}

	/*  init the .bss with zero  */
	uint32_t BSS_Size = (uint8_t*)&_E_BSS - (uint8_t*)&_S_BSS ;
	P_dst = (uint8_t*)&_S_BSS ;

	for (int i = 0; i < BSS_Size; ++i)
		{
			*((uint8_t*)P_dst++) = (uint8_t)0 ; 
		}

	main();   	/* Branch --> main */ 

}
