
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const long *VAR_0, long VAR_1, const long *VAR_2, long VAR_3) {
  int VAR_4;
  if (VAR_1 != VAR_3)
    return 0;
  for(VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
  {
    if(VAR_0[VAR_4] != VAR_2[VAR_4])
      return 0;
  }
  return 1;
}
