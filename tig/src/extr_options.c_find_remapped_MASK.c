
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0[][2], size_t VAR_1, const char *VAR_2)
{
 size_t VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  const char *VAR_5 = VAR_0[VAR_4][0];
  size_t VAR_6 = FUNC_1(VAR_5);

  if (VAR_3 == VAR_6 &&
      !FUNC_0(VAR_2, VAR_5, VAR_6))
   return VAR_4;
 }

 return -1;
}
