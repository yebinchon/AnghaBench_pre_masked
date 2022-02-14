
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

uint64_t
FUNC_1(const char *VAR_3)
{
 int VAR_4;
 uint64_t VAR_5 = -1ULL;
 const uint8_t *VAR_6 = (const uint8_t *)VAR_3;
 FUNC_0(VAR_2[128] == VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_0 - 1 && *VAR_6; VAR_4++, VAR_6++) {
  VAR_5 = (VAR_5 >> 8) ^ VAR_2[(VAR_5 ^ (*VAR_6)) & 0xFF];
 }
 return (VAR_5);
}
