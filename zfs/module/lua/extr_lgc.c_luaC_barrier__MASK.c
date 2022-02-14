
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_9__ {scalar_t__ gcstate; } ;
typedef TYPE_1__ global_State ;
struct TYPE_10__ {scalar_t__ tt; } ;
typedef int GCObject ;


 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_7__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;

void FUNC_10 (lua_State *VAR_2, GCObject *VAR_3, GCObject *VAR_4) {
  global_State *VAR_5 = FUNC_0(VAR_2);
  FUNC_7(FUNC_2(VAR_3) && FUNC_5(VAR_4) && !FUNC_3(VAR_5, VAR_4) && !FUNC_3(VAR_5, VAR_3));
  FUNC_7(VAR_5->gcstate != VAR_0);
  FUNC_7(FUNC_1(VAR_3)->tt != VAR_1);
  if (FUNC_6(VAR_5))
    FUNC_9(VAR_5, VAR_4);
  else {
    FUNC_7(FUNC_4(VAR_5));
    FUNC_8(VAR_5, VAR_3);
  }
}
