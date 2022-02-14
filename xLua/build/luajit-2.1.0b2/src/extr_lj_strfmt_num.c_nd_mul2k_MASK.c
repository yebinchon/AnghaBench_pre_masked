
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int SFormat ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

__attribute__((used)) static uint32_t FUNC_3(uint32_t* VAR_2, uint32_t VAR_3, uint32_t VAR_4,
    uint32_t VAR_5, SFormat VAR_6)
{
  uint32_t VAR_7, VAR_8 = 0, VAR_9 = 1;

  if (VAR_4 > VAR_0*2 && FUNC_1(VAR_6) != FUNC_1(VAR_1)) {
    VAR_9 = VAR_3 - (FUNC_2(VAR_6) + 17) / 8;
  }

  while (VAR_4 >= VAR_0) {
    for (VAR_7 = VAR_8; VAR_7 <= VAR_3; VAR_7++) {
      uint64_t VAR_10 = ((uint64_t)VAR_2[VAR_7] << VAR_0) | VAR_5;
      VAR_5 = FUNC_0(VAR_10);
      VAR_2[VAR_7] = (uint32_t)VAR_10 - VAR_5 * 1000000000;
    }
    if (VAR_5) {
      VAR_2[++VAR_3] = VAR_5; VAR_5 = 0;
      if(VAR_9++ == VAR_8) ++VAR_8;
    }
    VAR_4 -= VAR_0;
  }
  if (VAR_4) {
    for (VAR_7 = VAR_8; VAR_7 <= VAR_3; VAR_7++) {
      uint64_t VAR_11 = ((uint64_t)VAR_2[VAR_7] << VAR_4) | VAR_5;
      VAR_5 = FUNC_0(VAR_11);
      VAR_2[VAR_7] = (uint32_t)VAR_11 - VAR_5 * 1000000000;
    }
    if (VAR_5) VAR_2[++VAR_3] = VAR_5;
  }
  return VAR_3;
}
