
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int) ;
 int* VAR_0 ;

__attribute__((used)) static uint32_t FUNC_1(uint32_t* VAR_1, uint32_t VAR_2, uint8_t VAR_3, int32_t VAR_4)
{
  uint32_t VAR_5, VAR_6;
  if (VAR_4 >= 0) {
    VAR_5 = (uint32_t)VAR_4/9;
    VAR_6 = VAR_3 * (VAR_0[VAR_4 - (int32_t)VAR_5*9] + 1);
  } else {
    int32_t VAR_7 = (VAR_4-8)/9;
    VAR_5 = (uint32_t)(64 + VAR_7);
    VAR_6 = VAR_3 * (VAR_0[VAR_4 - VAR_7*9] + 1);
  }
  for (;;) {
    uint32_t VAR_8 = VAR_1[VAR_5] + VAR_6;
    if (FUNC_0(VAR_8 >= 1000000000)) {
      VAR_8 -= 1000000000;
      VAR_1[VAR_5] = VAR_8;
      if (FUNC_0(VAR_5 == VAR_2)) {
 VAR_2 = (VAR_2 + 1) & 0x3f;
 VAR_1[VAR_2] = 1;
 break;
      }
      VAR_6 = 1;
      VAR_5 = (VAR_5 + 1) & 0x3f;
    } else {
      VAR_1[VAR_5] = VAR_8;
      break;
    }
  }
  return VAR_2;
}
