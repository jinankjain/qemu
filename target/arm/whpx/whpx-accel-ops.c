/*
 * QEMU Windows Hypervisor Platform accelerator (WHPX)
 *
 * Copyright Microsoft Corp. 2025
 *
 * This work is licensed under the terms of the GNU GPL, version 2 or later.
 * See the COPYING file in the top-level directory.
 *
 */

#include "qemu/osdep.h"
#include "system/accel-ops.h"

static void whpx_accel_ops_class_init(ObjectClass *oc, void *data)
{
	AccelOpsClass *ops = ACCEL_OPS_CLASS(oc);

	ops->create_vcpu_thread = NULL;
	ops->kick_vcpu_thread = NULL;
	ops->cpu_thread_is_idle = NULL;

	ops->synchronize_post_reset = NULL;
	ops->synchronize_post_init = NULL;
	ops->synchronize_state = NULL;
	ops->synchronize_pre_loadvm = NULL;
	ops->synchronize_pre_resume = NULL;
}

static const TypeInfo whpx_accel_ops_type = {
	.name = ACCEL_OPS_NAME("whpx"),

	.parent = TYPE_ACCEL_OPS,
	.class_init = whpx_accel_ops_class_init,
	.abstract = true,
};

static void whpx_accel_ops_register_types(void)
{
	type_register_static(&whpx_accel_ops_type);
}
type_init(whpx_accel_ops_register_types);