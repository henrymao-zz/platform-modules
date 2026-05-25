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
	{ 0xcaf67bf5, "i2c_unregister_device" },
	{ 0xdc3e5bd2, "sysfs_remove_bin_file" },
	{ 0x9aa6980d, "mutex_lock" },
	{ 0x13fc0be3, "i2c_smbus_write_byte_data" },
	{ 0x9aa6980d, "mutex_unlock" },
	{ 0x67628f51, "msleep" },
	{ 0x058c185a, "jiffies" },
	{ 0x98168334, "i2c_smbus_read_byte" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xdc0e35f8, "devm_kmalloc" },
	{ 0x830d084d, "i2c_new_dummy_device" },
	{ 0x9aa6980d, "mutex_init_generic" },
	{ 0xa272d986, "sysfs_create_bin_file" },
	{ 0x770e1c57, "i2c_del_driver" },
	{ 0xd272d446, "__fentry__" },
	{ 0x96f1dad9, "i2c_register_driver" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xe63769e7, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xcaf67bf5,
	0xdc3e5bd2,
	0x9aa6980d,
	0x13fc0be3,
	0x9aa6980d,
	0x67628f51,
	0x058c185a,
	0x98168334,
	0x5a844b26,
	0xdc0e35f8,
	0x830d084d,
	0x9aa6980d,
	0xa272d986,
	0x770e1c57,
	0xd272d446,
	0x96f1dad9,
	0xd272d446,
	0xe63769e7,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"i2c_unregister_device\0"
	"sysfs_remove_bin_file\0"
	"mutex_lock\0"
	"i2c_smbus_write_byte_data\0"
	"mutex_unlock\0"
	"msleep\0"
	"jiffies\0"
	"i2c_smbus_read_byte\0"
	"__x86_indirect_thunk_rax\0"
	"devm_kmalloc\0"
	"i2c_new_dummy_device\0"
	"mutex_init_generic\0"
	"sysfs_create_bin_file\0"
	"i2c_del_driver\0"
	"__fentry__\0"
	"i2c_register_driver\0"
	"__x86_return_thunk\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:24lc64t");

MODULE_INFO(srcversion, "6707AB4B25C4AFA2BD83183");
