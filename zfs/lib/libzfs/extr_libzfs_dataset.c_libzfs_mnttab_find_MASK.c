
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mnttab {char* mnt_special; int mnt_fstype; int member_0; } ;
struct TYPE_8__ {struct mnttab mtn_mt; } ;
typedef TYPE_1__ mnttab_node_t ;
struct TYPE_9__ {int libzfs_mnttab_cache_lock; int libzfs_mnttab_cache; int libzfs_mnttab; int libzfs_mnttab_enable; } ;
typedef TYPE_2__ libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*,int ) ;
 scalar_t__ FUNC_3 (int ,struct mnttab*,struct mnttab*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(libzfs_handle_t *VAR_3, const char *VAR_4,
    struct mnttab *VAR_5)
{
 mnttab_node_t VAR_6;
 mnttab_node_t *VAR_7;
 int VAR_8 = VAR_0;

 if (!VAR_3->libzfs_mnttab_enable) {
  struct mnttab VAR_9 = { 0 };

  if (FUNC_1(&VAR_3->libzfs_mnttab_cache))
   FUNC_4(VAR_3);


  if (FUNC_2(VAR_1, "r", VAR_3->libzfs_mnttab) == ((void*)0))
   return (VAR_0);

  VAR_9.mnt_special = (char *)VAR_4;
  VAR_9.mnt_fstype = VAR_2;
  if (FUNC_3(VAR_3->libzfs_mnttab, VAR_5, &VAR_9) == 0)
   return (0);
  else
   return (VAR_0);
 }

 FUNC_6(&VAR_3->libzfs_mnttab_cache_lock);
 if (FUNC_1(&VAR_3->libzfs_mnttab_cache) == 0) {
  int VAR_10;

  if ((VAR_10 = FUNC_5(VAR_3)) != 0) {
   FUNC_7(&VAR_3->libzfs_mnttab_cache_lock);
   return (VAR_10);
  }
 }

 VAR_6.mtn_mt.mnt_special = (char *)VAR_4;
 VAR_7 = FUNC_0(&VAR_3->libzfs_mnttab_cache, &VAR_6, ((void*)0));
 if (VAR_7) {
  *VAR_5 = VAR_7->mtn_mt;
  VAR_8 = 0;
 }
 FUNC_7(&VAR_3->libzfs_mnttab_cache_lock);
 return (VAR_8);
}
