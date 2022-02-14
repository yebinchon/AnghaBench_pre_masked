
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z_os; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef scalar_t__ zfs_userquota_prop_t ;
typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char const*,scalar_t__,char*,int ) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int ,scalar_t__,char*,int,int,scalar_t__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

int
FUNC_9(zfsvfs_t *VAR_15, zfs_userquota_prop_t VAR_16,
    const char *VAR_17, uint64_t VAR_18, uint64_t *VAR_19)
{
 char VAR_20[20 + VAR_2];
 int VAR_21 = 0;
 int VAR_22;
 uint64_t VAR_23;

 *VAR_19 = 0;

 if (!FUNC_3(VAR_15->z_os))
  return (FUNC_0(VAR_5));

 if ((VAR_16 == VAR_14 || VAR_16 == VAR_8 ||
     VAR_16 == VAR_13 || VAR_16 == VAR_7 ||
     VAR_16 == VAR_10 ||
     VAR_16 == VAR_9) &&
     !FUNC_2(VAR_15->z_os))
  return (FUNC_0(VAR_5));

 if (VAR_16 == VAR_11 || VAR_16 == VAR_12 ||
     VAR_16 == VAR_9 ||
     VAR_16 == VAR_10) {
  if (!FUNC_1(VAR_15->z_os))
   return (FUNC_0(VAR_5));
  if (!FUNC_8(VAR_18))
   return (FUNC_0(VAR_3));
 }

 VAR_23 = FUNC_7(VAR_15, VAR_16);
 if (VAR_23 == VAR_6)
  return (0);

 if (VAR_16 == VAR_14 || VAR_16 == VAR_8 ||
     VAR_16 == VAR_10) {
  FUNC_5(VAR_20, VAR_1, VAR_2 + 1);
  VAR_21 = VAR_2;
 }

 VAR_22 = FUNC_4(VAR_15, VAR_17, VAR_18, VAR_20 + VAR_21, VAR_0);
 if (VAR_22)
  return (VAR_22);

 VAR_22 = FUNC_6(VAR_15->z_os, VAR_23, VAR_20, 8, 1, VAR_19);
 if (VAR_22 == VAR_4)
  VAR_22 = 0;
 return (VAR_22);
}
