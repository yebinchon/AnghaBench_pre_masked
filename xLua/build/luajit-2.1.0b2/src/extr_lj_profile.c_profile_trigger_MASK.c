
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int hookmask; int vmstate; } ;
typedef TYPE_1__ global_State ;
struct TYPE_8__ {char vmstate; int samples; TYPE_1__* g; } ;
typedef TYPE_2__ ProfileState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(ProfileState *VAR_5)
{
  global_State *VAR_6 = VAR_5->g;
  uint8_t VAR_7;
  FUNC_1(VAR_5);
  VAR_5->samples++;
  VAR_7 = VAR_6->hookmask;
  if (!(VAR_7 & (VAR_0|VAR_1))) {
    int VAR_8 = VAR_6->vmstate;
    VAR_5->vmstate = VAR_8 >= 0 ? 'N' :
    VAR_8 == ~VAR_4 ? 'I' :
    VAR_8 == ~VAR_2 ? 'C' :
    VAR_8 == ~VAR_3 ? 'G' : 'J';
    VAR_6->hookmask = (VAR_7 | VAR_0);
    FUNC_0(VAR_6);
  }
  FUNC_2(VAR_5);
}
