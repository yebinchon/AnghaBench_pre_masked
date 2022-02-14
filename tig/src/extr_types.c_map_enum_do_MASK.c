
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enum_map_entry {int value; } ;


 scalar_t__ FUNC_0 (struct enum_map_entry const,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

bool
FUNC_2(const struct enum_map_entry *VAR_0, size_t VAR_1, int *VAR_2, const char *VAR_3)
{
 size_t VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (FUNC_0(VAR_0[VAR_5], VAR_3, VAR_4)) {
   *VAR_2 = VAR_0[VAR_5].value;
   return 1;
  }

 return 0;
}
