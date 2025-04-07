/*
 * QEMU Windows Hypervisor Platform accelerator (WHPX)
 *
 * Copyright Microsoft Corp. 2025
 *
 * This work is licensed under the terms of the GNU GPL, version 2 or later.
 * See the COPYING file in the top-level directory.
 *
 */

#ifndef TARGET_ARM_WHPX_INTERNAL_H
#define TARGET_ARM_WHPX_INTERNAL_H

#include <windows.h>
#include <winhvplatform.h>
#include <winhvemulation.h>


struct whpx_state {
        uint64_t mem_quota;
};

#endif /* TARGET_ARM_WHPX_INTERNAL_H */