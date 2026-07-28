/* SPDX-License-Identifier: GPL-2.0 */
#undef TRACE_SYSTEM
#define TRACE_SYSTEM gpu
#undef TRACE_INCLUDE_PATH
#define TRACE_INCLUDE_PATH trace/hooks
#if !defined(_TRACE_HOOK_GPU_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_HOOK_GPU_H
#include <linux/tracepoint.h>
#include <linux/types.h>
#include <trace/hooks/vendor_hooks.h>

DECLARE_HOOK(android_vh_gpu_context_create,
	TP_PROTO(unsigned int flags),
	TP_ARGS(flags));

#endif
#include <trace/define_trace.h>
