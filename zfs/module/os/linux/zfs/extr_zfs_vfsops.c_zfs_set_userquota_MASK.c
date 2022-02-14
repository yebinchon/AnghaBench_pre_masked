
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ z_version; scalar_t__ z_userquota_obj; scalar_t__ z_groupquota_obj; scalar_t__ z_userobjquota_obj; scalar_t__ z_groupobjquota_obj; scalar_t__ z_projectquota_obj; scalar_t__ z_projectobjquota_obj; int z_os; int z_lock; scalar_t__ z_fuid_dirty; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef int zfs_userquota_prop_t ;
typedef scalar_t__ uint64_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (int) ;






 scalar_t__ VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *,scalar_t__,int ,int *) ;
 int FUNC_9 (TYPE_1__*,char const*,scalar_t__,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,scalar_t__,int *,int,int,scalar_t__*,int *) ;
 scalar_t__ FUNC_13 (int ,int ,int ,int ,int *) ;
 int FUNC_14 (int ,scalar_t__,char*,int *) ;
 int FUNC_15 (int ,scalar_t__,char*,int,int,scalar_t__*,int *) ;
 int FUNC_16 (TYPE_1__*,int *) ;
 int FUNC_17 (TYPE_1__*,int *) ;
 int ** VAR_10 ;
 int FUNC_18 (scalar_t__) ;

int
FUNC_19(zfsvfs_t *VAR_11, zfs_userquota_prop_t VAR_12,
    const char *VAR_13, uint64_t VAR_14, uint64_t VAR_15)
{
 char VAR_16[32];
 int VAR_17;
 dmu_tx_t *VAR_18;
 uint64_t *VAR_19;
 boolean_t VAR_20;

 if (VAR_11->z_version < VAR_9)
  return (FUNC_1(VAR_6));

 switch (VAR_12) {
 case 128:
  VAR_19 = &VAR_11->z_userquota_obj;
  break;
 case 132:
  VAR_19 = &VAR_11->z_groupquota_obj;
  break;
 case 129:
  VAR_19 = &VAR_11->z_userobjquota_obj;
  break;
 case 133:
  VAR_19 = &VAR_11->z_groupobjquota_obj;
  break;
 case 130:
  if (!FUNC_3(VAR_11->z_os))
   return (FUNC_1(VAR_6));
  if (!FUNC_18(VAR_14))
   return (FUNC_1(VAR_4));

  VAR_19 = &VAR_11->z_projectquota_obj;
  break;
 case 131:
  if (!FUNC_3(VAR_11->z_os))
   return (FUNC_1(VAR_6));
  if (!FUNC_18(VAR_14))
   return (FUNC_1(VAR_4));

  VAR_19 = &VAR_11->z_projectobjquota_obj;
  break;
 default:
  return (FUNC_1(VAR_4));
 }

 VAR_17 = FUNC_9(VAR_11, VAR_13, VAR_14, VAR_16, VAR_0);
 if (VAR_17)
  return (VAR_17);
 VAR_20 = VAR_11->z_fuid_dirty;

 VAR_18 = FUNC_7(VAR_11->z_os);
 FUNC_8(VAR_18, *VAR_19 ? *VAR_19 : VAR_1, VAR_0, ((void*)0));
 if (*VAR_19 == 0) {
  FUNC_8(VAR_18, VAR_7, VAR_0,
      VAR_10[VAR_12]);
 }
 if (VAR_20)
  FUNC_17(VAR_11, VAR_18);
 VAR_17 = FUNC_5(VAR_18, VAR_8);
 if (VAR_17) {
  FUNC_4(VAR_18);
  return (VAR_17);
 }

 FUNC_10(&VAR_11->z_lock);
 if (*VAR_19 == 0) {
  *VAR_19 = FUNC_13(VAR_11->z_os, VAR_3,
      VAR_2, 0, VAR_18);
  FUNC_2(0 == FUNC_12(VAR_11->z_os, VAR_7,
      VAR_10[VAR_12], 8, 1, VAR_19, VAR_18));
 }
 FUNC_11(&VAR_11->z_lock);

 if (VAR_15 == 0) {
  VAR_17 = FUNC_14(VAR_11->z_os, *VAR_19, VAR_16, VAR_18);
  if (VAR_17 == VAR_5)
   VAR_17 = 0;
 } else {
  VAR_17 = FUNC_15(VAR_11->z_os, *VAR_19, VAR_16, 8, 1, &VAR_15, VAR_18);
 }
 FUNC_0(VAR_17 == 0);
 if (VAR_20)
  FUNC_16(VAR_11, VAR_18);
 FUNC_6(VAR_18);
 return (VAR_17);
}
