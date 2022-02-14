
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int hookmask; int hookcount; scalar_t__ oldpc; scalar_t__ status; scalar_t__ top; TYPE_4__* ci; } ;
typedef TYPE_3__ lua_State ;
typedef int lu_byte ;
struct TYPE_15__ {int * p; } ;
struct TYPE_11__ {scalar_t__ savedpc; } ;
struct TYPE_12__ {TYPE_1__ l; } ;
struct TYPE_14__ {int callstatus; scalar_t__ func; TYPE_2__ u; } ;
typedef int Proto ;
typedef TYPE_4__ CallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_9__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6 (lua_State *VAR_6) {
  CallInfo *VAR_7 = VAR_6->ci;
  lu_byte VAR_8 = VAR_6->hookmask;
  int VAR_9 = ((VAR_8 & VAR_3) && VAR_6->hookcount == 0);
  if (VAR_9)
    FUNC_5(VAR_6);
  if (VAR_7->callstatus & VAR_0) {
    VAR_7->callstatus &= ~VAR_0;
    return;
  }
  if (VAR_9)
    FUNC_2(VAR_6, VAR_1, -1);
  if (VAR_8 & VAR_4) {
    Proto *VAR_10 = FUNC_0(VAR_7)->p;
    int VAR_11 = FUNC_4(VAR_7->u.l.savedpc, VAR_10);
    int VAR_12 = FUNC_1(VAR_10, VAR_11);
    if (VAR_11 == 0 ||
        VAR_7->u.l.savedpc <= VAR_6->oldpc ||
        VAR_12 != FUNC_1(VAR_10, FUNC_4(VAR_6->oldpc, VAR_10)))
      FUNC_2(VAR_6, VAR_2, VAR_12);
  }
  VAR_6->oldpc = VAR_7->u.l.savedpc;
  if (VAR_6->status == VAR_5) {
    if (VAR_9)
      VAR_6->hookcount = 1;
    VAR_7->u.l.savedpc--;
    VAR_7->callstatus |= VAR_0;
    VAR_7->func = VAR_6->top - 1;
    FUNC_3(VAR_6, VAR_5);
  }
}
