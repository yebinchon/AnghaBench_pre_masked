
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_12__ {TYPE_2__* finobj; TYPE_2__* allgc; TYPE_2__** sweepgc; } ;
typedef TYPE_1__ global_State ;
typedef int Table ;
struct TYPE_13__ {int marked; struct TYPE_13__* next; } ;
typedef TYPE_2__ GCObject ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__** FUNC_5 (int *,TYPE_2__**) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;

void FUNC_7 (lua_State *VAR_2, GCObject *VAR_3, Table *VAR_4) {
  global_State *VAR_5 = FUNC_0(VAR_2);
  if (FUNC_6(VAR_3) ||
      FUNC_1(VAR_5, VAR_4, VAR_1) == ((void*)0))
    return;
  else {
    GCObject **VAR_6;
    if (FUNC_2(VAR_5)) {
      FUNC_4(VAR_5, VAR_3);
      if (VAR_5->sweepgc == &VAR_3->next)
        VAR_5->sweepgc = FUNC_5(VAR_2, VAR_5->sweepgc);
    }

    for (VAR_6 = &VAR_5->allgc; *VAR_6 != VAR_3; VAR_6 = &(*VAR_6)->next) { }
    *VAR_6 = VAR_3->next;
    VAR_3->next = VAR_5->finobj;
    VAR_5->finobj = VAR_3;
    FUNC_3(VAR_3->marked, VAR_0);
  }
}
