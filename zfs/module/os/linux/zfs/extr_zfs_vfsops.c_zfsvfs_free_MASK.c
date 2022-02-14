
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z_hold_size; int z_kstat; int z_vfs; int * z_hold_locks; int * z_hold_trees; int z_fuid_lock; int z_teardown_inactive_lock; int z_teardown_lock; int z_all_znodes; int z_lock; int z_znodes_lock; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef int kmutex_t ;
typedef int avl_tree_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;

void
FUNC_10(zfsvfs_t *VAR_0)
{
 int VAR_1, VAR_2 = VAR_0->z_hold_size;

 FUNC_8(VAR_0);

 FUNC_4(&VAR_0->z_znodes_lock);
 FUNC_4(&VAR_0->z_lock);
 FUNC_3(&VAR_0->z_all_znodes);
 FUNC_5(&VAR_0->z_teardown_lock);
 FUNC_6(&VAR_0->z_teardown_inactive_lock);
 FUNC_6(&VAR_0->z_fuid_lock);
 for (VAR_1 = 0; VAR_1 != VAR_2; VAR_1++) {
  FUNC_0(&VAR_0->z_hold_trees[VAR_1]);
  FUNC_4(&VAR_0->z_hold_locks[VAR_1]);
 }
 FUNC_7(VAR_0->z_hold_trees, sizeof (avl_tree_t) * VAR_2);
 FUNC_7(VAR_0->z_hold_locks, sizeof (kmutex_t) * VAR_2);
 FUNC_9(VAR_0->z_vfs);
 FUNC_1(&VAR_0->z_kstat);
 FUNC_2(VAR_0, sizeof (zfsvfs_t));
}
