/*
 * helloWorldLinuxKernelModules.c
 * Hello World Linux Kernel Module
 */
#include <linux/module.h>   // Needed by all modules
#include <linux/kernel.h>   // Needed for KERN_INFO


MODULE_LICENSE("GPL");
MODULE_AUTHOR("CGIL");
MODULE_DESCRIPTION("A simple Hello World Linux Kernel Module");
MODULE_VERSION("0.1.1");


int init_module(void) {
    printk(KERN_INFO "<_CG_> ==> Hello World from helloWorldLinuxKernelModules.c \n");
    return 0; //    non 0 return means init_module failed; module can't be loaded.
}

void cleanup_module(void)
{
	printk(KERN_INFO "<_CG_> <== Goodbye World from helloWorldLinuxKernelModules.c \n");
}