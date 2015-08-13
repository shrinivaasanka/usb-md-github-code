#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x86983313, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xddb31c39, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x4fa922b7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x88df8758, __VMLINUX_SYMBOL_STR(usb_register_dev) },
	{ 0xafd357b5, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x86c90730, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf23db2b3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf281d0b9, __VMLINUX_SYMBOL_STR(usb_deregister_dev) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x38d9bd9b, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xfaf77004, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x87b5252b, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xb21fdf59, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x1c0fbf42, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x52cd0462, __VMLINUX_SYMBOL_STR(usb_find_interface) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa5436680, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E427A82A49BBF3FE341F473");
