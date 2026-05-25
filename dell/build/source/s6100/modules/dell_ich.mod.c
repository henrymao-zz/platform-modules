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
	{ 0xb22d80ed, "param_ops_ushort" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x2b398cf7, "sysfs_notify" },
	{ 0x2044b429, "ioport_resource" },
	{ 0x24db4285, "__release_region" },
	{ 0x12ad300e, "iounmap" },
	{ 0xe4515451, "acpi_remove_sci_handler" },
	{ 0x2044b429, "iomem_resource" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xe8213e80, "_printk" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xbd069841, "kstrtoull" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xdd6830c7, "sprintf" },
	{ 0x97708cf7, "platform_device_unregister" },
	{ 0x010e724e, "platform_driver_unregister" },
	{ 0x796a7b86, "kobject_put" },
	{ 0xbcf9da3b, "acpi_install_sci_handler" },
	{ 0xa8f32568, "pci_get_device" },
	{ 0xd4c498fb, "pci_read_config_dword" },
	{ 0x4a37b312, "acpi_check_resource_conflict" },
	{ 0x52ebbba3, "__request_region" },
	{ 0xb880fdff, "sysfs_create_group" },
	{ 0x97dd6ca9, "ioremap" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0xd272d446, "dump_stack" },
	{ 0x5e48cf7e, "__platform_driver_register" },
	{ 0x86f58376, "platform_device_alloc" },
	{ 0xcd0ba7b1, "platform_device_add_data" },
	{ 0x66e37015, "platform_device_add" },
	{ 0x97708cf7, "platform_device_put" },
	{ 0xe63769e7, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xb22d80ed,
	0xd272d446,
	0xd272d446,
	0x2b398cf7,
	0x2044b429,
	0x24db4285,
	0x12ad300e,
	0xe4515451,
	0x2044b429,
	0x90a48d82,
	0xe8213e80,
	0xbd03ed67,
	0xbd069841,
	0xd272d446,
	0xdd6830c7,
	0x97708cf7,
	0x010e724e,
	0x796a7b86,
	0xbcf9da3b,
	0xa8f32568,
	0xd4c498fb,
	0x4a37b312,
	0x52ebbba3,
	0xb880fdff,
	0x97dd6ca9,
	0x30eb81ed,
	0xd272d446,
	0x5e48cf7e,
	0x86f58376,
	0xcd0ba7b1,
	0x66e37015,
	0x97708cf7,
	0xe63769e7,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"param_ops_ushort\0"
	"__fentry__\0"
	"__x86_return_thunk\0"
	"sysfs_notify\0"
	"ioport_resource\0"
	"__release_region\0"
	"iounmap\0"
	"acpi_remove_sci_handler\0"
	"iomem_resource\0"
	"__ubsan_handle_out_of_bounds\0"
	"_printk\0"
	"__ref_stack_chk_guard\0"
	"kstrtoull\0"
	"__stack_chk_fail\0"
	"sprintf\0"
	"platform_device_unregister\0"
	"platform_driver_unregister\0"
	"kobject_put\0"
	"acpi_install_sci_handler\0"
	"pci_get_device\0"
	"pci_read_config_dword\0"
	"acpi_check_resource_conflict\0"
	"__request_region\0"
	"sysfs_create_group\0"
	"ioremap\0"
	"__dynamic_pr_debug\0"
	"dump_stack\0"
	"__platform_driver_register\0"
	"platform_device_alloc\0"
	"platform_device_add_data\0"
	"platform_device_add\0"
	"platform_device_put\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BDF20CFFE2A3102429DFA81");
