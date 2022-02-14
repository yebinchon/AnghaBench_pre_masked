
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t
FUNC_0(const char *VAR_0, size_t VAR_1, size_t VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5;

 for (VAR_4 = VAR_5 = 0; VAR_5 < VAR_1 && VAR_4 < VAR_3; VAR_5++) {
  if (VAR_0[VAR_5] == '\t') {
   size_t VAR_6 = VAR_2 - (VAR_4 % VAR_2);

   VAR_4 += VAR_6;
  } else {
   VAR_4++;
  }
 }

 return VAR_5;
}
