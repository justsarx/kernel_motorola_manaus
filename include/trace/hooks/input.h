/* SPDX-License-Identifier: GPL-2.0 */
#undef TRACE_SYSTEM
#define TRACE_SYSTEM input
#undef TRACE_INCLUDE_PATH
#define TRACE_INCLUDE_PATH trace/hooks
#if !defined(_TRACE_HOOK_INPUT_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_HOOK_INPUT_H
#include <linux/types.h>
#include <trace/hooks/vendor_hooks.h>

struct input_dev;

DECLARE_HOOK(android_vh_input_sync,
	TP_PROTO(struct input_dev *dev),
	TP_ARGS(dev));

#endif
#include <trace/define_trace.h>
