
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int scn_visited_this_txg; TYPE_2__* scn_dp; int scn_zio_root; int scn_is_bptree; } ;
typedef TYPE_3__ dsl_scan_t ;
struct TYPE_12__ {TYPE_1__* tx_pool; } ;
typedef TYPE_4__ dmu_tx_t ;
typedef int blkptr_t ;
struct TYPE_10__ {int dp_spa; } ;
struct TYPE_9__ {int dp_free_dir; } ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int const*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,int ,int ,int ,int ,TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,int ,int ,int const*,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(void *VAR_3, const blkptr_t *VAR_4, dmu_tx_t *VAR_5)
{
 dsl_scan_t *VAR_6 = VAR_3;

 if (!VAR_6->scn_is_bptree ||
     (FUNC_0(VAR_4) == 0 && FUNC_2(VAR_4) != VAR_1)) {
  if (FUNC_8(VAR_6))
   return (FUNC_4(VAR_2));
 }

 FUNC_10(FUNC_9(VAR_6->scn_zio_root, VAR_6->scn_dp->dp_spa,
     FUNC_6(VAR_5), VAR_4, 0));
 FUNC_7(VAR_5->tx_pool->dp_free_dir, VAR_0,
     -FUNC_5(VAR_6->scn_dp->dp_spa, VAR_4),
     -FUNC_1(VAR_4), -FUNC_3(VAR_4), VAR_5);
 VAR_6->scn_visited_this_txg++;
 return (0);
}
