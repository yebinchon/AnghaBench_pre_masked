
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int lua_State ;
typedef scalar_t__ lua_Number ;
typedef scalar_t__ int32_t ;
struct TYPE_21__ {int hi; scalar_t__ lo; } ;
struct TYPE_22__ {TYPE_1__ u32; } ;
typedef TYPE_2__ cTValue ;
struct TYPE_24__ {scalar_t__ asize; int node; } ;
struct TYPE_23__ {int key; } ;
typedef TYPE_2__ TValue ;
typedef TYPE_4__ Node ;
typedef TYPE_5__ GCtab ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_5__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*) ;
 TYPE_4__* FUNC_5 (TYPE_4__*) ;
 TYPE_4__* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static uint32_t FUNC_12(lua_State *VAR_1, GCtab *VAR_2, cTValue *VAR_3)
{
  TValue VAR_4;
  if (FUNC_9(VAR_3)) {
    int32_t VAR_5 = FUNC_1(VAR_3);
    if ((uint32_t)VAR_5 < VAR_2->asize)
      return (uint32_t)VAR_5;
    FUNC_8(&VAR_4, (lua_Number)VAR_5);
    VAR_3 = &VAR_4;
  } else if (FUNC_11(VAR_3)) {
    lua_Number VAR_6 = FUNC_7(VAR_3);
    int32_t VAR_7 = FUNC_3(VAR_6);
    if ((uint32_t)VAR_7 < VAR_2->asize && VAR_6 == (lua_Number)VAR_7)
      return (uint32_t)VAR_7;
  }
  if (!FUNC_10(VAR_3)) {
    Node *VAR_8 = FUNC_0(VAR_2, VAR_3);
    do {
      if (FUNC_4(&VAR_8->key, VAR_3))
 return VAR_2->asize + (uint32_t)(VAR_8 - FUNC_6(VAR_2->node));

    } while ((VAR_8 = FUNC_5(VAR_8)));
    if (VAR_3->u32.hi == 0xfffe7fff)
      return VAR_3->u32.lo - 1;
    FUNC_2(VAR_1, VAR_0);
    return 0;
  }
  return ~0u;
}
