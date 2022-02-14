
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int jit_State ;
struct TYPE_6__ {int val; } ;
struct TYPE_5__ {int o; int op1; int op2; int t; } ;
typedef int TRef ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ BPropEntry ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,int,int,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static TRef FUNC_9(jit_State *VAR_8, TRef VAR_9, int VAR_10, IRRef VAR_11)
{
  IRRef VAR_12 = FUNC_8(VAR_9);
  IRIns *VAR_13 = FUNC_0(VAR_12);
  int VAR_14 = VAR_13->o;
  if (VAR_14 >= VAR_5 && VAR_14 <= VAR_10) {
    BPropEntry *VAR_15 = FUNC_6(VAR_8, VAR_12, VAR_11);
    if (VAR_15) {
      return FUNC_2(VAR_15->val, FUNC_5(FUNC_0(VAR_15->val)->t));
    } else {
      IRRef VAR_16 = VAR_13->op1, VAR_17 = VAR_13->op2;
      VAR_16 = FUNC_9(VAR_8, VAR_16, VAR_10, VAR_11);
      VAR_17 = FUNC_9(VAR_8, VAR_17, VAR_10, VAR_11);
      VAR_9 = FUNC_3(FUNC_1(VAR_14 - VAR_5 + VAR_4,
        ((VAR_11 & VAR_1) >> VAR_0)), VAR_16, VAR_17);
      FUNC_7(VAR_8, VAR_12, FUNC_8(VAR_9), VAR_11);
    }
  } else if (VAR_7 && (VAR_11 & VAR_2) && !FUNC_4(VAR_13->t)) {
    VAR_9 = FUNC_3(FUNC_1(VAR_6, VAR_3), VAR_9, VAR_11);
  }
  return VAR_9;
}
