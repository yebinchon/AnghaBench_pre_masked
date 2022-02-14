
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int errfunc; scalar_t__ nny; int allowhook; TYPE_4__* ci; } ;
typedef TYPE_3__ lua_State ;
struct TYPE_12__ {int status; int old_errfunc; int old_allowhook; } ;
struct TYPE_13__ {TYPE_1__ c; } ;
struct TYPE_15__ {TYPE_2__ u; int callstatus; int extra; } ;
typedef int StkId ;
typedef TYPE_4__ CallInfo ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int,int ) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_1, int VAR_2) {
  StkId VAR_3;
  CallInfo *VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 == ((void*)0)) return 0;

  VAR_3 = FUNC_3(VAR_1, VAR_4->extra);
  FUNC_2(VAR_1, VAR_3);
  FUNC_4(VAR_1, VAR_2, VAR_3);
  VAR_1->ci = VAR_4;
  VAR_1->allowhook = VAR_4->u.c.old_allowhook;
  VAR_1->nny = 0;
  FUNC_1(VAR_1);
  VAR_1->errfunc = VAR_4->u.c.old_errfunc;
  VAR_4->callstatus |= VAR_0;
  VAR_4->u.c.status = VAR_2;
  return 1;
}
