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
	{ 0x770e1c57, "i2c_del_driver" },
	{ 0xf63fdc2c, "irq_domain_simple_ops" },
	{ 0xac73b9c2, "irq_domain_instantiate" },
	{ 0x3ef430b3, "irq_dispose_mapping" },
	{ 0x2423db03, "irq_domain_remove" },
	{ 0x975db0f2, "i2c_mux_del_adapters" },
	{ 0x44d423ec, "device_remove_file" },
	{ 0x3c0463cf, "i2c_client_get_device_id" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x22072396, "i2c_mux_alloc" },
	{ 0x563fda10, "devm_gpiod_get_optional" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0x67433172, "gpiod_set_value_cansleep" },
	{ 0xbe64e40c, "device_get_match_data" },
	{ 0x514178f3, "i2c_get_device_id" },
	{ 0x8cd64a0c, "device_property_read_u32_array" },
	{ 0x9db3ba67, "i2c_smbus_write_byte" },
	{ 0xbf7cf3d9, "irq_create_mapping_affinity" },
	{ 0x44339294, "irq_set_chip_data" },
	{ 0xa88697c5, "handle_simple_irq" },
	{ 0x8551921f, "irq_set_chip_and_handler_name" },
	{ 0xd380888f, "i2c_mux_add_adapter" },
	{ 0x5bf4dd64, "device_property_read_bool" },
	{ 0xa2d06893, "devm_request_threaded_irq" },
	{ 0x81917f9f, "device_create_file" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x11e98b2f, "_dev_info" },
	{ 0x11e98b2f, "_dev_warn" },
	{ 0x11e98b2f, "_dev_err" },
	{ 0x382f1e81, "__i2c_smbus_xfer" },
	{ 0xd09b06f5, "kstrtoint" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x96f1dad9, "i2c_register_driver" },
	{ 0xdd6830c7, "sprintf" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x98168334, "i2c_smbus_read_byte" },
	{ 0xeb7fd1dd, "__irq_resolve_mapping" },
	{ 0x8e3336dd, "handle_nested_irq" },
	{ 0x86632fd6, "_find_next_bit" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe63769e7, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x770e1c57,
	0xf63fdc2c,
	0xac73b9c2,
	0x3ef430b3,
	0x2423db03,
	0x975db0f2,
	0x44d423ec,
	0x3c0463cf,
	0x5a844b26,
	0x22072396,
	0x563fda10,
	0xcbae5412,
	0x67433172,
	0xbe64e40c,
	0x514178f3,
	0x8cd64a0c,
	0x9db3ba67,
	0xbf7cf3d9,
	0x44339294,
	0xa88697c5,
	0x8551921f,
	0xd380888f,
	0x5bf4dd64,
	0xa2d06893,
	0x81917f9f,
	0x90a48d82,
	0x11e98b2f,
	0x11e98b2f,
	0x11e98b2f,
	0x382f1e81,
	0xd09b06f5,
	0xd272d446,
	0xd272d446,
	0x96f1dad9,
	0xdd6830c7,
	0xbd03ed67,
	0x98168334,
	0xeb7fd1dd,
	0x8e3336dd,
	0x86632fd6,
	0xd272d446,
	0x82fd7238,
	0xe63769e7,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"i2c_del_driver\0"
	"irq_domain_simple_ops\0"
	"irq_domain_instantiate\0"
	"irq_dispose_mapping\0"
	"irq_domain_remove\0"
	"i2c_mux_del_adapters\0"
	"device_remove_file\0"
	"i2c_client_get_device_id\0"
	"__x86_indirect_thunk_rax\0"
	"i2c_mux_alloc\0"
	"devm_gpiod_get_optional\0"
	"__const_udelay\0"
	"gpiod_set_value_cansleep\0"
	"device_get_match_data\0"
	"i2c_get_device_id\0"
	"device_property_read_u32_array\0"
	"i2c_smbus_write_byte\0"
	"irq_create_mapping_affinity\0"
	"irq_set_chip_data\0"
	"handle_simple_irq\0"
	"irq_set_chip_and_handler_name\0"
	"i2c_mux_add_adapter\0"
	"device_property_read_bool\0"
	"devm_request_threaded_irq\0"
	"device_create_file\0"
	"__ubsan_handle_out_of_bounds\0"
	"_dev_info\0"
	"_dev_warn\0"
	"_dev_err\0"
	"__i2c_smbus_xfer\0"
	"kstrtoint\0"
	"__fentry__\0"
	"__x86_return_thunk\0"
	"i2c_register_driver\0"
	"sprintf\0"
	"__ref_stack_chk_guard\0"
	"i2c_smbus_read_byte\0"
	"__irq_resolve_mapping\0"
	"handle_nested_irq\0"
	"_find_next_bit\0"
	"__stack_chk_fail\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"module_layout\0"
;

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Cnxp,cls_pca9540");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9540C*");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9542");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9542C*");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9543");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9543C*");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9544");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9544C*");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9545");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9545C*");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9546");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9546C*");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9547");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9547C*");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9548");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9548C*");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9846");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9846C*");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9847");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9847C*");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9848");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9848C*");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9849");
MODULE_ALIAS("of:N*T*Cnxp,cls_pca9849C*");
MODULE_ALIAS("i2c:cls_pca9540");
MODULE_ALIAS("i2c:cls_pca9542");
MODULE_ALIAS("i2c:cls_pca9543");
MODULE_ALIAS("i2c:cls_pca9544");
MODULE_ALIAS("i2c:cls_pca9545");
MODULE_ALIAS("i2c:cls_pca9546");
MODULE_ALIAS("i2c:cls_pca9547");
MODULE_ALIAS("i2c:cls_pca9548");
MODULE_ALIAS("i2c:cls_pca9846");
MODULE_ALIAS("i2c:cls_pca9847");
MODULE_ALIAS("i2c:cls_pca9848");
MODULE_ALIAS("i2c:cls_pca9849");

MODULE_INFO(srcversion, "CBBE070A2AA25CA65A1CCFD");
