#include <linux/module.h>
#include <linux/kernel.h>


int init_module(void) {
    printk(KERN_INFO, "Hello module loaded\n");
    printk(KERN_INFO, "Hello, World!\n");
    return 0;
}

void cleanup_module(void) {
    printk(KERN_INFO, "Hello module unloaded\n");
}
