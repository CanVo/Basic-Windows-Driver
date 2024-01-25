#include "driver.h"
#include "debug.h"


// If using KDMapper to load this Driver, we'll need to restart PC to unload it.
// https://www.unknowncheats.me/forum/anti-cheat-bypass/404887-driver-unload-communication.html

NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverOjbect, PUNICODE_STRING pRegistryPath)
{
	UNREFERENCED_PARAMETER(pDriverOjbect);
	UNREFERENCED_PARAMETER(pRegistryPath);

	DebugMessage("[+] DriverEntry executed successfully!\n");

	return STATUS_SUCCESS;
}