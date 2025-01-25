#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/moduleparam.h>

MODULE_LICENSE("None");
MODULE_AUTHOR("Ankush, Umer, Abrar");
MODULE_DESCRIPTION("KTU grade calculator for S4");
MODULE_VERSION("1.0");

static int  os = 0;
static int  db = 0;
static int gt = 0;
static int co = 0;
static int de = 0;
static int osl = 0;
static int dl = 0;
module_param(os, int, S_IRUGO);
module_param(db, int, S_IRUGO);
module_param(gt, int, S_IRUGO);
module_param(co, int, S_IRUGO);
module_param(de, int, S_IRUGO);
module_param(osl, int, S_IRUGO);
module_param(dl, int, S_IRUGO);

static int __init ktu_module_init(void) {
    printk(KERN_INFO "KTU calculator Module Loaded\n");
    int grad = (os*4 + db*4 + gt*4 + co*4 + de*2 +dl*2 + osl*2)/22;
    printk(KERN_INFO "Your grade is %d \n", grad );
    return 0;
}

static void __exit ktu_module_exit(void) {
    printk(KERN_INFO "KTU Module Unloaded\n");
}

module_init(ktu_module_init);
module_exit(ktu_module_exit);

