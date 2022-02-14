
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct e82545_softc {int esc_RCTL; int esc_rx_enabled; int esc_rx_loopback; int * esc_rxdesc; scalar_t__ esc_rdba; } ;


 int FUNC_0 (char*,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e82545_softc*) ;
 int FUNC_2 (struct e82545_softc*) ;
 int FUNC_3 (struct e82545_softc*) ;

__attribute__((used)) static void
FUNC_4(struct e82545_softc *VAR_2, uint32_t VAR_3)
{
 int VAR_4;

 VAR_4 = ((VAR_3 & VAR_0) == VAR_0);


 VAR_2->esc_RCTL = VAR_3 & ~0xF9204c01;

 FUNC_0("rx_ctl - %s RCTL %x, val %x\n",
  VAR_4 ? "on" : "off", VAR_2->esc_RCTL, VAR_3);


 if (VAR_4 != VAR_2->esc_rx_enabled) {
  if (VAR_4) {



   if (VAR_2->esc_RCTL & VAR_1) {
    VAR_2->esc_rx_loopback = 1;
   } else {
    VAR_2->esc_rx_loopback = 0;
   }

   FUNC_3(VAR_2);
   FUNC_2(VAR_2);
  } else {
   FUNC_1(VAR_2);
   VAR_2->esc_rx_loopback = 0;
   VAR_2->esc_rdba = 0;
   VAR_2->esc_rxdesc = ((void*)0);
  }
 }
}
