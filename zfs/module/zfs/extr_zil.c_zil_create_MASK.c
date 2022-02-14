
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zl_dmu_pool; int zl_os; int zl_spa; int zl_destroy_txg; TYPE_2__* zl_header; } ;
typedef TYPE_1__ zilog_t ;
struct TYPE_7__ {scalar_t__ zh_claim_txg; scalar_t__ zh_replay_seq; int zh_log; } ;
typedef TYPE_2__ zil_header_t ;
typedef int uint64_t ;
typedef int lwb_t ;
typedef int dmu_tx_t ;
typedef int boolean_t ;
typedef int blkptr_t ;
typedef int blk ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int ) ;
 int * FUNC_14 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_15 (TYPE_1__*,int *) ;
 int FUNC_16 (int ,int ,int ,int *,int ,int *) ;
 int FUNC_17 (int ,int ,int *) ;

__attribute__((used)) static lwb_t *
FUNC_18(zilog_t *VAR_4)
{
 const zil_header_t *VAR_5 = VAR_4->zl_header;
 lwb_t *VAR_6 = ((void*)0);
 uint64_t VAR_7 = 0;
 dmu_tx_t *VAR_8 = ((void*)0);
 blkptr_t VAR_9;
 int VAR_10 = 0;
 boolean_t VAR_11 = VAR_0;
 boolean_t VAR_12 = VAR_0;




 FUNC_13(VAR_4->zl_dmu_pool, VAR_4->zl_destroy_txg);

 FUNC_0(VAR_5->zh_claim_txg == 0);
 FUNC_0(VAR_5->zh_replay_seq == 0);

 VAR_9 = VAR_5->zh_log;






 if (FUNC_1(&VAR_9) || FUNC_2(&VAR_9)) {
  VAR_8 = FUNC_10(VAR_4->zl_os);
  FUNC_5(FUNC_8(VAR_8, VAR_2));
  FUNC_12(FUNC_7(VAR_4->zl_os), VAR_8);
  VAR_7 = FUNC_11(VAR_8);

  if (!FUNC_1(&VAR_9)) {
   FUNC_17(VAR_4->zl_spa, VAR_7, &VAR_9);
   FUNC_3(&VAR_9);
  }

  VAR_10 = FUNC_16(VAR_4->zl_spa, VAR_4->zl_os, VAR_7, &VAR_9,
      VAR_3, &VAR_12);
  VAR_11 = VAR_1;

  if (VAR_10 == 0)
   FUNC_15(VAR_4, &VAR_9);
 }




 if (VAR_10 == 0)
  VAR_6 = FUNC_14(VAR_4, &VAR_9, VAR_12, VAR_7, VAR_11);






 if (VAR_8 != ((void*)0)) {
  FUNC_9(VAR_8);
  FUNC_13(VAR_4->zl_dmu_pool, VAR_7);
 }

 FUNC_0(VAR_10 != 0 || FUNC_6(&VAR_9, &VAR_5->zh_log, sizeof (VAR_9)) == 0);
 FUNC_4(VAR_10 == 0, VAR_6 != ((void*)0));

 return (VAR_6);
}
