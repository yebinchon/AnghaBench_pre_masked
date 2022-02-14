
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_15__ {int hookmask; TYPE_3__* ci; int oldpc; } ;
typedef TYPE_4__ lua_State ;
struct TYPE_16__ {int nresults; TYPE_3__* previous; int func; } ;
struct TYPE_12__ {int savedpc; } ;
struct TYPE_13__ {TYPE_1__ l; } ;
struct TYPE_14__ {TYPE_2__ u; } ;
typedef int StkId ;
typedef TYPE_5__ CallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,int) ;
 int FUNC_1 (TYPE_4__*,int ,int ,int,int) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;

int FUNC_4 (lua_State *VAR_3, CallInfo *VAR_4, StkId VAR_5, int VAR_6) {
  StkId VAR_7;
  int VAR_8 = VAR_4->nresults;
  if (VAR_3->hookmask & (VAR_2 | VAR_1)) {
    if (VAR_3->hookmask & VAR_2) {
      ptrdiff_t VAR_9 = FUNC_3(VAR_3, VAR_5);
      FUNC_0(VAR_3, VAR_0, -1);
      VAR_5 = FUNC_2(VAR_3, VAR_9);
    }
    VAR_3->oldpc = VAR_4->previous->u.l.savedpc;
  }
  VAR_7 = VAR_4->func;
  VAR_3->ci = VAR_4->previous;

  return FUNC_1(VAR_3, VAR_5, VAR_7, VAR_6, VAR_8);
}
