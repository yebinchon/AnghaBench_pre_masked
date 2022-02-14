
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ z_acl_inherit; } ;
typedef TYPE_2__ zfsvfs_t ;
struct TYPE_14__ {size_t z_acl_bytes; int z_acl_count; int z_acl; TYPE_1__* z_ops; int z_hints; } ;
typedef TYPE_3__ zfs_acl_t ;
struct TYPE_15__ {int z_ace_count; int z_size; void* z_acldata; } ;
typedef TYPE_4__ zfs_acl_node_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int mode_t ;
struct TYPE_12__ {size_t (* ace_abstract_size ) () ;int (* ace_size ) (void*) ;} ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,int*,int*,int*,int*,int*,int*) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 size_t FUNC_2 () ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (TYPE_3__*,void*,int*,int*,int*,int*) ;
 TYPE_4__* FUNC_5 (size_t) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,void*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_8(zfsvfs_t *VAR_22, uint64_t VAR_23, zfs_acl_t *VAR_24)
{
 void *VAR_25 = ((void*)0);
 uint64_t VAR_26;
 int VAR_27, VAR_28;
 int VAR_29;
 int VAR_30;
 uint16_t VAR_31, VAR_32;
 uint32_t VAR_33;
 zfs_acl_node_t *VAR_34;
 size_t VAR_35 = VAR_24->z_ops->ace_abstract_size();
 void *VAR_36;
 uint32_t VAR_37, VAR_38, VAR_39;
 uint32_t VAR_40, VAR_41, VAR_42;

 VAR_27 = VAR_28 = 0;

 FUNC_0((mode_t)VAR_23, &VAR_42, &VAR_40, &VAR_41,
     &VAR_37, &VAR_38, &VAR_39);

 VAR_34 = FUNC_5((VAR_35 * 6) + VAR_24->z_acl_bytes);

 VAR_36 = VAR_34->z_acldata;
 if (VAR_42) {
  FUNC_7(VAR_24, VAR_36, VAR_42, VAR_12, -1, VAR_4);
  VAR_36 = (void *)((uintptr_t)VAR_36 + VAR_35);
  VAR_27++;
  VAR_28 += VAR_35;
 }
 if (VAR_40) {
  FUNC_7(VAR_24, VAR_36, VAR_40, VAR_14, -1, VAR_4);
  VAR_36 = (void *)((uintptr_t)VAR_36 + VAR_35);
  VAR_27++;
  VAR_28 += VAR_35;
 }
 if (VAR_41) {
  FUNC_7(VAR_24, VAR_36, VAR_41, VAR_14, -1, VAR_15);
  VAR_36 = (void *)((uintptr_t)VAR_36 + VAR_35);
  VAR_27++;
  VAR_28 += VAR_35;
 }

 while ((VAR_25 = FUNC_4(VAR_24, VAR_25, &VAR_26, &VAR_33,
     &VAR_31, &VAR_32))) {
  uint16_t VAR_43;

  VAR_30 = (VAR_31 & VAR_6);
  VAR_43 = (VAR_31 & VAR_13);

  if ((VAR_30 == VAR_4 || VAR_30 == VAR_1 ||
      (VAR_30 == VAR_15)) &&
      ((VAR_43 & VAR_3) == 0)) {
   continue;
  }

  if ((VAR_32 != VAR_12 && VAR_32 != VAR_14) ||
      (VAR_43 & VAR_3)) {
   if (VAR_43)
    VAR_24->z_hints |= VAR_21;
   switch (VAR_32) {
   case 131:
   case 130:
   case 128:
   case 129:
    VAR_24->z_hints |= VAR_19;
    break;
   }
  } else {





   if (VAR_22->z_acl_inherit == VAR_20) {
    if (!(VAR_23 & VAR_16))
     VAR_33 &= ~VAR_5;
    if (!(VAR_23 & VAR_17))
     VAR_33 &=
         ~(VAR_9|VAR_0);
    if (!(VAR_23 & VAR_18))
     VAR_33 &= ~VAR_2;
    VAR_33 &=
        ~(VAR_11|VAR_7|
        VAR_8|VAR_10);
   }
  }
  FUNC_7(VAR_24, VAR_36, VAR_33, VAR_32, VAR_26, VAR_31);
  VAR_29 = VAR_24->z_ops->ace_size(VAR_25);
  VAR_36 = (void *)((uintptr_t)VAR_36 + VAR_29);
  VAR_27++;
  VAR_28 += VAR_29;
 }
 FUNC_7(VAR_24, VAR_36, VAR_37, 0, -1, VAR_4);
 VAR_36 = (void *)((uintptr_t)VAR_36 + VAR_35);
 FUNC_7(VAR_24, VAR_36, VAR_38, 0, -1, VAR_15);
 VAR_36 = (void *)((uintptr_t)VAR_36 + VAR_35);
 FUNC_7(VAR_24, VAR_36, VAR_39, 0, -1, VAR_1);

 VAR_27 += 3;
 VAR_28 += VAR_35 * 3;
 FUNC_6(VAR_24);
 VAR_24->z_acl_count = VAR_27;
 VAR_24->z_acl_bytes = VAR_28;
 VAR_34->z_ace_count = VAR_27;
 VAR_34->z_size = VAR_28;
 FUNC_1(&VAR_24->z_acl, VAR_34);
}
