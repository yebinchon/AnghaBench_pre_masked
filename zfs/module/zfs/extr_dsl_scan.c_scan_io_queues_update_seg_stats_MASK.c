
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int q_segs_this_txg; int q_total_seg_size_this_txg; } ;
typedef TYPE_1__ dsl_scan_io_queue_t ;



__attribute__((used)) static void
FUNC_0(dsl_scan_io_queue_t *VAR_0, uint64_t VAR_1,
    uint64_t VAR_2)
{
 VAR_0->q_total_seg_size_this_txg += VAR_2 - VAR_1;
 VAR_0->q_segs_this_txg++;
}
