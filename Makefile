obj-m += simple-module.o
all:
	make -C /home/cs469/Assignment1/linux M=$(PWD) modules

clean:
	make -C /home/cs469/Assignment1/linux M=$(PWD) clean
