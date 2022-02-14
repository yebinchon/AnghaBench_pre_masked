
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {unsigned long long zcr_align; struct TYPE_18__* zcr_next; int * zcr_ereport; int zcr_detector; int zcr_length; void* zcr_ckinfo; } ;
typedef TYPE_4__ zio_cksum_report_t ;
typedef int zio_bad_cksum_t ;
typedef int zbookmark_phys_t ;
struct TYPE_19__ {TYPE_2__* vdev_top; } ;
typedef TYPE_5__ vdev_t ;
typedef int uint64_t ;
struct zio {TYPE_3__* io_logical; TYPE_1__* io_vsd_ops; int * io_vsd; } ;
struct TYPE_20__ {int spa_errlist_lock; } ;
typedef TYPE_6__ spa_t ;
struct TYPE_17__ {TYPE_4__* io_cksum_report; } ;
struct TYPE_16__ {unsigned long long vdev_ashift; } ;
struct TYPE_15__ {int (* vsd_cksum_report ) (struct zio*,TYPE_4__*,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void*,int) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct zio*,TYPE_4__*,void*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int **,int *,int ,TYPE_6__*,TYPE_5__*,int const*,struct zio*,int ,int ) ;
 scalar_t__ FUNC_7 (int ,TYPE_5__*) ;
 int FUNC_8 (struct zio*,TYPE_4__*,void*) ;

void
FUNC_9(spa_t *VAR_2, vdev_t *VAR_3, const zbookmark_phys_t *VAR_4,
    struct zio *VAR_5, uint64_t VAR_6, uint64_t VAR_7, void *VAR_8,
    zio_bad_cksum_t *VAR_9)
{
 zio_cksum_report_t *VAR_10;






 VAR_10 = FUNC_1(sizeof (*VAR_10), VAR_1);

 if (VAR_5->io_vsd != ((void*)0))
  VAR_5->io_vsd_ops->vsd_cksum_report(VAR_5, VAR_10, VAR_8);
 else
  FUNC_8(VAR_5, VAR_10, VAR_8);


 if (VAR_9 != ((void*)0)) {
  VAR_10->zcr_ckinfo = FUNC_1(sizeof (*VAR_9), VAR_1);
  FUNC_0(VAR_9, VAR_10->zcr_ckinfo, sizeof (*VAR_9));
 }

 VAR_10->zcr_align = 1ULL << VAR_3->vdev_top->vdev_ashift;
 VAR_10->zcr_length = VAR_7;
 FUNC_2(&VAR_2->spa_errlist_lock);
 VAR_10->zcr_next = VAR_5->io_logical->io_cksum_report;
 VAR_5->io_logical->io_cksum_report = VAR_10;
 FUNC_3(&VAR_2->spa_errlist_lock);
}
