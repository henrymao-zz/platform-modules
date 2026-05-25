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
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x3d9b6811, "platform_get_resource" },
	{ 0x2044b429, "ioport_resource" },
	{ 0x24db4285, "__release_region" },
	{ 0xdd6830c7, "sprintf" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x52ebbba3, "__request_region" },
	{ 0xdc0e35f8, "devm_kmalloc" },
	{ 0x9aa6980d, "mutex_init_generic" },
	{ 0x68b55144, "devm_hwmon_device_register_with_groups" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x11e98b2f, "_dev_err" },
	{ 0x97708cf7, "platform_device_unregister" },
	{ 0x010e724e, "platform_driver_unregister" },
	{ 0x796a7b86, "kobject_put" },
	{ 0x9aa6980d, "mutex_lock" },
	{ 0xdbcae670, "pv_ops" },
	{ 0xd272d446, "BUG_func" },
	{ 0x9aa6980d, "mutex_unlock" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xe8213e80, "_printk" },
	{ 0x8e142c2e, "kstrtouint" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0xd272d446, "dump_stack" },
	{ 0x5e48cf7e, "__platform_driver_register" },
	{ 0x86f58376, "platform_device_alloc" },
	{ 0xcd0ba7b1, "platform_device_add_data" },
	{ 0x4a37b312, "acpi_check_resource_conflict" },
	{ 0xe9a1079f, "platform_device_add_resources" },
	{ 0x66e37015, "platform_device_add" },
	{ 0x97708cf7, "platform_device_put" },
	{ 0xb22d80ed, "param_ops_ushort" },
	{ 0xe63769e7, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd272d446,
	0xd272d446,
	0x3d9b6811,
	0x2044b429,
	0x24db4285,
	0xdd6830c7,
	0x82fd7238,
	0x52ebbba3,
	0xdc0e35f8,
	0x9aa6980d,
	0x68b55144,
	0x90a48d82,
	0x11e98b2f,
	0x97708cf7,
	0x010e724e,
	0x796a7b86,
	0x9aa6980d,
	0xdbcae670,
	0xd272d446,
	0x9aa6980d,
	0xbd03ed67,
	0xd272d446,
	0xe8213e80,
	0x8e142c2e,
	0x30eb81ed,
	0xd272d446,
	0x5e48cf7e,
	0x86f58376,
	0xcd0ba7b1,
	0x4a37b312,
	0xe9a1079f,
	0x66e37015,
	0x97708cf7,
	0xb22d80ed,
	0xe63769e7,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__fentry__\0"
	"__x86_return_thunk\0"
	"platform_get_resource\0"
	"ioport_resource\0"
	"__release_region\0"
	"sprintf\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"__request_region\0"
	"devm_kmalloc\0"
	"mutex_init_generic\0"
	"devm_hwmon_device_register_with_groups\0"
	"__ubsan_handle_out_of_bounds\0"
	"_dev_err\0"
	"platform_device_unregister\0"
	"platform_driver_unregister\0"
	"kobject_put\0"
	"mutex_lock\0"
	"pv_ops\0"
	"BUG_func\0"
	"mutex_unlock\0"
	"__ref_stack_chk_guard\0"
	"__stack_chk_fail\0"
	"_printk\0"
	"kstrtouint\0"
	"__dynamic_pr_debug\0"
	"dump_stack\0"
	"__platform_driver_register\0"
	"platform_device_alloc\0"
	"platform_device_add_data\0"
	"acpi_check_resource_conflict\0"
	"platform_device_add_resources\0"
	"platform_device_add\0"
	"platform_device_put\0"
	"param_ops_ushort\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FC6A4ABC2AB2BE5A93856F2");
