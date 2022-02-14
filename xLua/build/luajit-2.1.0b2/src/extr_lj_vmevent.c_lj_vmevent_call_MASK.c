
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_11__ {int top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_12__ {scalar_t__ vmevmask; } ;
typedef TYPE_2__ global_State ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,int ,scalar_t__,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int VAR_1 ;
 char* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;

void FUNC_11(lua_State *VAR_2, ptrdiff_t VAR_3)
{
  global_State *VAR_4 = FUNC_0(VAR_2);
  uint8_t VAR_5 = VAR_4->vmevmask;
  uint8_t VAR_6 = FUNC_5(VAR_4);
  int VAR_7;
  VAR_4->vmevmask = 0;
  FUNC_6(VAR_4);
  VAR_7 = FUNC_7(VAR_2, FUNC_8(VAR_2, VAR_3), 0+1, 0);
  if (FUNC_1(VAR_7)) {

    VAR_2->top--;
    FUNC_3("VM handler failed: ", VAR_1);
    FUNC_3(FUNC_10(VAR_2->top) ? FUNC_9(VAR_2->top) : "?", VAR_1);
    FUNC_2('\n', VAR_1);
  }
  FUNC_4(VAR_4, VAR_6);
  if (VAR_4->vmevmask != VAR_0)
    VAR_4->vmevmask = VAR_5;
}
