
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {int q_zios_this_txg; int q_total_zio_size_this_txg; } ;
typedef TYPE_1__ dsl_scan_io_queue_t ;
struct TYPE_7__ {int * blk_dva; } ;
typedef TYPE_2__ blkptr_t ;


 int FUNC_0 (TYPE_2__ const*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(dsl_scan_io_queue_t *VAR_0, const blkptr_t *VAR_1)
{
 int VAR_2;
 uint64_t VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
  VAR_3 += FUNC_1(&VAR_1->blk_dva[VAR_2]);
 }

 VAR_0->q_total_zio_size_this_txg += VAR_3;
 VAR_0->q_zios_this_txg++;
}
