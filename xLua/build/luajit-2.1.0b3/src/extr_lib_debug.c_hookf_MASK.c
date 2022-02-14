
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int currentline; scalar_t__ event; } ;
typedef TYPE_1__ lua_Debug ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const* const) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(lua_State *VAR_2, lua_Debug *VAR_3)
{
  static const char *const VAR_4[] =
    {"call", "return", "line", "count", "tail return"};
  FUNC_3(VAR_2, VAR_0);
  FUNC_6(VAR_2, VAR_1);
  if (FUNC_1(VAR_2, -1)) {
    FUNC_5(VAR_2, VAR_4[(int)VAR_3->event]);
    if (VAR_3->currentline >= 0)
      FUNC_2(VAR_2, VAR_3->currentline);
    else FUNC_4(VAR_2);
    FUNC_0(VAR_2, 2, 0);
  }
}
