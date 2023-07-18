#define SYSCTL_RGGC2_R  (*((volatile unsigned long*)0x400FE108))
#define GPIO_PORTF_DIR_R  (*((volatile unsigned long*)0x40025400))
#define GPIO_PORTF_DEN_R  (*((volatile unsigned long*)0x4002551C))
#define GPIO_PORTF_DATA_R  (*((volatile unsigned long*)0x400253FC))

int main()
{
	SYSCTL_RGGC2_R =0x20;
	GPIO_PORTF_DIR_R |=1<<3;
	GPIO_PORTF_DEN_R |=1<<3;

	while(1)
	{
		volatile unsigned int i;
		GPIO_PORTF_DATA_R|=1<<3;
		for( i=0; i<200000;i++);
		GPIO_PORTF_DATA_R &=~(1<<3);
		for( i=0; i<200000;i++);


	}
return 0;
}
