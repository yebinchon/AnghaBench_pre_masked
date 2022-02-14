
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int (* pending_intr ) (struct vlapic*,int*) ;} ;
struct vlapic {TYPE_1__ ops; struct LAPIC* apic_page; } ;
struct LAPIC {int ppr; scalar_t__ irr0; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct vlapic*,char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct vlapic*,int*) ;

int
FUNC_5(struct vlapic *VAR_0, int *VAR_1)
{
 struct LAPIC *VAR_2 = VAR_0->apic_page;
 int VAR_3, VAR_4, VAR_5, VAR_6;
 uint32_t *VAR_7, VAR_8;

 if (VAR_0->ops.pending_intr)
  return ((*VAR_0->ops.pending_intr)(VAR_0, VAR_1));

 VAR_7 = &VAR_2->irr0;

 for (VAR_4 = 7; VAR_4 >= 0; VAR_4--) {
  VAR_3 = VAR_4 * 4;
  VAR_8 = FUNC_2(&VAR_7[VAR_3]);
  VAR_5 = FUNC_3((int) VAR_8);
  if (VAR_5 != 0) {
   VAR_6 = VAR_4 * 32 + (VAR_5 - 1);
   if (((unsigned) FUNC_0(VAR_6)) > FUNC_0(VAR_2->ppr)) {
    FUNC_1(VAR_0, "pending intr %d", VAR_6);
    if (VAR_1 != ((void*)0))
     *VAR_1 = VAR_6;
    return (1);
   } else
    break;
  }
 }
 return (0);
}
