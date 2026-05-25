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
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xdd6830c7, "sprintf" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0x4944b104, "kmalloc_caches" },
	{ 0x2f9595d1, "__kmalloc_cache_noprof" },
	{ 0x9aa6980d, "mutex_init_generic" },
	{ 0x81917f9f, "device_create_file" },
	{ 0xc2862676, "hwmon_device_register" },
	{ 0x11e98b2f, "_dev_info" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x1f55c5b2, "kstrtoll" },
	{ 0x13fc0be3, "i2c_smbus_write_byte_data" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x31b85143, "__dynamic_dev_dbg" },
	{ 0xd272d446, "dump_stack" },
	{ 0xbd069841, "kstrtoull" },
	{ 0xd272d446, "__fentry__" },
	{ 0x96f1dad9, "i2c_register_driver" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x86f778f5, "hwmon_device_unregister" },
	{ 0x44d423ec, "device_remove_file" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x770e1c57, "i2c_del_driver" },
	{ 0x21faa789, "i2c_smbus_read_byte_data" },
	{ 0x11e98b2f, "_dev_warn" },
	{ 0x9aa6980d, "mutex_lock" },
	{ 0x058c185a, "jiffies" },
	{ 0x9aa6980d, "mutex_unlock" },
	{ 0xe63769e7, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe4de56b4,
	0xdd6830c7,
	0x5a844b26,
	0xbd03ed67,
	0x4944b104,
	0x2f9595d1,
	0x9aa6980d,
	0x81917f9f,
	0xc2862676,
	0x11e98b2f,
	0xbd03ed67,
	0x1f55c5b2,
	0x13fc0be3,
	0xd272d446,
	0x31b85143,
	0xd272d446,
	0xbd069841,
	0xd272d446,
	0x96f1dad9,
	0xd272d446,
	0x86f778f5,
	0x44d423ec,
	0xcb8b6ec6,
	0x90a48d82,
	0x770e1c57,
	0x21faa789,
	0x11e98b2f,
	0x9aa6980d,
	0x058c185a,
	0x9aa6980d,
	0xe63769e7,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__ubsan_handle_load_invalid_value\0"
	"sprintf\0"
	"__x86_indirect_thunk_rax\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"mutex_init_generic\0"
	"device_create_file\0"
	"hwmon_device_register\0"
	"_dev_info\0"
	"__ref_stack_chk_guard\0"
	"kstrtoll\0"
	"i2c_smbus_write_byte_data\0"
	"__stack_chk_fail\0"
	"__dynamic_dev_dbg\0"
	"dump_stack\0"
	"kstrtoull\0"
	"__fentry__\0"
	"i2c_register_driver\0"
	"__x86_return_thunk\0"
	"hwmon_device_unregister\0"
	"device_remove_file\0"
	"kfree\0"
	"__ubsan_handle_out_of_bounds\0"
	"i2c_del_driver\0"
	"i2c_smbus_read_byte_data\0"
	"_dev_warn\0"
	"mutex_lock\0"
	"jiffies\0"
	"mutex_unlock\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:emc2305");
MODULE_ALIAS("i2c:emc2303");
MODULE_ALIAS("i2c:emc2302");
MODULE_ALIAS("i2c:emc2301");

MODULE_INFO(srcversion, "0CF0E8D4345AFA9262354FB");
