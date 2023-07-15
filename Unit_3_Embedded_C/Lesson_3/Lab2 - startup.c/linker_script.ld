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
	.text :
	{
		*(.vectors*)
		*(.text*)
		*(.rodata)
		_E_TEXT = . ;
	}> flash
	.data :
	{
		_S_DATA = . ;
		*(.data*)
		_E_DATA = . ;
	}> sram AT> flash
	.bss :
	{
		_S_BSS = . ;
		*(.bss*) *(COMMON*)
		. = ALIGN(4);
		_E_BSS = . ;
		. = . + 0x1000 ;
		_stack_top = . ;
	}> sram
}