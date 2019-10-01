

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_DESCRIPTION("Testing null pointer exceptions");
MODULE_AUTHOR("Matthew Brousseau - brouss16");
MODULE_LICENSE("GPL");

static int __init simple_init(void) {
	int * null_pointer = 0;
	int value = *null_pointer;
	//Lyrics from Comfortably Numb by Pink Floyd
	printk(KERN_INFO "Hello? Is there anybody in there? Just nod if you can hear me\n");
	return 0;
}

static void __exit simple_exit(void) {

	//Lyrics from Candle in the Wind by Elton John
	printk(KERN_INFO "Goodbye Norma Jean, though I never knew you at all.\n");
}

module_init(simple_init)
module_exit(simple_exit)
