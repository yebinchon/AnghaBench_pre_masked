
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z_lock; TYPE_2__* z_dirlocks; int z_name_lock; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_6__ {int dl_sharecnt; scalar_t__ dl_namesize; int dl_cv; struct TYPE_6__* dl_name; struct TYPE_6__* dl_next; int dl_namelock; TYPE_1__* dl_dzp; } ;
typedef TYPE_2__ zfs_dirlock_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(zfs_dirlock_t *VAR_0)
{
 znode_t *VAR_1 = VAR_0->dl_dzp;
 zfs_dirlock_t **VAR_2, *VAR_3;

 FUNC_3(&VAR_1->z_lock);

 if (!VAR_0->dl_namelock)
  FUNC_5(&VAR_1->z_name_lock);

 if (VAR_0->dl_sharecnt > 1) {
  VAR_0->dl_sharecnt--;
  FUNC_4(&VAR_1->z_lock);
  return;
 }
 VAR_2 = &VAR_1->z_dirlocks;
 while ((VAR_3 = *VAR_2) != VAR_0)
  VAR_2 = &VAR_3->dl_next;
 *VAR_2 = VAR_0->dl_next;
 FUNC_0(&VAR_0->dl_cv);
 FUNC_4(&VAR_1->z_lock);

 if (VAR_0->dl_namesize != 0)
  FUNC_2(VAR_0->dl_name, VAR_0->dl_namesize);
 FUNC_1(&VAR_0->dl_cv);
 FUNC_2(VAR_0, sizeof (*VAR_0));
}
