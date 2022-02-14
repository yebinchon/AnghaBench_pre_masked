
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* scn_dp; } ;
typedef TYPE_2__ dsl_scan_t ;
typedef int dmu_tx_t ;
struct TYPE_8__ {TYPE_2__* dp_scan; } ;
struct TYPE_6__ {int dp_spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;
 int FUNC_3 (int ,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3, dmu_tx_t *VAR_4)
{
 dsl_scan_t *VAR_5 = FUNC_0(VAR_4)->dp_scan;

 FUNC_1(VAR_5, VAR_0, VAR_4);
 FUNC_2(VAR_5, VAR_4, VAR_2);
 FUNC_3(VAR_5->scn_dp->dp_spa, ((void*)0), ((void*)0), VAR_1);
}
