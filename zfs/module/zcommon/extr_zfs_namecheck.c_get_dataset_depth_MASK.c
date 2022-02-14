
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(const char *VAR_0)
{
 const char *VAR_1 = VAR_0;
 int VAR_2 = 0;





 for (int VAR_3 = 0; VAR_1[VAR_3] != '\0' &&
     VAR_1[VAR_3] != '@' &&
     VAR_1[VAR_3] != '#'; VAR_3++) {
  if (VAR_1[VAR_3] == '/')
   VAR_2++;
 }

 return (VAR_2);
}
