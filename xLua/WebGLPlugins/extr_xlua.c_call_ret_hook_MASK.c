
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int name; } ;
typedef TYPE_1__ lua_Debug ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,TYPE_1__*) ;
 int FUNC_3 (int *,int ,TYPE_1__*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,int,int ) ;
 scalar_t__ FUNC_10 (int *,int) ;

__attribute__((used)) static void FUNC_11(lua_State *VAR_6) {
 lua_Debug VAR_7;

 if (FUNC_1(VAR_6)) {
  FUNC_3(VAR_6, 0, &VAR_7);
  FUNC_2(VAR_6, "n", &VAR_7);

  FUNC_6(VAR_6, &VAR_5);
  FUNC_8(VAR_6, VAR_2);

  if (FUNC_10(VAR_6, -1) != VAR_3){
   FUNC_4(VAR_6, 1);
   return;
        }

  FUNC_7(VAR_6, "return");
  FUNC_5(VAR_6, "[?%s]", VAR_7.name);
  FUNC_7(VAR_6, "[C#]");

  FUNC_9(VAR_6, 0, 0, 0);
  FUNC_0(VAR_6, 3, 0);
  FUNC_9(VAR_6, VAR_4, VAR_0 | VAR_1, 0);
 }
}
