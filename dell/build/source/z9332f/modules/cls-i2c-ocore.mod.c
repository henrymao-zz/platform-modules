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
	{ 0xfad8f384, "iowrite32" },
	{ 0xfad8f384, "iowrite32be" },
	{ 0x7e2232fb, "ioread16" },
	{ 0x7e2232fb, "ioread16be" },
	{ 0xa442ce88, "iowrite16" },
	{ 0xa442ce88, "iowrite16be" },
	{ 0x7e2232fb, "ioread8" },
	{ 0x01da6614, "iowrite8" },
	{ 0x010e724e, "platform_driver_unregister" },
	{ 0xdc0e35f8, "devm_kmalloc" },
	{ 0x3d9b6811, "platform_get_resource" },
	{ 0x86214c08, "devm_ioremap_resource" },
	{ 0xe804603d, "__init_waitqueue_head" },
	{ 0xd0a586c3, "platform_get_irq_optional" },
	{ 0xa2d06893, "devm_request_threaded_irq" },
	{ 0xb0a3a779, "i2c_add_adapter" },
	{ 0xc3a75456, "i2c_new_client_device" },
	{ 0x2044b429, "ioport_resource" },
	{ 0xd4f6c17a, "__devm_request_region" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0xa96d32ba, "__udelay" },
	{ 0x058c185a, "jiffies" },
	{ 0x7851be11, "__SCT__cond_resched" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0xc281f1fb, "prepare_to_wait_event" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0xb730487b, "finish_wait" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x11e98b2f, "_dev_warn" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x5e48cf7e, "__platform_driver_register" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x11e98b2f, "_dev_info" },
	{ 0x11e98b2f, "_dev_err" },
	{ 0xd8b288f3, "clk_prepare" },
	{ 0xd8b288f3, "clk_enable" },
	{ 0xa0928e7c, "clk_get_rate" },
	{ 0x33d0c686, "clk_unprepare" },
	{ 0x33d0c686, "clk_disable" },
	{ 0x9a0286e3, "i2c_del_adapter" },
	{ 0x31b85143, "__dynamic_dev_dbg" },
	{ 0x11f4259a, "_raw_spin_lock_irqsave" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0x444885a7, "_raw_spin_unlock_irqrestore" },
	{ 0x68a1b6c6, "__wake_up" },
	{ 0xd272d446, "dump_stack" },
	{ 0x7e2232fb, "ioread32" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7e2232fb, "ioread32be" },
	{ 0xe63769e7, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xfad8f384,
	0xfad8f384,
	0x7e2232fb,
	0x7e2232fb,
	0xa442ce88,
	0xa442ce88,
	0x7e2232fb,
	0x01da6614,
	0x010e724e,
	0xdc0e35f8,
	0x3d9b6811,
	0x86214c08,
	0xe804603d,
	0xd0a586c3,
	0xa2d06893,
	0xb0a3a779,
	0xc3a75456,
	0x2044b429,
	0xd4f6c17a,
	0xe4de56b4,
	0xbd03ed67,
	0x7851be11,
	0xa96d32ba,
	0x058c185a,
	0x7851be11,
	0x7a5ffe84,
	0xc281f1fb,
	0x6ac784f4,
	0xb730487b,
	0xd272d446,
	0x11e98b2f,
	0xd272d446,
	0xd272d446,
	0x5e48cf7e,
	0x5a844b26,
	0x11e98b2f,
	0x11e98b2f,
	0xd8b288f3,
	0xd8b288f3,
	0xa0928e7c,
	0x33d0c686,
	0x33d0c686,
	0x9a0286e3,
	0x31b85143,
	0x11f4259a,
	0x5a844b26,
	0x444885a7,
	0x68a1b6c6,
	0xd272d446,
	0x7e2232fb,
	0x82fd7238,
	0x7e2232fb,
	0xe63769e7,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"iowrite32\0"
	"iowrite32be\0"
	"ioread16\0"
	"ioread16be\0"
	"iowrite16\0"
	"iowrite16be\0"
	"ioread8\0"
	"iowrite8\0"
	"platform_driver_unregister\0"
	"devm_kmalloc\0"
	"platform_get_resource\0"
	"devm_ioremap_resource\0"
	"__init_waitqueue_head\0"
	"platform_get_irq_optional\0"
	"devm_request_threaded_irq\0"
	"i2c_add_adapter\0"
	"i2c_new_client_device\0"
	"ioport_resource\0"
	"__devm_request_region\0"
	"__ubsan_handle_load_invalid_value\0"
	"__ref_stack_chk_guard\0"
	"__SCT__might_resched\0"
	"__udelay\0"
	"jiffies\0"
	"__SCT__cond_resched\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"__stack_chk_fail\0"
	"_dev_warn\0"
	"__fentry__\0"
	"__x86_return_thunk\0"
	"__platform_driver_register\0"
	"__x86_indirect_thunk_rax\0"
	"_dev_info\0"
	"_dev_err\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_get_rate\0"
	"clk_unprepare\0"
	"clk_disable\0"
	"i2c_del_adapter\0"
	"__dynamic_dev_dbg\0"
	"_raw_spin_lock_irqsave\0"
	"__x86_indirect_thunk_rcx\0"
	"_raw_spin_unlock_irqrestore\0"
	"__wake_up\0"
	"dump_stack\0"
	"ioread32\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"ioread32be\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Copencores,i2c-ocores");
MODULE_ALIAS("of:N*T*Copencores,i2c-ocoresC*");
MODULE_ALIAS("of:N*T*Caeroflexgaisler,i2cmst");
MODULE_ALIAS("of:N*T*Caeroflexgaisler,i2cmstC*");

MODULE_INFO(srcversion, "43E7512F1658919EF2FD578");
