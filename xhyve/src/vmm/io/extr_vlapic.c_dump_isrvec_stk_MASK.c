
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vlapic {int isrvec_stk_top; int* isrvec_stk; TYPE_1__* apic_page; } ;
struct TYPE_2__ {int isr0; } ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct vlapic *VAR_0)
{
 int VAR_1;
 uint32_t *VAR_2;

 VAR_2 = &VAR_0->apic_page->isr0;
 for (VAR_1 = 0; VAR_1 < 8; VAR_1++)
  FUNC_0("ISR%d 0x%08x\n", VAR_1, VAR_2[VAR_1 * 4]);

 for (VAR_1 = 0; VAR_1 <= VAR_0->isrvec_stk_top; VAR_1++)
  FUNC_0("isrvec_stk[%d] = %d\n", VAR_1, VAR_0->isrvec_stk[VAR_1]);
}
