objs := start.o main.o

ledc.bin:$(objs)
	arm-linux-ld -Timx6ul.lds -o ledc.elf $^
	arm-linux-objcopy -O binary -S ledc.elf $@
	arm-linux-objdump -D -m arm ledc.elf > ledc.dis
	./mkimage -n ./imximage.cfg.cfgtmp -T imximage -e 0x80100000 -d ledc.bin ledc.imx
%.o:%.s
	arm-linux-gcc -Wall -nostdlib -c -O2 -o $@ $<
	
%.o:%.S
	arm-linux-gcc -Wall -nostdlib -c -O2 -o $@ $<
	
%.o:%.c
	arm-linux-gcc -Wall -nostdlib -c -O2 -o $@ $<
	
clean:
	rm -rf *.o ledc.bin ledc.elf ledc.dis
	
	
