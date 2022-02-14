
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options_entry {int value; } ;
struct options_array_item {int value; } ;


 scalar_t__ FUNC_0 (struct options_entry*) ;
 struct options_array_item* FUNC_1 (struct options_entry*,int) ;
 char* FUNC_2 (struct options_entry*,int *,int) ;
 char* FUNC_3 (char*) ;

char *
FUNC_4(struct options_entry *VAR_0, int VAR_1, int VAR_2)
{
 struct options_array_item *VAR_3;

 if (FUNC_0(VAR_0)) {
  if (VAR_1 == -1)
   return (FUNC_3(""));
  VAR_3 = FUNC_1(VAR_0, VAR_1);
  if (VAR_3 == ((void*)0))
   return (FUNC_3(""));
  return (FUNC_2(VAR_0, &VAR_3->value, VAR_2));
 }
 return (FUNC_2(VAR_0, &VAR_0->value, VAR_2));
}
