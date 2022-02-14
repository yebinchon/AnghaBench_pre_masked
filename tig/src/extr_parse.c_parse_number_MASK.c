
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char const) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static bool
FUNC_3(const char **VAR_0, size_t *VAR_1, size_t VAR_2, size_t VAR_3)
{
 const char *VAR_4 = *VAR_0;

 *VAR_0 = ((void*)0);
 VAR_4 = FUNC_2(VAR_4 + 1, ' ');
 if (!VAR_4 || !FUNC_1(VAR_4[1]))
  return 0;
 *VAR_1 = FUNC_0(VAR_4 + 1);
 if (*VAR_1 < VAR_2 || *VAR_1 > VAR_3)
  return 0;

 *VAR_0 = VAR_4;
 return 1;
}
