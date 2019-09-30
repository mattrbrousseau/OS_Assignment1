obj-m += simple-module.o
all:
	make -C /home/cs469/Assignment1/linux/debian/hdrtmp/usr/src/linux-headers-5.3.0/include M=$(PWD) modules

clean:
	make -C /home/cs469/Assignment1/linux/debian/hdrtmp/usr/src/linux-headers-5.3.0/include M=$(PWD) clean
