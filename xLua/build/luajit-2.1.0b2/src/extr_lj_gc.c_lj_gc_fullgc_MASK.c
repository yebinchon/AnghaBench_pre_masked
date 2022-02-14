
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef int int32_t ;
struct TYPE_5__ {scalar_t__ state; int threshold; int estimate; int pause; scalar_t__ sweepstr; int weak; int grayagain; int gray; int root; int sweep; } ;
struct TYPE_6__ {int vmstate; TYPE_1__ gc; } ;
typedef TYPE_2__ global_State ;


 TYPE_2__* FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;

void FUNC_6(lua_State *VAR_6)
{
  global_State *VAR_7 = FUNC_0(VAR_6);
  int32_t VAR_8 = VAR_7->vmstate;
  FUNC_5(VAR_7, VAR_0);
  if (VAR_7->gc.state <= VAR_1) {
    FUNC_4(VAR_7->gc.sweep, &VAR_7->gc.root);
    FUNC_3(VAR_7->gc.gray);
    FUNC_3(VAR_7->gc.grayagain);
    FUNC_3(VAR_7->gc.weak);
    VAR_7->gc.state = VAR_5;
    VAR_7->gc.sweepstr = 0;
  }
  while (VAR_7->gc.state == VAR_5 || VAR_7->gc.state == VAR_4)
    FUNC_1(VAR_6);
  FUNC_2(VAR_7->gc.state == VAR_2 || VAR_7->gc.state == VAR_3);

  VAR_7->gc.state = VAR_3;
  do { FUNC_1(VAR_6); } while (VAR_7->gc.state != VAR_3);
  VAR_7->gc.threshold = (VAR_7->gc.estimate/100) * VAR_7->gc.pause;
  VAR_7->vmstate = VAR_8;
}
