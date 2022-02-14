
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;

__attribute__((used)) static const char *
FUNC_1(const char *VAR_0)
{
 const char *VAR_1;
 int VAR_2;

 if (!VAR_0)
  return (((void*)0));

 VAR_1 = VAR_0;
 for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
  VAR_1 = FUNC_0(VAR_1, '.');
  if (!VAR_1)
   break;
  VAR_1++;
 }
 return (VAR_1);
}
