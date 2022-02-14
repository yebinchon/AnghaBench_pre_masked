
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ nny; scalar_t__ top; int errfunc; TYPE_4__* ci; } ;
typedef TYPE_3__ lua_State ;
struct TYPE_12__ {int (* k ) (TYPE_3__*) ;scalar_t__ status; int old_errfunc; } ;
struct TYPE_13__ {TYPE_1__ c; } ;
struct TYPE_15__ {int callstatus; TYPE_2__ u; int nresults; } ;
typedef TYPE_4__ CallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_7 (lua_State *VAR_5) {
  CallInfo *VAR_6 = VAR_5->ci;
  int VAR_7;
  FUNC_3(VAR_6->u.c.k != ((void*)0));
  FUNC_3(VAR_5->nny == 0);
  if (VAR_6->callstatus & VAR_2) {
    VAR_6->callstatus &= ~VAR_2;
    VAR_5->errfunc = VAR_6->u.c.old_errfunc;
  }

  FUNC_0(VAR_5, VAR_6->nresults);

  if (!(VAR_6->callstatus & VAR_0))
    VAR_6->u.c.status = VAR_4;
  FUNC_3(VAR_6->u.c.status != VAR_3);
  VAR_6->callstatus = (VAR_6->callstatus & ~(VAR_2 | VAR_0)) | VAR_1;
  FUNC_5(VAR_5);
  VAR_7 = (*VAR_6->u.c.k)(VAR_5);
  FUNC_4(VAR_5);
  FUNC_1(VAR_5, VAR_7);

  FUNC_2(VAR_5, VAR_5->top - VAR_7);
}
