
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, size_t VAR_1, void *VAR_2)
{
 char *VAR_3 = VAR_0;

 for (size_t VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (FUNC_0(*VAR_3))
   (void) FUNC_1("%c ", *VAR_3);
  else
   (void) FUNC_1("%2X", *VAR_3);
  VAR_3++;
 }
 return (0);
}
