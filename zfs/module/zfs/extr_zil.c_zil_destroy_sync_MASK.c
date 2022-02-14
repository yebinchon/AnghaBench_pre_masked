
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* zl_header; int zl_lwb_list; } ;
typedef TYPE_2__ zilog_t ;
typedef int dmu_tx_t ;
struct TYPE_5__ {int zh_claim_txg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,int ,int *,int ,int ) ;

void
FUNC_3(zilog_t *VAR_3, dmu_tx_t *VAR_4)
{
 FUNC_0(FUNC_1(&VAR_3->zl_lwb_list));
 (void) FUNC_2(VAR_3, VAR_1,
     VAR_2, VAR_4, VAR_3->zl_header->zh_claim_txg, VAR_0);
}
