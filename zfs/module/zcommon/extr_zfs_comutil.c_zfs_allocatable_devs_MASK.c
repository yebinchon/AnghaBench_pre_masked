
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int ***,size_t*) ;
 int FUNC_1 (int *,int ,scalar_t__*) ;

boolean_t
FUNC_2(nvlist_t *VAR_4)
{
 uint64_t VAR_5;
 uint_t VAR_6;
 nvlist_t **VAR_7;
 uint_t VAR_8;

 if (FUNC_0(VAR_4, VAR_2,
     &VAR_7, &VAR_8) != 0) {
  return (VAR_0);
 }
 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_5 = 0;
  (void) FUNC_1(VAR_7[VAR_6], VAR_3,
      &VAR_5);
  if (!VAR_5)
   return (VAR_1);
 }
 return (VAR_0);
}
