/* linker_script
By: Rashad
*/

/* linker_script
By: Rashad
*/

MEMORY
{
	flash(RX)	:ORIGIN	 = 0X08000000, LENGTH = 128K
	sram(RWX)	:ORIGIN	 = 0X20000000, LENGTH = 20K
}

SECTIONS
{
	.text : {
		*(.vectors*)
		*(.text*)
		*(.rodata*)
		
	}> flash

	.data : {
		
		*(.data*)
		
	}> flash
	
	.bss : {
		*(.bss*)
	} > sram
}