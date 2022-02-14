
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int freeset; int * cost; scalar_t__ orignins; } ;
struct TYPE_10__ {scalar_t__ o; int s; int t; scalar_t__ op1; } ;
typedef size_t Reg ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,size_t,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,size_t,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 size_t FUNC_7 (int) ;
 int FUNC_8 (int,size_t) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(ASMState *VAR_8)
{
  int VAR_9 = 0;
  IRIns *VAR_10;
  for (VAR_10 = FUNC_0(VAR_8->orignins-1); VAR_10->o == VAR_0; VAR_10--)
    if (FUNC_5(VAR_10->s) && FUNC_5(FUNC_0(VAR_10->op1)->s))
      VAR_9 |= FUNC_4(VAR_10->t) ? 2 : 1;
  if ((VAR_9 & 1)) {

    Reg VAR_11 = VAR_3;







    for (VAR_10 = FUNC_0(VAR_8->orignins-1); VAR_10->o == VAR_0; VAR_10--) {
      if (FUNC_5(VAR_10->s)) {
 IRIns *VAR_12 = FUNC_0(VAR_10->op1);
 if (FUNC_5(VAR_12->s) && !FUNC_4(VAR_10->t)) {
   FUNC_3(VAR_8, VAR_12, VAR_11, FUNC_9(VAR_12->s));
   FUNC_2(VAR_8, VAR_10, VAR_11, FUNC_9(VAR_10->s));
   FUNC_1(VAR_8);
 }
      }
    }




  }

  if ((VAR_9 & 2)) {



    Reg VAR_13 = VAR_1;

    if ((VAR_8->freeset & VAR_5))
      VAR_13 = FUNC_7((VAR_8->freeset & VAR_5));
    if (!FUNC_8(VAR_8->freeset, VAR_13))
      FUNC_2(VAR_8, FUNC_0(FUNC_6(VAR_8->cost[VAR_13])), VAR_13, VAR_7);
    for (VAR_10 = FUNC_0(VAR_8->orignins-1); VAR_10->o == VAR_0; VAR_10--) {
      if (FUNC_5(VAR_10->s)) {
 IRIns *VAR_14 = FUNC_0(VAR_10->op1);
 if (FUNC_5(VAR_14->s) && FUNC_4(VAR_10->t)) {
   FUNC_3(VAR_8, VAR_14, VAR_13, FUNC_9(VAR_14->s));
   FUNC_2(VAR_8, VAR_10, VAR_13, FUNC_9(VAR_10->s));
   FUNC_1(VAR_8);
 }
      }
    }
    if (!FUNC_8(VAR_8->freeset, VAR_13))
      FUNC_3(VAR_8, FUNC_0(FUNC_6(VAR_8->cost[VAR_13])), VAR_13, VAR_7);
  }

}
