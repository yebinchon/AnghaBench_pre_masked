
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {scalar_t__ scn_visited_this_txg; int scn_sync_start_time; scalar_t__ scn_async_block_min_time_ms; TYPE_2__* scn_dp; } ;
typedef TYPE_1__ dsl_scan_t ;
typedef int boolean_t ;
struct TYPE_5__ {int dp_spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static boolean_t
FUNC_4(dsl_scan_t *VAR_6)
{
 uint64_t VAR_7;

 if (VAR_4)
  return (VAR_0);

 if (VAR_3 != 0 &&
     VAR_6->scn_visited_this_txg >= VAR_3) {
  return (VAR_1);
 }

 VAR_7 = FUNC_1() - VAR_6->scn_sync_start_time;
 return (VAR_7 / VAR_2 > VAR_5 ||
     (FUNC_0(VAR_7) > VAR_6->scn_async_block_min_time_ms &&
     FUNC_3(VAR_6->scn_dp)) ||
     FUNC_2(VAR_6->scn_dp->dp_spa));
}
