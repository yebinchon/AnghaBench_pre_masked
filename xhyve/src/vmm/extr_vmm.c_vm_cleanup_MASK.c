
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int num_mem_segs; int * mem_segs; int cookie; int vioapic; int vatpic; int vhpet; int vatpit; int vpmtmr; int vrtc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vm*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct vm *VAR_1, bool VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_3(VAR_1, VAR_4, VAR_2);
 }

 if (VAR_2) {
  FUNC_8(VAR_1->vrtc);
 } else {
  FUNC_9(VAR_1->vrtc);
 }
 FUNC_7(VAR_1->vpmtmr);
 FUNC_2(VAR_1->vatpit);
 FUNC_4(VAR_1->vhpet);
 FUNC_1(VAR_1->vatpic);
 FUNC_5(VAR_1->vioapic);

 FUNC_0(VAR_1->cookie);

 if (VAR_2) {
  for (VAR_3 = 0; VAR_3 < VAR_1->num_mem_segs; VAR_3++) {
   FUNC_6(&VAR_1->mem_segs[VAR_3]);
  }

  VAR_1->num_mem_segs = 0;
 }
}
