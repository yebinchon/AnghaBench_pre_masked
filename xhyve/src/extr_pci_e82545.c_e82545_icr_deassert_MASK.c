
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct e82545_softc {int esc_ICR; int esc_IMS; scalar_t__ esc_irq_asserted; int esc_pi; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct e82545_softc *VAR_0, uint32_t VAR_1)
{

 FUNC_0("icr deassert: 0x%x\r\n", VAR_1);
 VAR_0->esc_ICR &= ~VAR_1;





 if (VAR_0->esc_irq_asserted && !(VAR_0->esc_ICR & VAR_0->esc_IMS)) {
  FUNC_0("icr deassert: lintr deassert %x\r\n", VAR_1);
  FUNC_1(VAR_0->esc_pi);
  VAR_0->esc_irq_asserted = 0;
 }
}
