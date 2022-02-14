
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct e82545_softc {int esc_tx_enabled; int esc_TCTL; int * esc_txdesc; scalar_t__ esc_tdba; } ;


 int VAR_0 ;
 int FUNC_0 (struct e82545_softc*) ;
 int FUNC_1 (struct e82545_softc*) ;
 int FUNC_2 (struct e82545_softc*) ;

__attribute__((used)) static void
FUNC_3(struct e82545_softc *VAR_1, uint32_t VAR_2)
{
 int VAR_3;

 VAR_3 = ((VAR_2 & VAR_0) == VAR_0);


 if (VAR_3 == VAR_1->esc_tx_enabled)
  return;

 if (VAR_3) {
  FUNC_2(VAR_1);
  FUNC_1(VAR_1);
 } else {
  FUNC_0(VAR_1);
  VAR_1->esc_tdba = 0;
  VAR_1->esc_txdesc = ((void*)0);
 }


 VAR_1->esc_TCTL = VAR_2 & ~0xFE800005;
}
