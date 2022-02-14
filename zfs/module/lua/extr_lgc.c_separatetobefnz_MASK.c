
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int * tobefnz; int * finobj; } ;
typedef TYPE_1__ global_State ;
struct TYPE_5__ {int * next; int marked; } ;
typedef int GCObject ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7 (lua_State *VAR_2, int VAR_3) {
  global_State *VAR_4 = FUNC_0(VAR_2);
  GCObject **VAR_5 = &VAR_4->finobj;
  GCObject *VAR_6;
  GCObject **VAR_7 = &VAR_4->tobefnz;

  while (*VAR_7 != ((void*)0))
    VAR_7 = &FUNC_1(*VAR_7)->next;
  while ((VAR_6 = *VAR_5) != ((void*)0)) {
    FUNC_5(!FUNC_2(VAR_6));
    FUNC_5(FUNC_6(FUNC_1(VAR_6)->marked, VAR_1));
    if (!(FUNC_3(VAR_6) || VAR_3))
      VAR_5 = &FUNC_1(VAR_6)->next;
    else {
      FUNC_4(FUNC_1(VAR_6)->marked, VAR_0);
      *VAR_5 = FUNC_1(VAR_6)->next;
      FUNC_1(VAR_6)->next = *VAR_7;
      *VAR_7 = VAR_6;
      VAR_7 = &FUNC_1(VAR_6)->next;
    }
  }
}
