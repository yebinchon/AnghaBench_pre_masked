
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



uint64_t FUNC_0(uint64_t VAR_0, uint64_t VAR_1)
{
  uint64_t VAR_2;
  if (VAR_1 == 0)
    return 1;
  for (; (VAR_1 & 1) == 0; VAR_1 >>= 1) VAR_0 *= VAR_0;
  VAR_2 = VAR_0;
  if ((VAR_1 >>= 1) != 0) {
    for (;;) {
      VAR_0 *= VAR_0;
      if (VAR_1 == 1) break;
      if (VAR_1 & 1) VAR_2 *= VAR_0;
      VAR_1 >>= 1;
    }
    VAR_2 *= VAR_0;
  }
  return VAR_2;
}
