
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct e82545_softc {int esc_CTRL; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct e82545_softc*,int) ;

__attribute__((used)) static void
FUNC_2(struct e82545_softc *VAR_1, uint32_t VAR_2)
{

 VAR_1->esc_CTRL = VAR_2 & (uint32_t)~VAR_0;

 if (VAR_2 & VAR_0) {
  FUNC_0("e1k: s/w reset, ctl %x\n", VAR_2);
  FUNC_1(VAR_1, 1);
 }

}
