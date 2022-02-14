
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long ptrdiff_t ;



ptrdiff_t FUNC_0(long VAR_0, long *VAR_1) {
  if(VAR_0 == 0)
    return 0;
  else
  {
    ptrdiff_t VAR_2 = 1;
    int VAR_3;
    for(VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
      VAR_2 *= VAR_1[VAR_3];
    return VAR_2;
  }
}
