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
	{ 0x5ac9bae1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2e869182, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x6136324d, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xffa03c9c, __VMLINUX_SYMBOL_STR(usb_register_dev) },
	{ 0x748f340f, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x702984bb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x649c402a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb6e689a5, __VMLINUX_SYMBOL_STR(usb_deregister_dev) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xe17d9a0, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xf44bd30a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x506f98a3, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xc00e31c7, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x79926ef, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa8697168, __VMLINUX_SYMBOL_STR(usb_find_interface) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6f98ecc6, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E427A82A49BBF3FE341F473");
