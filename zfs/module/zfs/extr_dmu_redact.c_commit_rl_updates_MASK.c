
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint64_t ;
struct redact_block_list_node {int dummy; } ;
struct merge_data {size_t md_latest_synctask_txg; int md_last_time; int md_redact_block_pending; int * md_blocks; TYPE_1__* md_furthest; scalar_t__* md_synctask_txg; } ;
struct TYPE_6__ {int os_spa; } ;
typedef TYPE_2__ objset_t ;
typedef int dmu_tx_t ;
struct TYPE_7__ {int dp_mos_dir; } ;
struct TYPE_5__ {size_t rbp_object; size_t rbp_blkid; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,struct merge_data*,int,int ,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int *) ;
 int VAR_4 ;
 TYPE_3__* FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(objset_t *VAR_5, struct merge_data *VAR_6, uint64_t VAR_7,
    uint64_t VAR_8)
{
 dmu_tx_t *VAR_9 = FUNC_3(FUNC_10(VAR_5->os_spa)->dp_mos_dir);
 FUNC_5(VAR_9, sizeof (struct redact_block_list_node));
 FUNC_0(FUNC_1(VAR_9, VAR_2));
 uint64_t VAR_10 = FUNC_4(VAR_9);
 if (!VAR_6->md_synctask_txg[VAR_10 & VAR_1]) {
  FUNC_7(FUNC_6(VAR_9),
      VAR_4, VAR_6, 5, VAR_3,
      VAR_9);
  VAR_6->md_synctask_txg[VAR_10 & VAR_1] = VAR_0;
  VAR_6->md_latest_synctask_txg = VAR_10;
 }
 VAR_6->md_furthest[VAR_10 & VAR_1].rbp_object = VAR_7;
 VAR_6->md_furthest[VAR_10 & VAR_1].rbp_blkid = VAR_8;
 FUNC_9(&VAR_6->md_blocks[VAR_10 & VAR_1],
     &VAR_6->md_redact_block_pending);
 FUNC_2(VAR_9);
 VAR_6->md_last_time = FUNC_8();
}
