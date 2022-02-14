
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static boolean_t
FUNC_3(nvlist_t *VAR_2)
{
 nvpair_t *VAR_3;
 for (VAR_3 = FUNC_0(VAR_2, ((void*)0)); ((void*)0) != VAR_3;
     VAR_3 = FUNC_0(VAR_2, VAR_3)) {
  if (FUNC_2(FUNC_1(VAR_3)))
   return (VAR_1);
 }
 return (VAR_0);
}
