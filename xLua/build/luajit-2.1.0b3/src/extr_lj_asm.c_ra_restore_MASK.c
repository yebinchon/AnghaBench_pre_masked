
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_14__ {int weakset; } ;
struct TYPE_13__ {int r; } ;
typedef int Reg ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static Reg FUNC_12(ASMState *VAR_0, IRRef VAR_1)
{
  if (FUNC_2(VAR_1)) {
    return FUNC_8(VAR_0, VAR_1);
  } else {
    IRIns *VAR_2 = FUNC_0(VAR_1);
    int32_t VAR_3 = FUNC_10(VAR_0, VAR_2);
    Reg VAR_4 = VAR_2->r;
    FUNC_4(FUNC_6(VAR_4));
    FUNC_9(VAR_2->r, VAR_4);
    FUNC_5(VAR_0, VAR_4);
    if (!FUNC_11(VAR_0->weakset, VAR_4)) {
      FUNC_7(VAR_0, VAR_4);
      FUNC_1((VAR_0, "restore   $i $r", VAR_2, VAR_4));
      FUNC_3(VAR_0, VAR_2, VAR_4, VAR_3);
    }
    return VAR_4;
  }
}
