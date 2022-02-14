
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_20__ {int * top; } ;
typedef TYPE_3__ lua_State ;
struct TYPE_19__ {int threshold; } ;
struct TYPE_21__ {TYPE_2__ gc; } ;
typedef TYPE_4__ global_State ;
typedef int cTValue ;
struct TYPE_18__ {int gct; } ;
struct TYPE_22__ {TYPE_1__ gch; } ;
typedef int TValue ;
typedef TYPE_5__ GCobj ;
typedef int GCSize ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*,int *,scalar_t__,int) ;
 int FUNC_7 (TYPE_3__*,int *,TYPE_5__*,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(global_State *VAR_2, lua_State *VAR_3,
         cTValue *VAR_4, GCobj *VAR_5)
{

  uint8_t VAR_6 = FUNC_3(VAR_2);
  GCSize VAR_7 = VAR_2->gc.threshold;
  int VAR_8;
  TValue *VAR_9;
  FUNC_5(VAR_2);
  FUNC_1(VAR_2);
  VAR_2->gc.threshold = VAR_1;
  VAR_9 = VAR_3->top;
  FUNC_0(VAR_3, VAR_9++, VAR_4);
  if (VAR_0) FUNC_8(VAR_9++);
  FUNC_7(VAR_3, VAR_9, VAR_5, ~VAR_5->gch.gct);
  VAR_3->top = VAR_9+1;
  VAR_8 = FUNC_6(VAR_3, VAR_9, 1+0, -1);
  FUNC_2(VAR_2, VAR_6);
  VAR_2->gc.threshold = VAR_7;
  if (VAR_8)
    FUNC_4(VAR_3, VAR_8);
}
