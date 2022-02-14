
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* set_intr_ready ) (struct vlapic*,int,int) ;} ;
struct vlapic {TYPE_1__ ops; struct LAPIC* apic_page; } ;
struct LAPIC {int svr; int irr0; int tmr0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vlapic*,char*,int) ;
 int FUNC_2 (struct vlapic*,char*,int,int,char*) ;
 int FUNC_3 (struct vlapic*,char*) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (struct vlapic*,int,int) ;
 int FUNC_6 (struct vlapic*,int ) ;

int
FUNC_7(struct vlapic *VAR_2, int VAR_3, bool VAR_4)
{
 struct LAPIC *VAR_5;
 uint32_t *VAR_6, *VAR_7, VAR_8;
 int VAR_9;

 FUNC_0(VAR_3 >= 0 && VAR_3 < 256, ("invalid vector %d", VAR_3));

 VAR_5 = VAR_2->apic_page;
 if (!(VAR_5->svr & VAR_1)) {
  FUNC_1(VAR_2, "vlapic is software disabled, ignoring "
      "interrupt %d", VAR_3);
  return (0);
 }

 if (VAR_3 < 16) {
  FUNC_6(VAR_2, VAR_0);
  FUNC_1(VAR_2, "vlapic ignoring interrupt to vector %d",
      VAR_3);
  return (1);
 }

 if (VAR_2->ops.set_intr_ready)
  return ((*VAR_2->ops.set_intr_ready)(VAR_2, VAR_3, VAR_4));

 VAR_9 = (VAR_3 / 32) * 4;
 VAR_8 = 1 << (VAR_3 % 32);

 VAR_6 = &VAR_5->irr0;
 FUNC_4(&VAR_6[VAR_9], VAR_8);





 VAR_7 = &VAR_5->tmr0;
 if ((VAR_7[VAR_9] & VAR_8) != (VAR_4 ? VAR_8 : 0)) {
  FUNC_2(VAR_2, "vlapic TMR[%d] is 0x%08x but "
      "interrupt is %s-triggered", VAR_9 / 4, VAR_7[VAR_9],
      VAR_4 ? "level" : "edge");
 }

 FUNC_3(VAR_2, "vlapic_set_intr_ready");
 return (1);
}
