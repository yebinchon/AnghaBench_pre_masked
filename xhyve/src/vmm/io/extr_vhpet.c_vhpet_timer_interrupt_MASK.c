
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhpet {int isr; int vm; TYPE_1__* timer; } ;
struct TYPE_2__ {int msireg; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,int) ;
 scalar_t__ FUNC_2 (struct vhpet*,int) ;
 int FUNC_3 (struct vhpet*,int) ;
 int FUNC_4 (struct vhpet*,int) ;
 scalar_t__ FUNC_5 (struct vhpet*,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(struct vhpet *VAR_0, int VAR_1)
{
 int VAR_2;


 if (!FUNC_3(VAR_0, VAR_1))
  return;




 if ((VAR_0->isr & (1 << VAR_1)) != 0) {
  FUNC_0(VAR_0->vm, "hpet t%d intr is already asserted", VAR_1);
  return;
 }

 if (FUNC_5(VAR_0, VAR_1)) {
  FUNC_1(VAR_0->vm, VAR_0->timer[VAR_1].msireg >> 32,
      VAR_0->timer[VAR_1].msireg & 0xffffffff);
  return;
 }

 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (VAR_2 == 0) {
  FUNC_0(VAR_0->vm, "hpet t%d intr is not routed to ioapic", VAR_1);
  return;
 }

 if (FUNC_2(VAR_0, VAR_1)) {
  FUNC_7(VAR_0->vm, VAR_2);
 } else {
  VAR_0->isr |= 1 << VAR_1;
  FUNC_6(VAR_0->vm, VAR_2);
 }
}
