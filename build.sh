nasm -f elf32 kernel.asm -o kasm.o
gcc -m32 -c kernel.c -o kc.o
ld -m elf_i386 -T link.ld -o kernel.bin kasm.o kc.o
grub-mkrescue -o Scratch.iso Scratch/
qemu-system-i386 -kernel kernel.bin

read a
