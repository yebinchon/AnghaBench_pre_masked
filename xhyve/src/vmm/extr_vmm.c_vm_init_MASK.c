
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int suspended_cpus; scalar_t__ suspend; int active_cpus; int vrtc; int vpmtmr; int vatpit; int vatpic; int vhpet; int vioapic; int cookie; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vm*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (struct vm*) ;
 int FUNC_4 (struct vm*) ;
 int FUNC_5 (struct vm*,int,int) ;
 int FUNC_6 (struct vm*) ;
 int FUNC_7 (struct vm*) ;
 int FUNC_8 (struct vm*) ;
 int FUNC_9 (struct vm*) ;

__attribute__((used)) static void
FUNC_10(struct vm *VAR_1, bool VAR_2)
{
 int VAR_3;

 if (VAR_2) {
  FUNC_2();
 }

 VAR_1->cookie = FUNC_1(VAR_1);
 VAR_1->vioapic = FUNC_7(VAR_1);
 VAR_1->vhpet = FUNC_6(VAR_1);
 VAR_1->vatpic = FUNC_3(VAR_1);
 VAR_1->vatpit = FUNC_4(VAR_1);
 VAR_1->vpmtmr = FUNC_8(VAR_1);

 if (VAR_2) {
  VAR_1->vrtc = FUNC_9(VAR_1);
 }

 FUNC_0(&VAR_1->active_cpus);

 VAR_1->suspend = 0;
 FUNC_0(&VAR_1->suspended_cpus);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_5(VAR_1, VAR_3, VAR_2);
 }
}
