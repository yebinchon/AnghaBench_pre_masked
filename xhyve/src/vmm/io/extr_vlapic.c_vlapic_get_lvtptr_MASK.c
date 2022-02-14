
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vlapic {struct LAPIC* apic_page; } ;
struct LAPIC {int lvt_cmci; int lvt_timer; } ;
 int FUNC_0 (char*) ;

__attribute__((used)) static __inline uint32_t *
FUNC_1(struct vlapic *VAR_0, uint32_t VAR_1)
{
 struct LAPIC *VAR_2 = VAR_0->apic_page;
 int VAR_3;

 switch (VAR_1) {
 case 134:
  return (&VAR_2->lvt_cmci);
 case 128:
 case 129:
 case 130:
 case 132:
 case 131:
 case 133:
  VAR_3 = (VAR_1 - 128) >> 2;
  return ((&VAR_2->lvt_timer) + VAR_3);;
 default:
  FUNC_0("vlapic_get_lvt: invalid LVT\n");
 }
}
