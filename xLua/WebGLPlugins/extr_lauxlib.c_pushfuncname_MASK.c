
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {char* namewhat; char* what; char* short_src; int linedefined; int name; } ;
typedef TYPE_1__ lua_Debug ;


 int FUNC_0 (int *,char*,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5 (lua_State *VAR_0, lua_Debug *VAR_1) {
  if (FUNC_4(VAR_0, VAR_1)) {
    FUNC_0(VAR_0, "function '%s'", FUNC_3(VAR_0, -1));
    FUNC_2(VAR_0, -2);
  }
  else if (*VAR_1->namewhat != '\0')
    FUNC_0(VAR_0, "%s '%s'", VAR_1->namewhat, VAR_1->name);
  else if (*VAR_1->what == 'm')
      FUNC_1(VAR_0, "main chunk");
  else if (*VAR_1->what != 'C')
    FUNC_0(VAR_0, "function <%s:%d>", VAR_1->short_src, VAR_1->linedefined);
  else
    FUNC_1(VAR_0, "?");
}
