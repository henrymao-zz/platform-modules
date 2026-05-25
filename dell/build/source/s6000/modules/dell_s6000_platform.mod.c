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
	{ 0x11e98b2f, "_dev_err" },
	{ 0xdc0e35f8, "devm_kmalloc" },
	{ 0x434cc184, "i2c_get_adapter" },
	{ 0x22072396, "i2c_mux_alloc" },
	{ 0xd380888f, "i2c_mux_add_adapter" },
	{ 0x11e98b2f, "_dev_info" },
	{ 0x3962fd35, "sysfs_remove_group" },
	{ 0xcaf67bf5, "i2c_unregister_device" },
	{ 0x33234589, "arch_nvram_ops" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xdd6830c7, "sprintf" },
	{ 0xe8213e80, "_printk" },
	{ 0x830d084d, "i2c_new_dummy_device" },
	{ 0xb880fdff, "sysfs_create_group" },
	{ 0x3ac04553, "gpiod_remove_lookup_table" },
	{ 0x97708cf7, "platform_device_unregister" },
	{ 0x010e724e, "platform_driver_unregister" },
	{ 0xebe5da4a, "gpio_free" },
	{ 0xcb1ae4c5, "gpio_to_desc" },
	{ 0x67433172, "gpiod_set_raw_value" },
	{ 0x76a97ac1, "gpio_request" },
	{ 0x32fbb7fb, "gpiod_export" },
	{ 0x67433172, "gpiod_direction_output_raw" },
	{ 0x3ac04553, "gpiod_add_lookup_table" },
	{ 0x5e48cf7e, "__platform_driver_register" },
	{ 0x66e37015, "platform_device_register" },
	{ 0x13fc0be3, "i2c_smbus_write_byte_data" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xbd069841, "kstrtoull" },
	{ 0x67628f51, "msleep" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x21faa789, "i2c_smbus_read_byte_data" },
	{ 0x2435d559, "strncmp" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x975db0f2, "i2c_mux_del_adapters" },
	{ 0x9a0286e3, "i2c_put_adapter" },
	{ 0xe63769e7, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x11e98b2f,
	0xdc0e35f8,
	0x434cc184,
	0x22072396,
	0xd380888f,
	0x11e98b2f,
	0x3962fd35,
	0xcaf67bf5,
	0x33234589,
	0x5a844b26,
	0xdd6830c7,
	0xe8213e80,
	0x830d084d,
	0xb880fdff,
	0x3ac04553,
	0x97708cf7,
	0x010e724e,
	0xebe5da4a,
	0xcb1ae4c5,
	0x67433172,
	0x76a97ac1,
	0x32fbb7fb,
	0x67433172,
	0x3ac04553,
	0x5e48cf7e,
	0x66e37015,
	0x13fc0be3,
	0xbd03ed67,
	0xbd069841,
	0x67628f51,
	0xd272d446,
	0x82fd7238,
	0x21faa789,
	0x2435d559,
	0xd272d446,
	0xd272d446,
	0x975db0f2,
	0x9a0286e3,
	0xe63769e7,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_dev_err\0"
	"devm_kmalloc\0"
	"i2c_get_adapter\0"
	"i2c_mux_alloc\0"
	"i2c_mux_add_adapter\0"
	"_dev_info\0"
	"sysfs_remove_group\0"
	"i2c_unregister_device\0"
	"arch_nvram_ops\0"
	"__x86_indirect_thunk_rax\0"
	"sprintf\0"
	"_printk\0"
	"i2c_new_dummy_device\0"
	"sysfs_create_group\0"
	"gpiod_remove_lookup_table\0"
	"platform_device_unregister\0"
	"platform_driver_unregister\0"
	"gpio_free\0"
	"gpio_to_desc\0"
	"gpiod_set_raw_value\0"
	"gpio_request\0"
	"gpiod_export\0"
	"gpiod_direction_output_raw\0"
	"gpiod_add_lookup_table\0"
	"__platform_driver_register\0"
	"platform_device_register\0"
	"i2c_smbus_write_byte_data\0"
	"__ref_stack_chk_guard\0"
	"kstrtoull\0"
	"msleep\0"
	"__stack_chk_fail\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"i2c_smbus_read_byte_data\0"
	"strncmp\0"
	"__fentry__\0"
	"__x86_return_thunk\0"
	"i2c_mux_del_adapters\0"
	"i2c_put_adapter\0"
	"module_layout\0"
;

MODULE_INFO(depends, "i2c-mux,nvram");


MODULE_INFO(srcversion, "C09C77D490790A3A1039AA4");
