GNU nano 7.2                                                                            Makefile                                                                                      
obj-m += ktu.o

all:
        make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
        make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

