cmd_/home/cs469/Assignment1/OS_Assignment1/simple-module/simple-module.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds --build-id  -o /home/cs469/Assignment1/OS_Assignment1/simple-module/simple-module.ko /home/cs469/Assignment1/OS_Assignment1/simple-module/simple-module.o /home/cs469/Assignment1/OS_Assignment1/simple-module/simple-module.mod.o ;  true
