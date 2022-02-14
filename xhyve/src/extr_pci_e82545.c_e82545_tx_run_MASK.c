
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct e82545_softc {int esc_TDH; int esc_TDT; int esc_TDLEN; int esc_TDHr; int esc_mtx; scalar_t__ esc_tx_enabled; } ;


 int FUNC_0 (char*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e82545_softc*,int) ;
 int FUNC_2 (struct e82545_softc*,int,int,int,int*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct e82545_softc *VAR_2)
{
 uint32_t VAR_3;
 uint16_t VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_4 = VAR_2->esc_TDH;
 VAR_6 = VAR_2->esc_TDT;
 VAR_7 = (uint16_t)(VAR_2->esc_TDLEN / 16);
 FUNC_0("tx_run: head %x, rhead %x, tail %x\r\n",
     VAR_2->esc_TDH, VAR_2->esc_TDHr, VAR_2->esc_TDT);

 FUNC_4(&VAR_2->esc_mtx);
 VAR_5 = VAR_4;
 VAR_9 = 0;
 for (VAR_8 = VAR_7 / 4; VAR_2->esc_tx_enabled && VAR_8 > 0; VAR_8 -= VAR_10) {
  VAR_10 = FUNC_2(VAR_2, VAR_4, VAR_6, VAR_7, &VAR_5, &VAR_9);
  if (VAR_10 == 0)
   break;
  VAR_4 = VAR_5;
 }
 FUNC_3(&VAR_2->esc_mtx);

 VAR_2->esc_TDH = VAR_4;
 VAR_2->esc_TDHr = VAR_5;
 VAR_3 = 0;
 if (VAR_9)
  VAR_3 |= VAR_0;
 if (VAR_8 != VAR_7 / 4 && VAR_2->esc_TDH == VAR_2->esc_TDT)
  VAR_3 |= VAR_1;
 if (VAR_3)
  FUNC_1(VAR_2, VAR_3);

 FUNC_0("tx_run done: head %x, rhead %x, tail %x\r\n",
     VAR_2->esc_TDH, VAR_2->esc_TDHr, VAR_2->esc_TDT);
}
