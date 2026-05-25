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
	{ 0x97708cf7, "platform_device_unregister" },
	{ 0x23ce2114, "pci_disable_device" },
	{ 0xa01ec9a8, "pci_unregister_driver" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x60f855e0, "pci_enable_device" },
	{ 0xdc0e35f8, "devm_kmalloc" },
	{ 0x66648a76, "platform_device_register_full" },
	{ 0x31b85143, "__dynamic_dev_dbg" },
	{ 0x11e98b2f, "_dev_err" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xd272d446, "dump_stack" },
	{ 0xd272d446, "__fentry__" },
	{ 0xfff3e370, "__pci_register_driver" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xe63769e7, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x97708cf7,
	0x23ce2114,
	0xa01ec9a8,
	0xbd03ed67,
	0x60f855e0,
	0xdc0e35f8,
	0x66648a76,
	0x31b85143,
	0x11e98b2f,
	0x90a48d82,
	0xd272d446,
	0xd272d446,
	0xd272d446,
	0xfff3e370,
	0xd272d446,
	0xe63769e7,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"platform_device_unregister\0"
	"pci_disable_device\0"
	"pci_unregister_driver\0"
	"__ref_stack_chk_guard\0"
	"pci_enable_device\0"
	"devm_kmalloc\0"
	"platform_device_register_full\0"
	"__dynamic_dev_dbg\0"
	"_dev_err\0"
	"__ubsan_handle_out_of_bounds\0"
	"__stack_chk_fail\0"
	"dump_stack\0"
	"__fentry__\0"
	"__pci_register_driver\0"
	"__x86_return_thunk\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010EEd00007021sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "808148F0D3DD5D3F8B2FB01");
