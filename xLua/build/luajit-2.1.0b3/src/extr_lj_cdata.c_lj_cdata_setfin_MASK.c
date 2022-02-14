
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int lua_State ;
struct TYPE_10__ {TYPE_1__* finalizer; } ;
struct TYPE_9__ {int marked; } ;
struct TYPE_8__ {int metatable; } ;
typedef int TValue ;
typedef TYPE_1__ GCtab ;
typedef int GCobj ;
typedef TYPE_2__ GCcdata ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int * FUNC_4 (int *,TYPE_1__*,int *) ;
 int FUNC_5 (int *,int *,TYPE_2__*) ;
 int FUNC_6 (int *,int *,int *,int ) ;
 int FUNC_7 (int *) ;

void FUNC_8(lua_State *VAR_2, GCcdata *VAR_3, GCobj *VAR_4, uint32_t VAR_5)
{
  GCtab *VAR_6 = FUNC_1(FUNC_0(VAR_2))->finalizer;
  if (FUNC_2(VAR_6->metatable)) {

    TValue *VAR_7, VAR_8;
    FUNC_5(VAR_2, &VAR_8, VAR_3);
    FUNC_3(VAR_2, VAR_6);
    VAR_7 = FUNC_4(VAR_2, VAR_6, &VAR_8);
    if (VAR_5 == VAR_1) {
      FUNC_7(VAR_7);
      VAR_3->marked &= ~VAR_0;
    } else {
      FUNC_6(VAR_2, VAR_7, VAR_4, VAR_5);
      VAR_3->marked |= VAR_0;
    }
  }
}
