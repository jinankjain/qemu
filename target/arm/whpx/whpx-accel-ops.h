/*
 * Accelerator CPUS Interface
 *
 * Copyright Microsoft Corp. 2025
 *
 * This work is licensed under the terms of the GNU GPL, version 2 or later.
 * See the COPYING file in the top-level directory.
 *
 */

#ifndef TARGET_ARM_WHPX_ACCEL_OPS_H
#define TARGET_ARM_WHPX_ACCEL_OPS_H

#include "system/cpus.h"

int whpx_init_vcpu(CPUState *cpu);
int whpx_vcpu_exec(CPUState *cpu);
void whpx_destroy_vcpu(CPUState *cpu);
void whpx_vcpu_kick(CPUState *cpu);

void whpx_cpu_synchronize_state(CPUState *cpu);
void whpx_cpu_synchronize_post_reset(CPUState *cpu);
void whpx_cpu_synchronize_post_init(CPUState *cpu);
void whpx_cpu_synchronize_pre_loadvm(CPUState *cpu);
void whpx_cpu_synchronize_pre_resume(bool step_pending);

#endif /* TARGET_ARM_WHPX_ACCEL_OPS_H */

