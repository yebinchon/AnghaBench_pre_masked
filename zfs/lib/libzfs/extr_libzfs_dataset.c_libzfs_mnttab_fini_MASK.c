
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* mnt_mntopts; TYPE_2__* mnt_fstype; TYPE_2__* mnt_mountp; TYPE_2__* mnt_special; } ;
struct TYPE_8__ {TYPE_1__ mtn_mt; } ;
typedef TYPE_2__ mnttab_node_t ;
struct TYPE_9__ {int libzfs_mnttab_cache_lock; int libzfs_mnttab_cache; } ;
typedef TYPE_3__ libzfs_handle_t ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *,void**) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;

void
FUNC_4(libzfs_handle_t *VAR_0)
{
 void *VAR_1 = ((void*)0);
 mnttab_node_t *VAR_2;

 while ((VAR_2 = FUNC_1(&VAR_0->libzfs_mnttab_cache, &VAR_1))
     != ((void*)0)) {
  FUNC_2(VAR_2->mtn_mt.mnt_special);
  FUNC_2(VAR_2->mtn_mt.mnt_mountp);
  FUNC_2(VAR_2->mtn_mt.mnt_fstype);
  FUNC_2(VAR_2->mtn_mt.mnt_mntopts);
  FUNC_2(VAR_2);
 }
 FUNC_0(&VAR_0->libzfs_mnttab_cache);
 (void) FUNC_3(&VAR_0->libzfs_mnttab_cache_lock);
}
