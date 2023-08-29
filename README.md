# sys-kernel-module-hello
A basic Linux Kernel Module that just writes an hello/goodbye message in syslog

### how to compile this module
	
	make 

### how to test this module 

just try to load your compiled module:
	
	sudo insmod helloWorldLinuxKernelModules.ko

then have a look in your kernel log with dmesg or by :

	tail -f /var/log/kern.log

	Aug 29 15:59:30 pulsar kernel: [112691.600396] <_CG_> ==> Hello World from helloWorldLinuxKernelModules.c


then if you unload this module 

	sudo rmmod helloWorldLinuxKernelModules

you will see in your kernel:

	Aug 29 16:01:11 pulsar kernel: [112793.335120] <_CG_> <== Goodbye World from helloWorldLinuxKernelModules.c 

## tested on :

 + Linux Ubuntu 22.04.3 LTS
 + kernel 6.2.0-26-generic

## more info

 + [Bootlin kernel search reference printk definition](https://elixir.bootlin.com/linux/v6.2/source/include/linux/printk.h#L433)

 + [The Linux Kernel Module Programming Guide (github)](https://github.com/sysprog21/lkmpg)
 
 + [The Linux Kernel Module Programming Guide (html content)](https://sysprog21.github.io/lkmpg/)

 + [The Linux Kernel Module Programming Guide (pdf book)](https://github.com/sysprog21/lkmpg/releases/download/latest/lkmpg.pdf)

