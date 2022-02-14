
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ z_acl_inherit; } ;
typedef TYPE_2__ zfsvfs_t ;
struct TYPE_17__ {TYPE_1__* z_ops; int z_hints; int z_acl_bytes; int z_acl_count; int z_acl; int z_version; } ;
typedef TYPE_3__ zfs_acl_t ;
struct TYPE_18__ {scalar_t__ z_size; int z_ace_count; void* z_acldata; } ;
typedef TYPE_4__ zfs_acl_node_t ;
typedef int umode_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int boolean_t ;
struct TYPE_15__ {size_t (* ace_size ) (void*) ;size_t (* ace_data ) (void*,void**) ;scalar_t__ (* ace_flags_get ) (void*) ;int (* ace_flags_set ) (void*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (void*,void*,size_t) ;
 int FUNC_6 (int *,TYPE_4__*) ;
 size_t FUNC_7 (void*) ;
 size_t FUNC_8 (void*,void**) ;
 size_t FUNC_9 (void*,void**) ;
 scalar_t__ FUNC_10 (void*) ;
 int FUNC_11 (void*,scalar_t__) ;
 int FUNC_12 (void*,scalar_t__) ;
 int FUNC_13 (void*,scalar_t__) ;
 int FUNC_14 (int ,scalar_t__) ;
 TYPE_3__* FUNC_15 (int ) ;
 void* FUNC_16 (TYPE_3__*,void*,int*,int *,scalar_t__*,scalar_t__*) ;
 TYPE_4__* FUNC_17 (size_t) ;
 int FUNC_18 (scalar_t__,scalar_t__) ;
 int FUNC_19 (TYPE_2__*,TYPE_3__*,void*) ;
 int FUNC_20 (TYPE_3__*,void*,int ,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static zfs_acl_t *
FUNC_21(zfsvfs_t *VAR_21, umode_t VAR_22, zfs_acl_t *VAR_23,
    uint64_t VAR_24, boolean_t *VAR_25)
{
 void *VAR_26;
 void *VAR_27;
 zfs_acl_node_t *VAR_28;
 zfs_acl_t *VAR_29 = ((void*)0);
 uint64_t VAR_30;
 uint32_t VAR_31;
 uint16_t VAR_32, VAR_33, VAR_34;
 size_t VAR_35;
 void *VAR_36, *VAR_37;
 size_t VAR_38, VAR_39;
 boolean_t VAR_40 = FUNC_1(VAR_22);
 boolean_t VAR_41 = FUNC_3(VAR_22);
 boolean_t VAR_42, VAR_43, VAR_44;

 VAR_43 =
     VAR_21->z_acl_inherit == VAR_19;
 VAR_42 = VAR_43 ||
     VAR_21->z_acl_inherit == VAR_18;
 VAR_44 =
     VAR_21->z_acl_inherit == VAR_17;

 *VAR_25 = VAR_11;
 VAR_26 = ((void*)0);
 VAR_29 = FUNC_15(VAR_23->z_version);
 if (VAR_21->z_acl_inherit == VAR_16 || FUNC_2(VAR_22))
  return (VAR_29);
 while ((VAR_26 = FUNC_16(VAR_23, VAR_26, &VAR_30,
     &VAR_31, &VAR_32, &VAR_34))) {




  if (!FUNC_18(VAR_34, VAR_32))
   continue;

  if (VAR_44 && VAR_34 == VAR_8)
   continue;

  VAR_35 = VAR_29->z_ops->ace_size(VAR_26);

  if (!FUNC_14(VAR_22, VAR_32))
   continue;





  if (VAR_42 &&
      ((VAR_32 & (VAR_7|VAR_1)) ||
      ((VAR_32 & VAR_12) ==
      VAR_12)) && (VAR_41 || (VAR_40 && (VAR_32 &
      VAR_0)))) {
   *VAR_25 = VAR_10;
  }

  if (!VAR_40 && VAR_43 &&
      ((VAR_24 & (VAR_15 | VAR_13 | VAR_14)) == 0)) {
   VAR_31 &= ~VAR_2;
  }

  VAR_28 = FUNC_17(VAR_35);
  FUNC_6(&VAR_29->z_acl, VAR_28);
  VAR_27 = VAR_28->z_acldata;

  FUNC_20(VAR_29, VAR_27, VAR_31, VAR_34,
      VAR_30, VAR_32|VAR_4);




  if ((VAR_38 = VAR_23->z_ops->ace_data(VAR_26, &VAR_36)) != 0) {
   FUNC_4((VAR_39 = VAR_29->z_ops->ace_data(VAR_27,
       &VAR_37)) == VAR_38);
   FUNC_5(VAR_36, VAR_37, VAR_39);
  }

  VAR_29->z_acl_count++;
  VAR_28->z_ace_count++;
  VAR_29->z_acl_bytes += VAR_28->z_size;
  VAR_33 = VAR_29->z_ops->ace_flags_get(VAR_27);

  if (VAR_40)
   VAR_29->z_hints |= VAR_20;

  if ((VAR_32 & VAR_6) || !VAR_40) {
   VAR_33 &= ~VAR_9;
   VAR_29->z_ops->ace_flags_set(VAR_27,
       VAR_33|VAR_4);
   FUNC_19(VAR_21, VAR_29, VAR_27);
   continue;
  }

  FUNC_0(VAR_40);





  if ((VAR_32 & (VAR_3 |
      VAR_0)) == VAR_3) {
   VAR_33 |= VAR_5;
   VAR_29->z_ops->ace_flags_set(VAR_27,
       VAR_33|VAR_4);
  } else {
   VAR_33 &= ~VAR_5;
   VAR_29->z_ops->ace_flags_set(VAR_27,
       VAR_33|VAR_4);
  }
 }
 return (VAR_29);
}
