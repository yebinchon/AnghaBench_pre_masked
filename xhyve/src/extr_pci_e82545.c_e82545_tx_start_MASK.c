
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e82545_softc {scalar_t__ esc_tx_active; int esc_tx_cond; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct e82545_softc *VAR_0)
{

 if (VAR_0->esc_tx_active == 0)
  FUNC_0(&VAR_0->esc_tx_cond);
}
