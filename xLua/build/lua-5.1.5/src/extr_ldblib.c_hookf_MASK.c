
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void lua_State ;
struct TYPE_4__ {int currentline; scalar_t__ event; } ;
typedef TYPE_1__ lua_Debug ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int,int ) ;
 int FUNC_2 (void*,char*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (void*,int) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (void*,void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*,char const* const) ;
 int FUNC_8 (void*,int) ;

__attribute__((used)) static void FUNC_9 (lua_State *VAR_2, lua_Debug *VAR_3) {
  static const char *const VAR_4[] =
    {"call", "return", "line", "count", "tail return"};
  FUNC_5(VAR_2, (void *)&VAR_0);
  FUNC_8(VAR_2, VAR_1);
  FUNC_5(VAR_2, VAR_2);
  FUNC_8(VAR_2, -2);
  if (FUNC_3(VAR_2, -1)) {
    FUNC_7(VAR_2, VAR_4[(int)VAR_3->event]);
    if (VAR_3->currentline >= 0)
      FUNC_4(VAR_2, VAR_3->currentline);
    else FUNC_6(VAR_2);
    FUNC_0(FUNC_2(VAR_2, "lS", VAR_3));
    FUNC_1(VAR_2, 2, 0);
  }
}
