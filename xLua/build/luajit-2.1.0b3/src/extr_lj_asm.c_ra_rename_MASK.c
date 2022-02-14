
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_13__ {int snapno; scalar_t__* cost; int freeset; } ;
struct TYPE_12__ {int s; scalar_t__ r; } ;
typedef size_t Reg ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 size_t VAR_0 ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,size_t,size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,size_t,int ,int ) ;
 int FUNC_5 (TYPE_2__*,size_t) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,size_t) ;
 int FUNC_8 (TYPE_2__*,size_t) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,size_t) ;
 scalar_t__ FUNC_11 (int ,size_t) ;

__attribute__((used)) static void FUNC_12(ASMState *VAR_1, Reg VAR_2, Reg VAR_3)
{
  IRRef VAR_4 = FUNC_9(VAR_1->cost[VAR_3] = VAR_1->cost[VAR_2]);
  IRIns *VAR_5 = FUNC_0(VAR_4);
  VAR_5->r = (uint8_t)VAR_3;
  VAR_1->cost[VAR_2] = 0;
  FUNC_3((VAR_2 < VAR_0) == (VAR_3 < VAR_0));
  FUNC_3(!FUNC_11(VAR_1->freeset, VAR_2) && FUNC_11(VAR_1->freeset, VAR_3));
  FUNC_5(VAR_1, VAR_2);
  FUNC_7(VAR_1, VAR_2);
  FUNC_10(VAR_1->freeset, VAR_3);
  FUNC_8(VAR_1, VAR_3);
  FUNC_1((VAR_1, "rename    $f $r $r", FUNC_9(VAR_1->cost[VAR_3]), VAR_2, VAR_3));
  FUNC_2(VAR_1, VAR_5, VAR_2, VAR_3);
  if (!FUNC_6(FUNC_0(VAR_4)->s)) {
    FUNC_4(VAR_1, VAR_2, VAR_4, VAR_1->snapno);
  }
}
