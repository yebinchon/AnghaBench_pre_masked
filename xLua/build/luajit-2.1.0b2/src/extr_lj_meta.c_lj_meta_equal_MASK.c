
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int lua_State ;
typedef int cTValue ;
struct TYPE_6__ {scalar_t__ gct; int metatable; } ;
struct TYPE_7__ {TYPE_1__ gch; } ;
typedef int TValue ;
typedef TYPE_2__ GCobj ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *) ;
 int * FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int *,scalar_t__,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *,TYPE_2__*,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

TValue *FUNC_8(lua_State *VAR_4, GCobj *VAR_5, GCobj *VAR_6, int VAR_7)
{

  cTValue *VAR_8 = FUNC_2(VAR_4, FUNC_7(VAR_5->gch.metatable), VAR_1);
  if (VAR_8) {
    TValue *VAR_9;
    uint32_t VAR_10;
    if (FUNC_7(VAR_5->gch.metatable) != FUNC_7(VAR_6->gch.metatable)) {
      cTValue *VAR_11 = FUNC_2(VAR_4, FUNC_7(VAR_6->gch.metatable), VAR_1);
      if (VAR_11 == ((void*)0) || !FUNC_3(VAR_8, VAR_11))
 return (TValue *)(intptr_t)VAR_7;
    }
    VAR_9 = FUNC_1(VAR_4);
    FUNC_4(VAR_9++, VAR_7 ? VAR_2 : VAR_3);
    if (VAR_0) FUNC_6(VAR_9++);
    FUNC_0(VAR_4, VAR_9++, VAR_8);
    if (VAR_0) FUNC_6(VAR_9++);
    VAR_10 = ~(uint32_t)VAR_5->gch.gct;
    FUNC_5(VAR_4, VAR_9, VAR_5, VAR_10);
    FUNC_5(VAR_4, VAR_9+1, VAR_6, VAR_10);
    return VAR_9;
  }
  return (TValue *)(intptr_t)VAR_7;
}
