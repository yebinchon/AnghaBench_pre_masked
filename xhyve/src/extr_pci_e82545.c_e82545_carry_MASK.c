
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;



__attribute__((used)) static uint16_t
FUNC_0(uint32_t VAR_0)
{

 VAR_0 = (VAR_0 & 0xFFFF) + (VAR_0 >> 16);
 if (VAR_0 > 0xFFFF)
  VAR_0 -= 0xFFFF;
 return (uint16_t)VAR_0;
}
