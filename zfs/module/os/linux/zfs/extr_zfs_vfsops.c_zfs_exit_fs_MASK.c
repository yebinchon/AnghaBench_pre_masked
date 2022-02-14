
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* z_os; scalar_t__ z_snap_defer_time; int z_issnap; } ;
typedef TYPE_1__ zfsvfs_t ;
struct TYPE_5__ {int os_spa; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int) ;

inline void
FUNC_4(zfsvfs_t *VAR_3)
{
 if (!VAR_3->z_issnap)
  return;

 if (FUNC_2(VAR_1, VAR_3->z_snap_defer_time +
     FUNC_0(VAR_2 * VAR_0 / 2, VAR_0))) {
  VAR_3->z_snap_defer_time = VAR_1;
  FUNC_3(VAR_3->z_os->os_spa,
      FUNC_1(VAR_3->z_os),
      VAR_2);
 }
}
