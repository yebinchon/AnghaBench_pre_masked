
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlapic {struct LAPIC* apic_page; } ;
struct LAPIC {unsigned int ldr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vlapic*,char*,unsigned int) ;
 scalar_t__ FUNC_1 (struct vlapic*) ;
 unsigned int FUNC_2 (struct vlapic*) ;

void
FUNC_3(struct vlapic *VAR_1)
{
 struct LAPIC *VAR_2;

 VAR_2 = VAR_1->apic_page;


 if (FUNC_1(VAR_1)) {
  FUNC_0(VAR_1, "ignoring write to LDR in x2apic mode: %#x",
      VAR_2->ldr);
  VAR_2->ldr = FUNC_2(VAR_1);
 } else {
  VAR_2->ldr &= ~((unsigned) VAR_0);
  FUNC_0(VAR_1, "vlapic LDR set to %#x", VAR_2->ldr);
 }
}
