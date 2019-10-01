
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/moduleparam.h>

MODULE_DESCRIPTION("simple module");
MODULE_AUTHOR("Matthew Brousseau - brouss16");
MODULE_LICENSE("GPL");

static int bflag = 0;
static char *lyrics = "No lyrics here";

module_param(bflag, int, S_IRUSR | S_IWUSR | S_IRGRP| S_IWGRP);
MODULE_PARM_DESC(bflag, "boolean flag");
module_param(lyrics, charp, 0000);
MODULE_PARM_DESC(lyrics, "song lyrics");

static int __init simple_init(void) {

	if (bflag == 0) {
		printk(KERN_INFO "%s\n", lyrics);
		//Lyrics from Comfortably Numb by Pink Floyd
		printk(KERN_INFO "Hello? Is there anybody in there? Just nod if you can hear me %d\n",bflag);
		return 0;
	}
	else {
		printk(KERN_INFO "%s\n",lyrics);
		return 0;
	}
}

static void __exit simple_exit(void) {

	//Lyrics from Candle in the Wind by Elton John
	printk(KERN_INFO "Goodbye Norma Jean, though I never knew you at all.\n");
}

module_init(simple_init)
module_exit(simple_exit)
