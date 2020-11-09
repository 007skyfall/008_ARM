led.bin:led.s
	arm-linux-gcc -g -c led.s -o led.o
	arm-linux-ld -Ttext 0X80100000 led.o -o led.elf
	arm-linux-objcopy -O binary -S -g led.elf led.bin
	arm-linux-objdump -D led.elf > led.dis
	./mkimage -n ./imximage.cfg.cfgtmp -T imximage -e 0x80100000 -d led.bin led.imx

clean:
	rm -rf *.o led.bin led.elf led.dis led.imx
install:
	cp led.imx /mnt/share	
	
