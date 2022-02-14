
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ status; TYPE_2__* ci; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_7__ {int extra; int func; } ;
typedef int StkId ;
typedef TYPE_2__ CallInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2 (lua_State *VAR_1) {
  if (VAR_1->status == VAR_0) {
    CallInfo *VAR_2 = VAR_1->ci;
    StkId VAR_3 = VAR_2->func;
    VAR_2->func = FUNC_0(VAR_1, VAR_2->extra);
    VAR_2->extra = FUNC_1(VAR_1, VAR_3);
  }
}
