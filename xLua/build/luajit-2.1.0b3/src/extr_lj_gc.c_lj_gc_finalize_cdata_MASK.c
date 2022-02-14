
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t ptrdiff_t ;
typedef int lua_State ;
typedef int global_State ;
struct TYPE_15__ {TYPE_3__* finalizer; } ;
struct TYPE_11__ {int marked; } ;
struct TYPE_14__ {TYPE_1__ gch; } ;
struct TYPE_13__ {scalar_t__ hmask; int metatable; int node; } ;
struct TYPE_12__ {int val; int key; } ;
typedef int TValue ;
typedef TYPE_2__ Node ;
typedef TYPE_3__ GCtab ;
typedef TYPE_4__ GCobj ;
typedef TYPE_5__ CTState ;


 int * FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *,int *) ;
 TYPE_5__* FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,TYPE_4__*) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(lua_State *VAR_1)
{
  global_State *VAR_2 = FUNC_0(VAR_1);
  CTState *VAR_3 = FUNC_2(VAR_2);
  if (VAR_3) {
    GCtab *VAR_4 = VAR_3->finalizer;
    Node *VAR_5 = FUNC_6(VAR_4->node);
    ptrdiff_t VAR_6;
    FUNC_7(VAR_4->metatable);
    for (VAR_6 = (ptrdiff_t)VAR_4->hmask; VAR_6 >= 0; VAR_6--)
      if (!FUNC_10(&VAR_5[VAR_6].val) && FUNC_9(&VAR_5[VAR_6].key)) {
 GCobj *VAR_7 = FUNC_3(&VAR_5[VAR_6].key);
 TValue VAR_8;
 FUNC_5(VAR_2, VAR_7);
 VAR_7->gch.marked &= (uint8_t)~VAR_0;
 FUNC_1(VAR_1, &VAR_8, &VAR_5[VAR_6].val);
 FUNC_8(&VAR_5[VAR_6].val);
 FUNC_4(VAR_2, VAR_1, &VAR_8, VAR_7);
      }
  }
}
