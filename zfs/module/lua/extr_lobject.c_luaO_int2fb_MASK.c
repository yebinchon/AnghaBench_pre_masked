
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;

int FUNC_1 (unsigned int VAR_0) {
  int VAR_1 = 0;
  if (VAR_0 < 8) return VAR_0;
  while (VAR_0 >= 0x10) {
    VAR_0 = (VAR_0+1) >> 1;
    VAR_1++;
  }
  return ((VAR_1+1) << 3) | (FUNC_0(VAR_0) - 8);
}
