
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlapic {int vm; struct LAPIC* apic_page; } ;
struct LAPIC {int dfr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vlapic*,char*) ;
 int FUNC_1 (struct vlapic*,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (struct vlapic*) ;

void
FUNC_4(struct vlapic *VAR_4)
{
 struct LAPIC *VAR_5;

 VAR_5 = VAR_4->apic_page;
 if (FUNC_3(VAR_4)) {
  FUNC_2(VAR_4->vm, "ignoring write to DFR in x2apic mode: %#x",
      VAR_5->dfr);
  VAR_5->dfr = 0;
  return;
 }

 VAR_5->dfr &= VAR_2;
 VAR_5->dfr |= VAR_3;

 if ((VAR_5->dfr & VAR_2) == VAR_1) {
  FUNC_0(VAR_4, "vlapic DFR in Flat Model");
 } else if ((VAR_5->dfr & VAR_2) == VAR_0) {
  FUNC_0(VAR_4, "vlapic DFR in Cluster Model");
 } else {
  FUNC_1(VAR_4, "DFR in Unknown Model %#x", VAR_5->dfr);
 }
}
