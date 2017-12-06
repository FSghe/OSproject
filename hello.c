#include  <linux/module.h>  /*needed by all modules  */
#include  <linux/kernel.h>  /*needed for Macros like KERN_INFO */

int  init_module(void)  /* this
function is called as initialization  for all modules */

{
	printk(KERN_INFO “Hello OS.\n”);

	/* if this function returns non
zero means init_module failed and 
this module can’t be loaded .
*/
	return  0;
}
