
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int jit_State ;
struct TYPE_7__ {int t; int i; int o; } ;
typedef int TRef ;
typedef int IROp ;
typedef TYPE_1__ IRIns ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int const,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static TRef FUNC_12(jit_State *VAR_1, IRIns *VAR_2)
{

  switch ((IROp)VAR_2->o) {
  case 129: return FUNC_0(FUNC_6(VAR_2->t));
  case 132: return FUNC_9(VAR_1, VAR_2->i);
  case 133: return FUNC_8(VAR_1, FUNC_1(VAR_2), FUNC_5(VAR_2->t));
  case 130: return FUNC_7(VAR_1, 130, FUNC_3(VAR_2));
  case 131: return FUNC_7(VAR_1, 131, FUNC_2(VAR_2));
  case 128: return FUNC_10(VAR_1, FUNC_4(VAR_2));
  default: FUNC_11(0); return VAR_0; break;
  }
}
