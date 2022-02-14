
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;
typedef int SFormat ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static uint32_t FUNC_4(uint32_t* VAR_1, uint32_t VAR_2, uint32_t VAR_3, SFormat VAR_4)
{
  uint32_t VAR_5 = 0, VAR_6 = ~0, VAR_7 = ~0;

  if (!VAR_2) {
    if (!VAR_1[0]) {
      return 0;
    } else {
      uint32_t VAR_8 = FUNC_2(VAR_1[0]);
      if (VAR_8 >= VAR_3) { VAR_1[0] >>= VAR_3; return 0; }
      VAR_1[0] >>= VAR_8; VAR_3 -= VAR_8;
    }
  }
  if (VAR_3 > 18) {
    if (FUNC_0(VAR_4) == FUNC_0(VAR_0)) {
      VAR_6 = 63 - (int32_t)FUNC_1(VAR_4) / 9;
    } else {
      int32_t VAR_9 = VAR_2 * 29 + FUNC_3(VAR_1[VAR_2]) - VAR_3;
      int32_t VAR_10 = (int32_t)(VAR_9 * 0.30102999566398114);
      VAR_6 = 62 + (VAR_10 - (int32_t)FUNC_1(VAR_4)) / 9;
      VAR_7 = 61 + VAR_2 - (int32_t)FUNC_1(VAR_4) / 8;
    }
  }

  while (VAR_3 >= 9) {
    uint32_t VAR_11 = VAR_2, VAR_12 = 0;
    for (;;) {
      uint32_t VAR_13 = VAR_1[VAR_11];
      VAR_1[VAR_11] = (VAR_13 >> 9) + VAR_12;
      VAR_12 = (VAR_13 & 0x1ff) * 1953125;
      if (VAR_11 == VAR_5) break;
      VAR_11 = (VAR_11 - 1) & 0x3f;
    }
    if (VAR_5 != VAR_6 && VAR_5 != VAR_7) {
      if (VAR_12) { VAR_5 = (VAR_5 - 1) & 0x3f; VAR_1[VAR_5] = VAR_12; }
      if (!VAR_1[VAR_2]) { VAR_2 = (VAR_2 - 1) & 0x3f; VAR_7--; }
    } else if (!VAR_1[VAR_2]) {
      if (VAR_2 != VAR_5) { VAR_2 = (VAR_2 - 1) & 0x3f; VAR_7--; }
      else return VAR_5;
    }
    VAR_3 -= 9;
  }
  if (VAR_3) {
    uint32_t VAR_14 = (1U << VAR_3) - 1, VAR_15 = 1000000000 >> VAR_3, VAR_16 = VAR_2, VAR_17 = 0;
    for (;;) {
      uint32_t VAR_18 = VAR_1[VAR_16];
      VAR_1[VAR_16] = (VAR_18 >> VAR_3) + VAR_17;
      VAR_17 = (VAR_18 & VAR_14) * VAR_15;
      if (VAR_16 == VAR_5) break;
      VAR_16 = (VAR_16 - 1) & 0x3f;
    }
    if (VAR_17) { VAR_5 = (VAR_5 - 1) & 0x3f; VAR_1[VAR_5] = VAR_17; }
  }
  return VAR_5;
}
