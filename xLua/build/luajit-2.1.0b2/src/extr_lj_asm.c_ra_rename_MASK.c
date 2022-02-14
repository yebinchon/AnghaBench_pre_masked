
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_14__ {TYPE_1__* T; int ir; int J; int snapno; scalar_t__* cost; int freeset; } ;
struct TYPE_13__ {int s; void* r; } ;
struct TYPE_12__ {int ir; } ;
typedef size_t Reg ;
typedef int IRRef ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ ASMState ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,size_t,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__*,size_t) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*,size_t) ;
 int FUNC_10 (TYPE_3__*,size_t) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,size_t) ;
 scalar_t__ FUNC_13 (int ,size_t) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(ASMState *VAR_4, Reg VAR_5, Reg VAR_6)
{
  IRRef VAR_7, VAR_8 = FUNC_11(VAR_4->cost[VAR_6] = VAR_4->cost[VAR_5]);
  IRIns *VAR_9 = FUNC_0(VAR_8);
  VAR_9->r = (uint8_t)VAR_6;
  VAR_4->cost[VAR_5] = 0;
  FUNC_6((VAR_5 < VAR_2) == (VAR_6 < VAR_2));
  FUNC_6(!FUNC_13(VAR_4->freeset, VAR_5) && FUNC_13(VAR_4->freeset, VAR_6));
  FUNC_7(VAR_4, VAR_5);
  FUNC_9(VAR_4, VAR_5);
  FUNC_12(VAR_4->freeset, VAR_6);
  FUNC_10(VAR_4, VAR_6);
  FUNC_2((VAR_4, "rename    $f $r $r", FUNC_11(VAR_4->cost[VAR_6]), VAR_5, VAR_6));
  FUNC_3(VAR_4, VAR_9, VAR_5, VAR_6);
  if (!FUNC_8(FUNC_0(VAR_8)->s)) {
    FUNC_5(VAR_4->J, FUNC_1(VAR_1, VAR_0), VAR_8, VAR_4->snapno);
    VAR_7 = FUNC_14(FUNC_4(VAR_4->J));
    VAR_4->ir = VAR_4->T->ir;
    FUNC_0(VAR_7)->r = (uint8_t)VAR_5;
    FUNC_0(VAR_7)->s = VAR_3;
  }
}
