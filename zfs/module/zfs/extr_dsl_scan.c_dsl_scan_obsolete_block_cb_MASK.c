
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dva_t ;
struct TYPE_7__ {int scn_visited_this_txg; TYPE_1__* scn_dp; } ;
typedef TYPE_2__ dsl_scan_t ;
typedef int dmu_tx_t ;
typedef int boolean_t ;
struct TYPE_8__ {int * blk_dva; } ;
typedef TYPE_3__ blkptr_t ;
struct TYPE_6__ {int dp_spa; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_7(void *VAR_1, const blkptr_t *VAR_2, boolean_t VAR_3,
    dmu_tx_t *VAR_4)
{
 FUNC_0(!VAR_3);
 dsl_scan_t *VAR_5 = VAR_1;
 const dva_t *VAR_6 = &VAR_2->blk_dva[0];

 if (FUNC_5(VAR_5))
  return (FUNC_4(VAR_0));

 FUNC_6(VAR_5->scn_dp->dp_spa,
     FUNC_3(VAR_6), FUNC_2(VAR_6),
     FUNC_1(VAR_6), VAR_4);
 VAR_5->scn_visited_this_txg++;
 return (0);
}
