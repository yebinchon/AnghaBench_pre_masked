
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
 TYPE_7__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int * FUNC_4 (int *,TYPE_1__*,int *) ;
 int FUNC_5 (int *,int *,TYPE_2__*) ;
 int FUNC_6 (int *,int *,int *,int ) ;
 int FUNC_7 (int *) ;

void FUNC_8(lua_State *VAR_1, GCcdata *VAR_2, GCobj *VAR_3, uint32_t VAR_4)
{
  GCtab *VAR_5 = FUNC_1(FUNC_0(VAR_1))->finalizer;
  if (FUNC_2(VAR_5->metatable)) {

    TValue *VAR_6, VAR_7;
    FUNC_5(VAR_1, &VAR_7, VAR_2);
    FUNC_3(VAR_1, VAR_5);
    VAR_6 = FUNC_4(VAR_1, VAR_5, &VAR_7);
    FUNC_6(VAR_1, VAR_6, VAR_3, VAR_4);
    if (!FUNC_7(VAR_6))
      VAR_2->marked |= VAR_0;
    else
      VAR_2->marked &= ~VAR_0;
  }
}
