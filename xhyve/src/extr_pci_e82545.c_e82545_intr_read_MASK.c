
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct e82545_softc {int esc_ICR; int esc_ITR; int esc_IMS; } ;


 int FUNC_0 (char*,int) ;





 int FUNC_1 (struct e82545_softc*,int) ;

__attribute__((used)) static uint32_t
FUNC_2(struct e82545_softc *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = 0;

 FUNC_0("intr_read: off %x\n\r", VAR_1);

 switch (VAR_1) {
 case 132:
  VAR_2 = VAR_0->esc_ICR;
  VAR_0->esc_ICR = 0;
  FUNC_1(VAR_0, (uint32_t)~0);
  break;
 case 128:
  VAR_2 = VAR_0->esc_ITR;
  break;
 case 131:

  break;
 case 129:
  VAR_2 = VAR_0->esc_IMS;
  break;
 case 130:

  break;
 default:
  break;
 }

 return (VAR_2);
}
