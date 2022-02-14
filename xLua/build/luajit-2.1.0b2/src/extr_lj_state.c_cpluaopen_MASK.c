
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int env; } ;
typedef TYPE_2__ lua_State ;
typedef void* lua_CFunction ;
struct TYPE_17__ {int threshold; int total; } ;
struct TYPE_19__ {TYPE_1__ gc; } ;
typedef TYPE_3__ global_State ;
typedef int TValue ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_2__*,int ,int ) ;
 int FUNC_13 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static TValue *FUNC_14(lua_State *VAR_4, lua_CFunction VAR_5, void *VAR_6)
{
  global_State *VAR_7 = FUNC_0(VAR_4);
  FUNC_1(VAR_5);
  FUNC_1(VAR_6);
  FUNC_13(VAR_4, VAR_4);

  FUNC_11(VAR_4->env, FUNC_9(FUNC_7(VAR_4, 0, VAR_1)));
  FUNC_12(VAR_4, FUNC_10(VAR_4), FUNC_7(VAR_4, 0, VAR_2));
  FUNC_6(VAR_4, VAR_3-1);
  FUNC_5(VAR_4);
  FUNC_4(VAR_4);
  FUNC_2(FUNC_3(VAR_4, VAR_0));
  VAR_7->gc.threshold = 4*VAR_7->gc.total;
  FUNC_8(VAR_7);
  return ((void*)0);
}
