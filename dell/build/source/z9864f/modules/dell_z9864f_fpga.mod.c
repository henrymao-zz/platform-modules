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
	{ 0xa01ec9a8, "pci_unregister_driver" },
	{ 0x24db4285, "__release_region" },
	{ 0xd272d446, "__fentry__" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xe8213e80, "_printk" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xf006bd2e, "i2c_add_numbered_adapter" },
	{ 0x11e98b2f, "_dev_info" },
	{ 0x9a0286e3, "i2c_del_adapter" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xa84bcbd2, "gpiochip_get_data" },
	{ 0x11e98b2f, "_dev_err" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0x9aa6980d, "mutex_lock" },
	{ 0x97dd6ca9, "ioremap" },
	{ 0xb880fdff, "sysfs_create_group" },
	{ 0x173ec8da, "sscanf" },
	{ 0x2044b429, "ioport_resource" },
	{ 0x11e98b2f, "_dev_warn" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x64595cd1, "kobject_create_and_add" },
	{ 0xb0a3a779, "i2c_add_adapter" },
	{ 0x3961b1b0, "gpiochip_add_data_with_key" },
	{ 0x623d5d8a, "gpiochip_remove" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9aa6980d, "mutex_unlock" },
	{ 0x7abff8bc, "pci_release_regions" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0x2f9595d1, "__kmalloc_cache_noprof" },
	{ 0x23ce2114, "pci_disable_device" },
	{ 0x5a844b26, "__x86_indirect_thunk_r8" },
	{ 0x4944b104, "kmalloc_caches" },
	{ 0x9aa6980d, "mutex_init_generic" },
	{ 0x796a7b86, "kobject_put" },
	{ 0x7e2232fb, "ioread32" },
	{ 0x60f855e0, "pci_enable_device" },
	{ 0xfad8f384, "iowrite32" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0x40a621c5, "snprintf" },
	{ 0x40a621c5, "scnprintf" },
	{ 0xfff3e370, "__pci_register_driver" },
	{ 0x8b48eb5b, "pci_request_regions" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xd1e8213d, "kernel_kobj" },
	{ 0xe63769e7, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xa01ec9a8,
	0x24db4285,
	0xd272d446,
	0x5a844b26,
	0xe8213e80,
	0xbd03ed67,
	0xd272d446,
	0xf006bd2e,
	0x11e98b2f,
	0x9a0286e3,
	0x90a48d82,
	0xa84bcbd2,
	0x11e98b2f,
	0xbd03ed67,
	0x9aa6980d,
	0x97dd6ca9,
	0xb880fdff,
	0x173ec8da,
	0x2044b429,
	0x11e98b2f,
	0xd272d446,
	0x64595cd1,
	0xb0a3a779,
	0x3961b1b0,
	0x623d5d8a,
	0x82fd7238,
	0x9aa6980d,
	0x7abff8bc,
	0xcbae5412,
	0x2f9595d1,
	0x23ce2114,
	0x5a844b26,
	0x4944b104,
	0x9aa6980d,
	0x796a7b86,
	0x7e2232fb,
	0x60f855e0,
	0xfad8f384,
	0xd710adbf,
	0x40a621c5,
	0x40a621c5,
	0xfff3e370,
	0x8b48eb5b,
	0xcb8b6ec6,
	0xd1e8213d,
	0xe63769e7,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"pci_unregister_driver\0"
	"__release_region\0"
	"__fentry__\0"
	"__x86_indirect_thunk_rax\0"
	"_printk\0"
	"__ref_stack_chk_guard\0"
	"__stack_chk_fail\0"
	"i2c_add_numbered_adapter\0"
	"_dev_info\0"
	"i2c_del_adapter\0"
	"__ubsan_handle_out_of_bounds\0"
	"gpiochip_get_data\0"
	"_dev_err\0"
	"random_kmalloc_seed\0"
	"mutex_lock\0"
	"ioremap\0"
	"sysfs_create_group\0"
	"sscanf\0"
	"ioport_resource\0"
	"_dev_warn\0"
	"__x86_return_thunk\0"
	"kobject_create_and_add\0"
	"i2c_add_adapter\0"
	"gpiochip_add_data_with_key\0"
	"gpiochip_remove\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"mutex_unlock\0"
	"pci_release_regions\0"
	"__const_udelay\0"
	"__kmalloc_cache_noprof\0"
	"pci_disable_device\0"
	"__x86_indirect_thunk_r8\0"
	"kmalloc_caches\0"
	"mutex_init_generic\0"
	"kobject_put\0"
	"ioread32\0"
	"pci_enable_device\0"
	"iowrite32\0"
	"__kmalloc_noprof\0"
	"snprintf\0"
	"scnprintf\0"
	"__pci_register_driver\0"
	"pci_request_regions\0"
	"kfree\0"
	"kernel_kobj\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001204d00009C1Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6097E0E70E32B0DE16807E0");
