
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mnt_osname; } ;
typedef TYPE_1__ zfs_mnt_t ;
struct super_block {int s_flags; int * s_root; } ;
struct file_system_type {int dummy; } ;
typedef int objset_t ;


 int VAR_0 ;
 struct super_block* FUNC_0 (struct super_block*) ;
 struct super_block* FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_5 ;
 struct super_block* FUNC_9 (struct file_system_type*,int ,int ,int,int *) ;
 int FUNC_10 (struct super_block*,TYPE_1__*,int) ;
 int VAR_6 ;

__attribute__((used)) static struct super_block *
FUNC_11(struct file_system_type *VAR_7, int VAR_8, zfs_mnt_t *VAR_9)
{
 struct super_block *VAR_10;
 objset_t *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_5(VAR_9->mnt_osname, VAR_1, &VAR_11);
 if (VAR_12)
  return (FUNC_1(-VAR_12));
 FUNC_8(FUNC_6(VAR_11), VAR_1);
 VAR_10 = FUNC_9(VAR_7, VAR_6, VAR_5, VAR_8, VAR_11);
 FUNC_7(FUNC_4(VAR_11), VAR_1);

 if (FUNC_2(VAR_10))
  return (FUNC_0(VAR_10));

 if (VAR_10->s_root == ((void*)0)) {
  VAR_12 = FUNC_10(VAR_10, VAR_9, VAR_8 & VAR_4 ? 1 : 0);
  if (VAR_12) {
   FUNC_3(VAR_10);
   return (FUNC_1(VAR_12));
  }
  VAR_10->s_flags |= VAR_2;
 } else if ((VAR_8 ^ VAR_10->s_flags) & VAR_3) {
  FUNC_3(VAR_10);
  return (FUNC_1(-VAR_0));
 }

 return (VAR_10);
}
