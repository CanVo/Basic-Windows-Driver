#pragma once

// Use DbgPrintEx to print when debugging through VM with VirtualKD-Redux.
#define DebugMessage(x, ...) DbgPrintEx(DPFLTR_IHVDRIVER_ID, DPFLTR_ERROR_LEVEL, x, __VA_ARGS__);