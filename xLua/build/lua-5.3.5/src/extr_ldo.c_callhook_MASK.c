
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_10__ {int * savedpc; } ;
struct TYPE_11__ {TYPE_3__ l; } ;
struct TYPE_13__ {TYPE_4__ u; } ;
struct TYPE_8__ {int savedpc; } ;
struct TYPE_9__ {TYPE_1__ l; } ;
struct TYPE_12__ {TYPE_2__ u; int callstatus; TYPE_6__* previous; } ;
typedef TYPE_5__ CallInfo ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static void FUNC_3 (lua_State *VAR_4, CallInfo *VAR_5) {
  int VAR_6 = VAR_1;
  VAR_5->u.l.savedpc++;
  if (FUNC_1(VAR_5->previous) &&
      FUNC_0(*(VAR_5->previous->u.l.savedpc - 1)) == VAR_3) {
    VAR_5->callstatus |= VAR_0;
    VAR_6 = VAR_2;
  }
  FUNC_2(VAR_4, VAR_6, -1);
  VAR_5->u.l.savedpc--;
}
