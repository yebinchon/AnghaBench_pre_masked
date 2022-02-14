
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,char**) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,int *,int ) ;

__attribute__((used)) static boolean_t
FUNC_4(nvlist_t *VAR_3, char *VAR_4)
{
 uint64_t VAR_5, VAR_6 = FUNC_3(VAR_4, ((void*)0), 0);
 char *VAR_7;

 if (VAR_6 != 0) {
  if (FUNC_1(VAR_3, VAR_1, &VAR_5) == 0)
   return (VAR_5 == VAR_6);
 } else {
  if (FUNC_0(VAR_3, VAR_2, &VAR_7) == 0)
   return (FUNC_2(VAR_7, VAR_4) == 0);
 }
 return (VAR_0);
}
