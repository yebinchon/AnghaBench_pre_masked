
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_active; int irq; } ;
struct atkbdc_softc {int* ram; TYPE_1__ aux; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct atkbdc_softc *VAR_1)
{
 if ((VAR_1->ram[0] & VAR_0) != 0) {
  VAR_1->aux.irq_active = 1;
  FUNC_0(VAR_1->aux.irq, VAR_1->aux.irq);
 }
}
