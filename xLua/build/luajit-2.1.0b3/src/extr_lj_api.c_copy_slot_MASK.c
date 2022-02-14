
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int env; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_14__ {int env; int gct; } ;
struct TYPE_16__ {TYPE_1__ c; } ;
typedef int TValue ;
typedef TYPE_3__ GCfunc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *,int *) ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(lua_State *VAR_4, TValue *VAR_5, int VAR_6)
{
  if (VAR_6 == VAR_3) {
    FUNC_0(VAR_4, FUNC_10(VAR_5));

    FUNC_8(VAR_4->env, FUNC_7(FUNC_9(VAR_5)));
  } else if (VAR_6 == VAR_2) {
    GCfunc *VAR_7 = FUNC_3(VAR_4);
    if (VAR_7->c.gct != ~VAR_1)
      FUNC_5(VAR_4, VAR_0);
    FUNC_0(VAR_4, FUNC_10(VAR_5));
    FUNC_8(VAR_7->c.env, FUNC_7(FUNC_9(VAR_5)));
    FUNC_6(VAR_4, VAR_7, VAR_5);
  } else {
    TValue *VAR_8 = FUNC_4(VAR_4, VAR_6);
    FUNC_1(VAR_4, VAR_8);
    FUNC_2(VAR_4, VAR_8, VAR_5);
    if (VAR_6 < VAR_3)
      FUNC_6(VAR_4, FUNC_3(VAR_4), VAR_5);
  }
}
