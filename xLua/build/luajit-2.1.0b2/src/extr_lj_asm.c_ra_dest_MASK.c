
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int freeset; } ;
struct TYPE_11__ {int s; int r; } ;
typedef int RegSet ;
typedef int Reg ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_2__*,int) ;
 scalar_t__ FUNC_10 (int,int ) ;

__attribute__((used)) static Reg FUNC_11(ASMState *VAR_0, IRIns *VAR_1, RegSet VAR_2)
{
  Reg VAR_3 = VAR_1->r;
  if (FUNC_5(VAR_3)) {
    FUNC_2(VAR_0, VAR_3);
    FUNC_7(VAR_0, VAR_3);
  } else {
    if (FUNC_4(VAR_3) && FUNC_10((VAR_0->freeset&VAR_2), FUNC_3(VAR_3))) {
      VAR_3 = FUNC_3(VAR_3);
      FUNC_7(VAR_0, VAR_3);
      FUNC_1((VAR_0, "dest           $r", VAR_3));
    } else {
      VAR_3 = FUNC_9(VAR_0, VAR_2);
    }
    VAR_1->r = VAR_3;
  }
  if (FUNC_0(FUNC_6(VAR_1->s))) FUNC_8(VAR_0, VAR_1, VAR_3);
  return VAR_3;
}
