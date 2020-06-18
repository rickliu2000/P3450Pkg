#include <Library/BaseLib.h>
#include <Library/IoLib.h>
#include <Library/PrintLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/TimerLib.h>
#include <Library/CacheMaintenanceLib.h>
#include <Library/ArmLib.h>

#define write8(memAddr, value) MmioWrite8((UINTN)memAddr, (UINT8)value)
#define read8(memAddr) MmioRead8((UINTN)memAddr)
