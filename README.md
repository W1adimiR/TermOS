# TermOS
### Build commands
` nasm -f elf32 kernel.asm -o kasm.o
`

`gcc -fno-stack-protector -m32 -c kmain.c -o kc.o
`

`ld -m elf_i386 -T link.ld -o kernel kasm.o kc.o
`

### Test on emulator
`qemu-system-i386 -kernel kernel 
`