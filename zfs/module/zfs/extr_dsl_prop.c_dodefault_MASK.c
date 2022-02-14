
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zfs_prop_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7(zfs_prop_t VAR_4, int VAR_5, int VAR_6, void *VAR_7)
{





 if (VAR_4 == VAR_3 ||
     (FUNC_5(VAR_4) && !FUNC_6(VAR_4)))
  return (FUNC_0(VAR_0));

 if (FUNC_4(VAR_4) == VAR_2) {
  if (VAR_5 != 1)
   return (FUNC_0(VAR_1));
  (void) FUNC_1(VAR_7, FUNC_3(VAR_4),
      VAR_6);
 } else {
  if (VAR_5 != 8 || VAR_6 < 1)
   return (FUNC_0(VAR_1));

  *(uint64_t *)VAR_7 = FUNC_2(VAR_4);
 }

 return (0);
}
