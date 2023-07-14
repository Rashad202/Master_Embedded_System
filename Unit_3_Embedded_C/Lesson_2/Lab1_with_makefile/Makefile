#@copyright : $(Project_name)

CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s -g
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
SRC_1=$(wildcard *.s)
OBJ_1=$(SRC_1:.s=.o)
Project_name=rashad

all: $(Project_name).bin

%.o: %.c
	$(CC)gcc.exe  -c $(CFLAGS) $(INCS)  $< -o $@

startup.o:startup.s
	$(CC)as.exe $(CFLAGS) $< -o $@

$(Project_name).elf: startup.o uart.o app.o
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(OBJ_1)  -o $@

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@
clean_all: 
	rm *.o *.elf *.bin
clean:
	rm *.elf *.bin 

