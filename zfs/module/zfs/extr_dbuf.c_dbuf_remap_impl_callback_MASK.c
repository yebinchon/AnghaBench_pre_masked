
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;
struct TYPE_2__ {int drica_blk_birth; int * drica_tx; int * drica_os; } ;
typedef TYPE_1__ dbuf_remap_impl_callback_arg_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_8(uint64_t VAR_0, uint64_t VAR_1, uint64_t VAR_2,
    void *VAR_3)
{
 dbuf_remap_impl_callback_arg_t *VAR_4 = VAR_3;
 objset_t *VAR_5 = VAR_4->drica_os;
 spa_t *VAR_6 = FUNC_2(VAR_5);
 dmu_tx_t *VAR_7 = VAR_4->drica_tx;

 FUNC_0(FUNC_4(FUNC_5(VAR_6)));

 if (VAR_5 == FUNC_6(VAR_6)) {
  FUNC_7(VAR_6, VAR_0, VAR_1, VAR_2, VAR_7);
 } else {
  FUNC_3(FUNC_1(VAR_5), VAR_0, VAR_1,
      VAR_2, VAR_4->drica_blk_birth, VAR_7);
 }
}
