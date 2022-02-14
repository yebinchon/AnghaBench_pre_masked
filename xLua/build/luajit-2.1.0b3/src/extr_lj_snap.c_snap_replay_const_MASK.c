
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int jit_State ;
struct TYPE_8__ {int u64; } ;
struct TYPE_7__ {int o; int t; int i; } ;
typedef int TRef ;
typedef int IROp ;
typedef TYPE_1__ IRIns ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static TRef FUNC_11(jit_State *VAR_1, IRIns *VAR_2)
{

  switch ((IROp)VAR_2->o) {
  case 129: return FUNC_0(FUNC_5(VAR_2->t));
  case 132: return FUNC_8(VAR_1, VAR_2->i);
  case 133: return FUNC_7(VAR_1, FUNC_2(VAR_2), FUNC_4(VAR_2->t));
  case 130: case 131:
    return FUNC_6(VAR_1, (IROp)VAR_2->o, FUNC_1(VAR_2)->u64);
  case 128: return FUNC_9(VAR_1, FUNC_3(VAR_2));
  default: FUNC_10(0); return VAR_0; break;
  }
}
