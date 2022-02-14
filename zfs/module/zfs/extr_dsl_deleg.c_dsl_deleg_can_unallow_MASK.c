
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zfs_deleg_who_type_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int longlong_t ;
typedef int idstr ;
typedef int cred_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int *) ;
 int * FUNC_3 (int *,int *) ;
 scalar_t__* FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char*,int ) ;
 scalar_t__ FUNC_6 (char*,scalar_t__*) ;

int
FUNC_7(char *VAR_4, nvlist_t *VAR_5, cred_t *VAR_6)
{
 nvpair_t *VAR_7 = ((void*)0);
 int VAR_8;
 char VAR_9[32];

 if ((VAR_8 = FUNC_2(VAR_4, VAR_1, VAR_6)) != 0)
  return (VAR_8);

 (void) FUNC_5(VAR_9, sizeof (VAR_9), "%lld",
     (longlong_t)FUNC_1(VAR_6));

 while ((VAR_7 = FUNC_3(VAR_5, VAR_7))) {
  zfs_deleg_who_type_t VAR_10 = FUNC_4(VAR_7)[0];

  if (VAR_10 != VAR_2 &&
      VAR_10 != VAR_3)
   return (FUNC_0(VAR_0));

  if (FUNC_6(VAR_9, &FUNC_4(VAR_7)[3]) != 0)
   return (FUNC_0(VAR_0));
 }
 return (0);
}
