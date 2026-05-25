#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x0feb1fae, "i2c_smbus_write_word_data" },
	{ 0x9aa6980d, "mutex_unlock" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x13fc0be3, "i2c_smbus_write_byte_data" },
	{ 0x98168334, "i2c_smbus_read_byte" },
	{ 0xdd6830c7, "sprintf" },
	{ 0xd272d446, "__fentry__" },
	{ 0x96f1dad9, "i2c_register_driver" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x770e1c57, "i2c_del_driver" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x31b85143, "__dynamic_dev_dbg" },
	{ 0x11e98b2f, "_dev_info" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0x4944b104, "kmalloc_caches" },
	{ 0x2f9595d1, "__kmalloc_cache_noprof" },
	{ 0x9aa6980d, "mutex_init_generic" },
	{ 0xb880fdff, "sysfs_create_group" },
	{ 0xe8213e80, "_printk" },
	{ 0xd272d446, "dump_stack" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xbd069841, "kstrtoull" },
	{ 0x9aa6980d, "mutex_lock" },
	{ 0xe63769e7, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x0feb1fae,
	0x9aa6980d,
	0xd272d446,
	0x13fc0be3,
	0x98168334,
	0xdd6830c7,
	0xd272d446,
	0x96f1dad9,
	0xd272d446,
	0xcb8b6ec6,
	0x770e1c57,
	0x5a844b26,
	0x31b85143,
	0x11e98b2f,
	0xbd03ed67,
	0x4944b104,
	0x2f9595d1,
	0x9aa6980d,
	0xb880fdff,
	0xe8213e80,
	0xd272d446,
	0xbd03ed67,
	0xbd069841,
	0x9aa6980d,
	0xe63769e7,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"i2c_smbus_write_word_data\0"
	"mutex_unlock\0"
	"__stack_chk_fail\0"
	"i2c_smbus_write_byte_data\0"
	"i2c_smbus_read_byte\0"
	"sprintf\0"
	"__fentry__\0"
	"i2c_register_driver\0"
	"__x86_return_thunk\0"
	"kfree\0"
	"i2c_del_driver\0"
	"__x86_indirect_thunk_rax\0"
	"__dynamic_dev_dbg\0"
	"_dev_info\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"mutex_init_generic\0"
	"sysfs_create_group\0"
	"_printk\0"
	"dump_stack\0"
	"__ref_stack_chk_guard\0"
	"kstrtoull\0"
	"mutex_lock\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:dell_z9100_iom_cpld");

MODULE_INFO(srcversion, "586FE7F16B048D62D900EBD");
