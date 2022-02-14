
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vlapic {int* isrvec_stk; size_t isrvec_stk_top; TYPE_1__* apic_page; } ;
struct TYPE_2__ {int isr0; int ppr; scalar_t__ tpr; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct vlapic*,char*,int) ;
 int FUNC_2 (struct vlapic*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(struct vlapic *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;







 VAR_1 = VAR_0->isrvec_stk[VAR_0->isrvec_stk_top];
 VAR_2 = (int) VAR_0->apic_page->tpr;


 {
  int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
  uint32_t *VAR_9;

  if (VAR_0->isrvec_stk_top == 0 && VAR_1 != 0)
   FUNC_3("isrvec_stk is corrupted: %d\n", VAR_1);





  VAR_5 = -1;
  for (VAR_4 = 1; VAR_4 <= VAR_0->isrvec_stk_top; VAR_4++) {
   VAR_6 = FUNC_0(VAR_0->isrvec_stk[VAR_4]);
   if (VAR_6 <= VAR_5) {
    FUNC_2(VAR_0);
    FUNC_3("isrvec_stk does not satisfy invariant\n");
   }
   VAR_5 = VAR_6;
  }





  VAR_4 = 1;
  VAR_9 = &VAR_0->apic_page->isr0;
  for (VAR_7 = 0; VAR_7 < 256; VAR_7++) {
   VAR_8 = (VAR_7 / 32) * 4;
   if (VAR_9[VAR_8] & (1 << (VAR_7 % 32))) {
    if (VAR_4 > VAR_0->isrvec_stk_top ||
        VAR_0->isrvec_stk[VAR_4] != VAR_7) {
     FUNC_2(VAR_0);
     FUNC_3("ISR and isrvec_stk out of sync\n");
    }
    VAR_4++;
   }
  }
 }


 if (FUNC_0(VAR_2) >= FUNC_0(VAR_1))
  VAR_3 = VAR_2;
 else
  VAR_3 = VAR_1 & 0xf0;

 VAR_0->apic_page->ppr = (uint32_t) VAR_3;
 FUNC_1(VAR_0, "vlapic_update_ppr 0x%02x", VAR_3);
}
