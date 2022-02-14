
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int tx_objset; } ;
typedef TYPE_1__ dmu_tx_t ;
typedef int dmu_tx_hold_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (TYPE_1__*,int ,int ,int ,int ,int ) ;

void
FUNC_2(dmu_tx_t *VAR_1, uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4)
{
 dmu_tx_hold_t *VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_1->tx_objset,
     VAR_2, VAR_0, VAR_3, VAR_4);
 if (VAR_5 != ((void*)0))
  (void) FUNC_0(VAR_5, VAR_3, VAR_4);
}
