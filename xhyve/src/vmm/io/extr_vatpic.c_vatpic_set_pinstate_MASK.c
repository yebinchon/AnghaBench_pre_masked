
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vatpic {int* elc; struct atpic* atpic; } ;
struct atpic {int* acnt; int request; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vatpic*,char*,int) ;
 int FUNC_2 (struct vatpic*,char*,int,int) ;
 int FUNC_3 (struct vatpic*,char*,int,char*,int) ;
 int FUNC_4 (struct vatpic*) ;

__attribute__((used)) static void
FUNC_5(struct vatpic *VAR_0, int VAR_1, bool VAR_2)
{
 struct atpic *VAR_3;
 int VAR_4, VAR_5;
 bool VAR_6;

 FUNC_0(VAR_1 >= 0 && VAR_1 < 16,
     ("vatpic_set_pinstate: invalid pin number %d", VAR_1));

 VAR_3 = &VAR_0->atpic[VAR_1 >> 3];

 VAR_4 = VAR_3->acnt[VAR_1 & 0x7];
 if (VAR_2)
  VAR_3->acnt[VAR_1 & 0x7]++;
 else
  VAR_3->acnt[VAR_1 & 0x7]--;
 VAR_5 = VAR_3->acnt[VAR_1 & 0x7];

 if (VAR_5 < 0) {
  FUNC_2(VAR_0, "atpic pin%d: bad acnt %d", VAR_1, VAR_5);
 }

 VAR_6 = ((VAR_0->elc[VAR_1 >> 3] & (1 << (VAR_1 & 0x7))) != 0);

 if ((VAR_4 == 0 && VAR_5 == 1) || (VAR_5 > 0 && VAR_6 == 1)) {

  FUNC_1(VAR_0, "atpic pin%d: asserted", VAR_1);
  VAR_3->request |= (1 << (VAR_1 & 0x7));
 } else if (VAR_4 == 1 && VAR_5 == 0) {

  FUNC_1(VAR_0, "atpic pin%d: deasserted", VAR_1);
  if (VAR_6)
   VAR_3->request &= ~(1 << (VAR_1 & 0x7));
 } else {
  FUNC_3(VAR_0, "atpic pin%d: %s, ignored, acnt %d",
      VAR_1, VAR_2 ? "asserted" : "deasserted", VAR_5);
 }

 FUNC_4(VAR_0);
}
