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
	{ 0x01da6614, "iowrite8" },
	{ 0x9a0286e3, "i2c_del_adapter" },
	{ 0xdf1c4a30, "pci_disable_msi" },
	{ 0xda19e8e5, "pci_iounmap" },
	{ 0x23ce2114, "pci_disable_device" },
	{ 0x7abff8bc, "pci_release_regions" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x9dd4105e, "free_irq" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x4944b104, "kmalloc_caches" },
	{ 0x2f9595d1, "__kmalloc_cache_noprof" },
	{ 0x60f855e0, "pci_enable_device" },
	{ 0x23ce2114, "pci_set_master" },
	{ 0x8b48eb5b, "pci_request_regions" },
	{ 0x97dd6ca9, "ioremap" },
	{ 0xe8213e80, "_printk" },
	{ 0x0e9cab28, "memset" },
	{ 0x9aa6980d, "mutex_init_generic" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xdd6830c7, "sprintf" },
	{ 0xf006bd2e, "i2c_add_numbered_adapter" },
	{ 0xccbd34ad, "pci_find_capability" },
	{ 0x645c367a, "pci_msi_vec_count" },
	{ 0xf18d1e55, "pci_alloc_irq_vectors" },
	{ 0x9126ce86, "request_threaded_irq" },
	{ 0x5f2687e1, "pci_read_config_word" },
	{ 0xd6470c7d, "pci_write_config_word" },
	{ 0xe804603d, "__init_waitqueue_head" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0x68a1b6c6, "__wake_up" },
	{ 0x058c185a, "jiffies" },
	{ 0x9aa6980d, "mutex_lock" },
	{ 0x5a844b26, "__x86_indirect_thunk_r8" },
	{ 0x9aa6980d, "mutex_unlock" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0xc281f1fb, "prepare_to_wait_event" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0xb730487b, "finish_wait" },
	{ 0xb22d80ed, "param_ops_int" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xfff3e370, "__pci_register_driver" },
	{ 0xa01ec9a8, "pci_unregister_driver" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0xfad8f384, "iowrite32" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7e2232fb, "ioread32" },
	{ 0x7e2232fb, "ioread16" },
	{ 0xa442ce88, "iowrite16" },
	{ 0x7e2232fb, "ioread8" },
	{ 0xe63769e7, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x01da6614,
	0x9a0286e3,
	0xdf1c4a30,
	0xda19e8e5,
	0x23ce2114,
	0x7abff8bc,
	0xcb8b6ec6,
	0x9dd4105e,
	0x90a48d82,
	0xbd03ed67,
	0xbd03ed67,
	0x4944b104,
	0x2f9595d1,
	0x60f855e0,
	0x23ce2114,
	0x8b48eb5b,
	0x97dd6ca9,
	0xe8213e80,
	0x0e9cab28,
	0x9aa6980d,
	0xd272d446,
	0xdd6830c7,
	0xf006bd2e,
	0xccbd34ad,
	0x645c367a,
	0xf18d1e55,
	0x9126ce86,
	0x5f2687e1,
	0xd6470c7d,
	0xe804603d,
	0x5a844b26,
	0x68a1b6c6,
	0x058c185a,
	0x9aa6980d,
	0x5a844b26,
	0x9aa6980d,
	0x0feb1e94,
	0x7851be11,
	0x7a5ffe84,
	0xc281f1fb,
	0x6ac784f4,
	0xb730487b,
	0xb22d80ed,
	0xd272d446,
	0xd272d446,
	0xfff3e370,
	0xa01ec9a8,
	0x5a844b26,
	0xcbae5412,
	0xfad8f384,
	0x82fd7238,
	0x7e2232fb,
	0x7e2232fb,
	0xa442ce88,
	0x7e2232fb,
	0xe63769e7,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"iowrite8\0"
	"i2c_del_adapter\0"
	"pci_disable_msi\0"
	"pci_iounmap\0"
	"pci_disable_device\0"
	"pci_release_regions\0"
	"kfree\0"
	"free_irq\0"
	"__ubsan_handle_out_of_bounds\0"
	"random_kmalloc_seed\0"
	"__ref_stack_chk_guard\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"pci_enable_device\0"
	"pci_set_master\0"
	"pci_request_regions\0"
	"ioremap\0"
	"_printk\0"
	"memset\0"
	"mutex_init_generic\0"
	"__stack_chk_fail\0"
	"sprintf\0"
	"i2c_add_numbered_adapter\0"
	"pci_find_capability\0"
	"pci_msi_vec_count\0"
	"pci_alloc_irq_vectors\0"
	"request_threaded_irq\0"
	"pci_read_config_word\0"
	"pci_write_config_word\0"
	"__init_waitqueue_head\0"
	"__x86_indirect_thunk_rcx\0"
	"__wake_up\0"
	"jiffies\0"
	"mutex_lock\0"
	"__x86_indirect_thunk_r8\0"
	"mutex_unlock\0"
	"usleep_range_state\0"
	"__SCT__might_resched\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"param_ops_int\0"
	"__fentry__\0"
	"__x86_return_thunk\0"
	"__pci_register_driver\0"
	"pci_unregister_driver\0"
	"__x86_indirect_thunk_rax\0"
	"__const_udelay\0"
	"iowrite32\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"ioread32\0"
	"ioread16\0"
	"iowrite16\0"
	"ioread8\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010EEd00007021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001172d00000004sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "993C5CA23054016B90183CF");
