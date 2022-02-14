
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {int io_flags; int io_spa; } ;
typedef TYPE_5__ zio_t ;
struct TYPE_18__ {int member_0; } ;
struct TYPE_17__ {TYPE_3__ member_0; } ;
struct TYPE_21__ {TYPE_2__ member_0; } ;
typedef TYPE_6__ zio_bad_cksum_t ;
struct TYPE_16__ {int vs_checksum_errors; } ;
struct TYPE_22__ {int vdev_stat_lock; TYPE_1__ vdev_stat; } ;
typedef TYPE_7__ vdev_t ;
struct TYPE_23__ {int is_size; int is_target_offset; TYPE_4__* is_good_child; } ;
typedef TYPE_8__ indirect_split_t ;
struct TYPE_24__ {int * ic_data; TYPE_7__* ic_vdev; } ;
typedef TYPE_9__ indirect_child_t ;
typedef int abd_t ;
struct TYPE_19__ {int * ic_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_7__*,int *,TYPE_5__*,int ,int ,int *,int *,TYPE_6__*) ;

__attribute__((used)) static void
FUNC_3(zio_t *VAR_1,
    indirect_split_t *VAR_2, indirect_child_t *VAR_3)
{
 vdev_t *VAR_4 = VAR_3->ic_vdev;

 if (VAR_1->io_flags & VAR_0)
  return;

 FUNC_0(&VAR_4->vdev_stat_lock);
 VAR_4->vdev_stat.vs_checksum_errors++;
 FUNC_1(&VAR_4->vdev_stat_lock);

 zio_bad_cksum_t VAR_5 = {{{ 0 }}};
 abd_t *VAR_6 = VAR_3->ic_data;
 abd_t *VAR_7 = VAR_2->is_good_child->ic_data;
 FUNC_2(VAR_1->io_spa, VAR_4, ((void*)0), VAR_1,
     VAR_2->is_target_offset, VAR_2->is_size, VAR_7, VAR_6, &VAR_5);
}
