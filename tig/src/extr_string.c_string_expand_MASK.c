
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char*,char*,size_t) ;

size_t
FUNC_3(char *VAR_0, size_t VAR_1, const char *VAR_2, int VAR_3, int VAR_4)
{
 size_t VAR_5, VAR_6;

 for (VAR_5 = VAR_6 = 0; VAR_5 < VAR_1 - 1 && (VAR_3 == -1 || VAR_6 < VAR_3) && VAR_2[VAR_6]; VAR_6++) {
  const char VAR_7 = VAR_2[VAR_6];

  if (VAR_7 == '\t') {
   size_t VAR_8 = VAR_4 - (VAR_5 % VAR_4);

   if (VAR_8 + VAR_5 >= VAR_1 - 1)
    VAR_8 = VAR_1 - VAR_5 - 1;
   FUNC_2(VAR_0 + VAR_5, "        ", VAR_8);
   VAR_5 += VAR_8;
  } else if (FUNC_1(VAR_7) || FUNC_0(VAR_7)) {
   VAR_0[VAR_5++] = ' ';
  } else {
   VAR_0[VAR_5++] = VAR_2[VAR_6];
  }
 }

 VAR_0[VAR_5] = 0;
 return VAR_6;
}
