
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_sync_lock; } ;
typedef TYPE_1__ tx_state_t ;
typedef int kcondvar_t ;
typedef scalar_t__ clock_t ;
typedef int callb_cpr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(tx_state_t *VAR_0, callb_cpr_t *VAR_1, kcondvar_t *VAR_2, clock_t VAR_3)
{
 FUNC_0(VAR_1);






 if (VAR_3) {
  (void) FUNC_2(VAR_2, &VAR_0->tx_sync_lock,
      FUNC_4() + VAR_3);
 } else {
  FUNC_3(VAR_2, &VAR_0->tx_sync_lock);
 }

 FUNC_1(VAR_1, &VAR_0->tx_sync_lock);
}
