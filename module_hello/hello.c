#include <linux/init.h>
#include <linux/module.h>

static int __init hello_init(void)
{
	printk(KERN_INFO "helloworld init");
	return 0;
}
module_init(hello_init);

static void __exit hello_exit(void)
{
	printk(KERN_INFO "helloworld exit");
	return;
}
module_exit(hello_exit);

MODULE_AUTHOR("ZLG <helloworldzlg@163.com>");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("a simple helloworld module");
MODULE_ALIAS("a simple helloworld module");
