
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef void* uint16_t ;
struct smbios_entry_point {void* echecksum; void* ichecksum; void* stnum; void* stlen; void* maxssize; } ;



__attribute__((used)) static void
FUNC_0(struct smbios_entry_point *VAR_0, uint16_t VAR_1,
    uint16_t VAR_2, uint16_t VAR_3)
{
 uint8_t VAR_4;
 int VAR_5;

 VAR_0->maxssize = VAR_3;
 VAR_0->stlen = VAR_1;
 VAR_0->stnum = VAR_2;

 VAR_4 = 0;
 for (VAR_5 = 0x10; VAR_5 < 0x1f; VAR_5++) {
  VAR_4 -= ((uint8_t *)VAR_0)[VAR_5];
 }
 VAR_0->ichecksum = VAR_4;

 VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < 0x1f; VAR_5++) {
  VAR_4 -= ((uint8_t *)VAR_0)[VAR_5];
 }
 VAR_0->echecksum = VAR_4;
}
