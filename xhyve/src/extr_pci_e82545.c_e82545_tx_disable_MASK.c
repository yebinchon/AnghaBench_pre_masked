
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e82545_softc {int esc_mtx; int esc_tx_cond; scalar_t__ esc_tx_active; scalar_t__ esc_tx_enabled; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct e82545_softc *VAR_0)
{

 VAR_0->esc_tx_enabled = 0;
 while (VAR_0->esc_tx_active)
  FUNC_0(&VAR_0->esc_tx_cond, &VAR_0->esc_mtx);
}
