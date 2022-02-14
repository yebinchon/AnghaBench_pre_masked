
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static nvlist_t *
FUNC_1(nvlist_t **VAR_1, int VAR_2, uint64_t VAR_3)
{
 for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  uint64_t VAR_5 =
      FUNC_0(VAR_1[VAR_4], VAR_0);

  if (VAR_5 == VAR_3)
   return (VAR_1[VAR_4]);
 }

 return (((void*)0));
}
