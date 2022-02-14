
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * z_ctldir; TYPE_3__* z_os; scalar_t__ z_issnap; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef int zfs_snapentry_t ;
typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_5__ {int * os_spa; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(zfsvfs_t *VAR_2)
{
 if (VAR_2->z_issnap) {
  zfs_snapentry_t *VAR_3;
  spa_t *VAR_4 = VAR_2->z_os->os_spa;
  uint64_t VAR_5 = FUNC_0(VAR_2->z_os);

  FUNC_2(&VAR_1, VAR_0);
  VAR_3 = FUNC_4(VAR_4, VAR_5);
  if (VAR_3 != ((void*)0))
   FUNC_6(VAR_3);
  FUNC_3(&VAR_1);
  if (VAR_3 != ((void*)0)) {
   FUNC_7(VAR_3);
   FUNC_5(VAR_3);
  }
 } else if (VAR_2->z_ctldir) {
  FUNC_1(VAR_2->z_ctldir);
  VAR_2->z_ctldir = ((void*)0);
 }
}
