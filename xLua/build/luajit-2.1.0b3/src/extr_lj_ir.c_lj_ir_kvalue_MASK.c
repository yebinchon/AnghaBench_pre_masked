
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int lua_State ;
struct TYPE_11__ {int u64; } ;
struct TYPE_10__ {int n; } ;
struct TYPE_9__ {int o; int t; int i; } ;
typedef int TValue ;
typedef TYPE_1__ IRIns ;
typedef int GCcdata ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__ const*) ;
 TYPE_6__* FUNC_3 (TYPE_1__ const*) ;
 TYPE_4__* FUNC_4 (TYPE_1__ const*) ;
 int * FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *,int *,int ,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;

void FUNC_15(lua_State *VAR_2, TValue *VAR_3, const IRIns *VAR_4)
{
  FUNC_0(VAR_2);
  FUNC_8(VAR_4->o != VAR_1);
  switch (VAR_4->o) {
  case 129: FUNC_14(VAR_3, FUNC_6(VAR_4->t)); break;
  case 134: FUNC_11(VAR_3, VAR_4->i); break;
  case 135: FUNC_10(VAR_2, VAR_3, FUNC_2(VAR_4), FUNC_6(VAR_4->t)); break;
  case 128: case 132: FUNC_12(VAR_3, FUNC_5(VAR_4)); break;
  case 131: FUNC_12(VAR_3, ((void*)0)); break;
  case 130: FUNC_13(VAR_3, FUNC_4(VAR_4)->n); break;
  default: FUNC_8(0); break;
  }
}
