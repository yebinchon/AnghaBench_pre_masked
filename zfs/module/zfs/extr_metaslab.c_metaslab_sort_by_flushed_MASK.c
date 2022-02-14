
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int ms_id; TYPE_1__* ms_group; int ms_unflushed_txg; } ;
typedef TYPE_3__ metaslab_t ;
struct TYPE_5__ {int vdev_id; } ;
struct TYPE_4__ {TYPE_2__* mg_vd; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const metaslab_t *VAR_2 = VAR_0;
 const metaslab_t *VAR_3 = VAR_1;

 int VAR_4 = FUNC_0(VAR_2->ms_unflushed_txg, VAR_3->ms_unflushed_txg);
 if (FUNC_1(VAR_4))
  return (VAR_4);

 uint64_t VAR_5 = VAR_2->ms_group->mg_vd->vdev_id;
 uint64_t VAR_6 = VAR_3->ms_group->mg_vd->vdev_id;
 VAR_4 = FUNC_0(VAR_5, VAR_6);
 if (VAR_4)
  return (VAR_4);

 return (FUNC_0(VAR_2->ms_id, VAR_3->ms_id));
}
