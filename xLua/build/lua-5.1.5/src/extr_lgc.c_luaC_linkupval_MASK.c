
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_15__ {scalar_t__ gcstate; TYPE_4__* rootgc; } ;
typedef TYPE_2__ global_State ;
struct TYPE_16__ {int v; } ;
typedef TYPE_3__ UpVal ;
struct TYPE_14__ {TYPE_4__* next; } ;
struct TYPE_17__ {TYPE_1__ gch; } ;
typedef TYPE_4__ GCObject ;


 TYPE_2__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,TYPE_3__*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*) ;
 TYPE_4__* FUNC_6 (TYPE_3__*) ;

void FUNC_7 (lua_State *VAR_3, UpVal *VAR_4) {
  global_State *VAR_5 = FUNC_0(VAR_3);
  GCObject *VAR_6 = FUNC_6(VAR_4);
  VAR_6->gch.next = VAR_5->rootgc;
  VAR_5->rootgc = VAR_6;
  if (FUNC_2(VAR_6)) {
    if (VAR_5->gcstate == VAR_2) {
      FUNC_1(VAR_6);
      FUNC_3(VAR_3, VAR_4, VAR_4->v);
    }
    else {
      FUNC_5(VAR_5, VAR_6);
      FUNC_4(VAR_5->gcstate != VAR_0 && VAR_5->gcstate != VAR_1);
    }
  }
}
