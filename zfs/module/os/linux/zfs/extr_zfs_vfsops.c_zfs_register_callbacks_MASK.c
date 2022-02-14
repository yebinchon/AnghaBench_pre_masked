
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {void* vfs_nbmand; scalar_t__ vfs_do_nbmand; void* vfs_relatime; scalar_t__ vfs_do_relatime; void* vfs_atime; scalar_t__ vfs_do_atime; void* vfs_xattr; scalar_t__ vfs_do_xattr; void* vfs_devices; scalar_t__ vfs_do_devices; void* vfs_exec; scalar_t__ vfs_do_exec; void* vfs_setuid; scalar_t__ vfs_do_setuid; void* vfs_readonly; void* vfs_do_readonly; int * z_os; struct TYPE_22__* vfs_data; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef TYPE_1__ vfs_t ;
struct dsl_dataset {int dummy; } ;
typedef int objset_t ;


 int FUNC_0 (TYPE_1__*) ;
 void* VAR_0 ;
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
 int FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (TYPE_1__*,void*) ;
 int FUNC_3 (TYPE_1__*,void*) ;
 int FUNC_4 (TYPE_1__*,void*) ;
 int FUNC_5 (TYPE_1__*,void*) ;
 struct dsl_dataset* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct dsl_dataset*,int ,int (*) (TYPE_1__*,void*),TYPE_1__*) ;
 int FUNC_12 (struct dsl_dataset*,TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,void*) ;
 int FUNC_14 (TYPE_1__*,void*) ;
 int FUNC_15 (TYPE_1__*,void*) ;
 int FUNC_16 (TYPE_1__*,void*) ;
 int FUNC_17 (TYPE_1__*,void*) ;
 int FUNC_18 (TYPE_1__*,void*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_1__*,void*) ;
 int FUNC_21 (TYPE_1__*,void*) ;
 scalar_t__ FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (int ) ;

__attribute__((used)) static int
FUNC_24(vfs_t *VAR_15)
{
 struct dsl_dataset *VAR_16 = ((void*)0);
 objset_t *VAR_17 = ((void*)0);
 zfsvfs_t *VAR_18 = ((void*)0);
 int VAR_19 = 0;

 FUNC_0(VAR_15);
 VAR_18 = VAR_15->vfs_data;
 FUNC_0(VAR_18);
 VAR_17 = VAR_18->z_os;







 if (FUNC_22(VAR_18) || !FUNC_19(FUNC_8(VAR_17))) {
  VAR_15->vfs_do_readonly = VAR_0;
  VAR_15->vfs_readonly = VAR_0;
 }
 VAR_16 = FUNC_6(VAR_17);
 FUNC_9(FUNC_7(VAR_17), VAR_1);
 VAR_19 = FUNC_11(VAR_16,
     FUNC_23(VAR_4), FUNC_3, VAR_18);
 VAR_19 = VAR_19 ? VAR_19 : FUNC_11(VAR_16,
     FUNC_23(VAR_10), FUNC_16, VAR_18);
 VAR_19 = VAR_19 ? VAR_19 : FUNC_11(VAR_16,
     FUNC_23(VAR_14), FUNC_21, VAR_18);
 VAR_19 = VAR_19 ? VAR_19 : FUNC_11(VAR_16,
     FUNC_23(VAR_9), FUNC_4, VAR_18);
 VAR_19 = VAR_19 ? VAR_19 : FUNC_11(VAR_16,
     FUNC_23(VAR_8), FUNC_15, VAR_18);
 VAR_19 = VAR_19 ? VAR_19 : FUNC_11(VAR_16,
     FUNC_23(VAR_5), FUNC_5, VAR_18);
 VAR_19 = VAR_19 ? VAR_19 : FUNC_11(VAR_16,
     FUNC_23(VAR_11), FUNC_17, VAR_18);
 VAR_19 = VAR_19 ? VAR_19 : FUNC_11(VAR_16,
     FUNC_23(VAR_6), FUNC_13, VAR_18);
 VAR_19 = VAR_19 ? VAR_19 : FUNC_11(VAR_16,
     FUNC_23(VAR_12), FUNC_18, VAR_18);
 VAR_19 = VAR_19 ? VAR_19 : FUNC_11(VAR_16,
     FUNC_23(VAR_3), FUNC_2, VAR_18);
 VAR_19 = VAR_19 ? VAR_19 : FUNC_11(VAR_16,
     FUNC_23(VAR_2), FUNC_1,
     VAR_18);
 VAR_19 = VAR_19 ? VAR_19 : FUNC_11(VAR_16,
     FUNC_23(VAR_13), FUNC_20, VAR_18);
 VAR_19 = VAR_19 ? VAR_19 : FUNC_11(VAR_16,
     FUNC_23(VAR_7), FUNC_14, VAR_18);
 FUNC_10(FUNC_7(VAR_17), VAR_1);
 if (VAR_19)
  goto unregister;




 if (VAR_15->vfs_do_readonly)
  FUNC_15(VAR_18, VAR_15->vfs_readonly);
 if (VAR_15->vfs_do_setuid)
  FUNC_17(VAR_18, VAR_15->vfs_setuid);
 if (VAR_15->vfs_do_exec)
  FUNC_13(VAR_18, VAR_15->vfs_exec);
 if (VAR_15->vfs_do_devices)
  FUNC_5(VAR_18, VAR_15->vfs_devices);
 if (VAR_15->vfs_do_xattr)
  FUNC_21(VAR_18, VAR_15->vfs_xattr);
 if (VAR_15->vfs_do_atime)
  FUNC_3(VAR_18, VAR_15->vfs_atime);
 if (VAR_15->vfs_do_relatime)
  FUNC_16(VAR_18, VAR_15->vfs_relatime);
 if (VAR_15->vfs_do_nbmand)
  FUNC_14(VAR_18, VAR_15->vfs_nbmand);

 return (0);

unregister:
 FUNC_12(VAR_16, VAR_18);
 return (VAR_19);
}
