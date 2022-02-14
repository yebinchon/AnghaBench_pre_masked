
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_9__ {int * finobj; int * allgc; int ** sweepgc; } ;
typedef TYPE_1__ global_State ;
typedef int Table ;
struct TYPE_10__ {int marked; int * next; } ;
typedef TYPE_2__ GCheader ;
typedef int GCObject ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int *) ;
 int ** FUNC_10 (int *,int **,int *) ;
 scalar_t__ FUNC_11 (int ,int ) ;

void FUNC_12 (lua_State *VAR_2, GCObject *VAR_3, Table *VAR_4) {
  global_State *VAR_5 = FUNC_0(VAR_2);
  if (FUNC_11(FUNC_1(VAR_3)->marked, VAR_0) ||
      FUNC_3(VAR_3) ||
      FUNC_2(VAR_5, VAR_4, VAR_1) == ((void*)0))
    return;
  else {
    GCObject **VAR_6;
    GCheader *VAR_7 = FUNC_1(VAR_3);
    if (VAR_5->sweepgc == &VAR_7->next) {
      FUNC_7(FUNC_4(VAR_5));
      VAR_5->sweepgc = FUNC_10(VAR_2, VAR_5->sweepgc, ((void*)0));
    }

    for (VAR_6 = &VAR_5->allgc; *VAR_6 != VAR_3; VAR_6 = &FUNC_1(*VAR_6)->next) { }
    *VAR_6 = VAR_7->next;
    VAR_7->next = VAR_5->finobj;
    VAR_5->finobj = VAR_3;
    FUNC_6(VAR_7->marked, VAR_0);
    if (!FUNC_5(VAR_5))
      FUNC_8(VAR_5, VAR_3);
    else
      FUNC_9(VAR_3);
  }
}
