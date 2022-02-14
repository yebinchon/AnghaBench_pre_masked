
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct mnttab {int mnt_mntopts; int mnt_fstype; int mnt_mountp; int mnt_special; } ;
struct TYPE_11__ {TYPE_2__* mnt_mntopts; TYPE_2__* mnt_fstype; TYPE_2__* mnt_mountp; TYPE_2__* mnt_special; } ;
struct TYPE_12__ {TYPE_1__ mtn_mt; } ;
typedef TYPE_2__ mnttab_node_t ;
struct TYPE_13__ {int libzfs_mnttab_cache; int libzfs_mnttab; } ;
typedef TYPE_3__ libzfs_handle_t ;
typedef int avl_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int * FUNC_1 (int *,TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (int ,struct mnttab*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 TYPE_2__* FUNC_6 (TYPE_3__*,int) ;
 void* FUNC_7 (TYPE_3__*,int ) ;

int
FUNC_8(libzfs_handle_t *VAR_3)
{
 struct mnttab VAR_4;


 if (FUNC_3(VAR_1, "r", VAR_3->libzfs_mnttab) == ((void*)0))
  return (VAR_0);

 while (FUNC_4(VAR_3->libzfs_mnttab, &VAR_4) == 0) {
  mnttab_node_t *VAR_5;
  avl_index_t VAR_6;

  if (FUNC_5(VAR_4.mnt_fstype, VAR_2) != 0)
   continue;

  VAR_5 = FUNC_6(VAR_3, sizeof (mnttab_node_t));
  VAR_5->mtn_mt.mnt_special = FUNC_7(VAR_3, VAR_4.mnt_special);
  VAR_5->mtn_mt.mnt_mountp = FUNC_7(VAR_3, VAR_4.mnt_mountp);
  VAR_5->mtn_mt.mnt_fstype = FUNC_7(VAR_3, VAR_4.mnt_fstype);
  VAR_5->mtn_mt.mnt_mntopts = FUNC_7(VAR_3, VAR_4.mnt_mntopts);


  if (FUNC_1(&VAR_3->libzfs_mnttab_cache, VAR_5, &VAR_6) != ((void*)0)) {
   FUNC_2(VAR_5->mtn_mt.mnt_special);
   FUNC_2(VAR_5->mtn_mt.mnt_mountp);
   FUNC_2(VAR_5->mtn_mt.mnt_fstype);
   FUNC_2(VAR_5->mtn_mt.mnt_mntopts);
   FUNC_2(VAR_5);
   continue;
  }

  FUNC_0(&VAR_3->libzfs_mnttab_cache, VAR_5);
 }

 return (0);
}
