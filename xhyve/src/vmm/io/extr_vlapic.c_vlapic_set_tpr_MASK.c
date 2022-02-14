
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct vlapic {int vcpuid; int vm; struct LAPIC* apic_page; } ;
struct LAPIC {scalar_t__ tpr; } ;


 int FUNC_0 (int ,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct vlapic*) ;

__attribute__((used)) static void
FUNC_2(struct vlapic *VAR_0, uint8_t VAR_1)
{
 struct LAPIC *VAR_2 = VAR_0->apic_page;

 if (VAR_2->tpr != VAR_1) {
  FUNC_0(VAR_0->vm, VAR_0->vcpuid, "vlapic TPR changed "
      "from %#x to %#x", VAR_2->tpr, VAR_1);
  VAR_2->tpr = VAR_1;
  FUNC_1(VAR_0);
 }
}
