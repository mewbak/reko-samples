// base_offset_return-m68k-linux-gnu-gcc-9_init.c
// Generated by decompiling base_offset_return-m68k-linux-gnu-gcc-9
// using Reko decompiler version 0.9.1.0.

#include "base_offset_return-m68k-linux-gnu-gcc-9_init.h"

// 00000358: void _init()
void _init()
{
	if (globals->dw4012 != 0x00)
		fn000003B4();
	frame_dummy();
	__do_global_ctors_aux();
}
