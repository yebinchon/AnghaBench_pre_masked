
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ z_version; int z_norm; int z_utf8; scalar_t__ z_case; scalar_t__ z_root; scalar_t__ z_unlinkedobj; scalar_t__ z_userquota_obj; scalar_t__ z_groupquota_obj; scalar_t__ z_projectquota_obj; scalar_t__ z_userobjquota_obj; scalar_t__ z_groupobjquota_obj; scalar_t__ z_projectobjquota_obj; scalar_t__ z_fuid_obj; scalar_t__ z_shares_dir; int z_attr_table; int z_xattr_sa; scalar_t__ z_use_sa; int * z_os; int z_use_fuids; void* z_acl_type; int z_show_ctldir; int z_max_blksz; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef void* uint_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int objset_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ,int,int,scalar_t__*) ;
 int VAR_29 ;
 int FUNC_10 (int *,int ,scalar_t__*) ;
 int VAR_30 ;
 int * VAR_31 ;
 scalar_t__ FUNC_11 (scalar_t__) ;

__attribute__((used)) static int
FUNC_12(zfsvfs_t *VAR_32, objset_t *VAR_33)
{
 int VAR_34;
 uint64_t VAR_35;

 VAR_32->z_max_blksz = VAR_4;
 VAR_32->z_show_ctldir = VAR_24;
 VAR_32->z_os = VAR_33;

 VAR_34 = FUNC_10(VAR_33, VAR_19, &VAR_32->z_version);
 if (VAR_34 != 0)
  return (VAR_34);
 if (VAR_32->z_version >
     FUNC_11(FUNC_8(FUNC_4(VAR_33)))) {
  (void) FUNC_5("Can't mount a version %lld file system "
      "on a version %lld pool\n. Pool must be upgraded to mount "
      "this file system.\n", (u_longlong_t)VAR_32->z_version,
      (u_longlong_t)FUNC_8(FUNC_4(VAR_33)));
  return (FUNC_1(VAR_2));
 }
 VAR_34 = FUNC_10(VAR_33, VAR_13, &VAR_35);
 if (VAR_34 != 0)
  return (VAR_34);
 VAR_32->z_norm = (int)VAR_35;

 VAR_34 = FUNC_10(VAR_33, VAR_18, &VAR_35);
 if (VAR_34 != 0)
  return (VAR_34);
 VAR_32->z_utf8 = (VAR_35 != 0);

 VAR_34 = FUNC_10(VAR_33, VAR_10, &VAR_35);
 if (VAR_34 != 0)
  return (VAR_34);
 VAR_32->z_case = (uint_t)VAR_35;

 if ((VAR_34 = FUNC_10(VAR_33, VAR_9, &VAR_35)) != 0)
  return (VAR_34);
 VAR_32->z_acl_type = (uint_t)VAR_35;





 if (VAR_32->z_case == VAR_6 ||
     VAR_32->z_case == VAR_7)
  VAR_32->z_norm |= VAR_5;

 VAR_32->z_use_fuids = FUNC_2(VAR_32->z_version, VAR_32->z_os);
 VAR_32->z_use_sa = FUNC_3(VAR_32->z_version, VAR_32->z_os);

 uint64_t VAR_36 = 0;
 if (VAR_32->z_use_sa) {

  VAR_34 = FUNC_9(VAR_33, VAR_3, VAR_22, 8, 1,
      &VAR_36);
  if (VAR_34 != 0)
   return (VAR_34);

  VAR_34 = FUNC_10(VAR_33, VAR_20, &VAR_35);
  if ((VAR_34 == 0) && (VAR_35 == VAR_26))
   VAR_32->z_xattr_sa = VAR_0;
 }

 VAR_34 = FUNC_9(VAR_33, VAR_3, VAR_21, 8, 1,
     &VAR_32->z_root);
 if (VAR_34 != 0)
  return (VAR_34);
 FUNC_0(VAR_32->z_root != 0);

 VAR_34 = FUNC_9(VAR_33, VAR_3, VAR_25, 8, 1,
     &VAR_32->z_unlinkedobj);
 if (VAR_34 != 0)
  return (VAR_34);

 VAR_34 = FUNC_9(VAR_33, VAR_3,
     VAR_31[VAR_17],
     8, 1, &VAR_32->z_userquota_obj);
 if (VAR_34 == VAR_1)
  VAR_32->z_userquota_obj = 0;
 else if (VAR_34 != 0)
  return (VAR_34);

 VAR_34 = FUNC_9(VAR_33, VAR_3,
     VAR_31[VAR_12],
     8, 1, &VAR_32->z_groupquota_obj);
 if (VAR_34 == VAR_1)
  VAR_32->z_groupquota_obj = 0;
 else if (VAR_34 != 0)
  return (VAR_34);

 VAR_34 = FUNC_9(VAR_33, VAR_3,
     VAR_31[VAR_15],
     8, 1, &VAR_32->z_projectquota_obj);
 if (VAR_34 == VAR_1)
  VAR_32->z_projectquota_obj = 0;
 else if (VAR_34 != 0)
  return (VAR_34);

 VAR_34 = FUNC_9(VAR_33, VAR_3,
     VAR_31[VAR_16],
     8, 1, &VAR_32->z_userobjquota_obj);
 if (VAR_34 == VAR_1)
  VAR_32->z_userobjquota_obj = 0;
 else if (VAR_34 != 0)
  return (VAR_34);

 VAR_34 = FUNC_9(VAR_33, VAR_3,
     VAR_31[VAR_11],
     8, 1, &VAR_32->z_groupobjquota_obj);
 if (VAR_34 == VAR_1)
  VAR_32->z_groupobjquota_obj = 0;
 else if (VAR_34 != 0)
  return (VAR_34);

 VAR_34 = FUNC_9(VAR_33, VAR_3,
     VAR_31[VAR_14],
     8, 1, &VAR_32->z_projectobjquota_obj);
 if (VAR_34 == VAR_1)
  VAR_32->z_projectobjquota_obj = 0;
 else if (VAR_34 != 0)
  return (VAR_34);

 VAR_34 = FUNC_9(VAR_33, VAR_3, VAR_8, 8, 1,
     &VAR_32->z_fuid_obj);
 if (VAR_34 == VAR_1)
  VAR_32->z_fuid_obj = 0;
 else if (VAR_34 != 0)
  return (VAR_34);

 VAR_34 = FUNC_9(VAR_33, VAR_3, VAR_23, 8, 1,
     &VAR_32->z_shares_dir);
 if (VAR_34 == VAR_1)
  VAR_32->z_shares_dir = 0;
 else if (VAR_34 != 0)
  return (VAR_34);

 VAR_34 = FUNC_7(VAR_33, VAR_36, VAR_29, VAR_27,
     &VAR_32->z_attr_table);
 if (VAR_34 != 0)
  return (VAR_34);

 if (VAR_32->z_version >= VAR_28)
  FUNC_6(VAR_33, VAR_30);

 return (0);
}
