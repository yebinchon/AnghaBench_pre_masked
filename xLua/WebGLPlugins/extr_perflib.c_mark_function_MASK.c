
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int used_in ;
typedef int lua_State ;
struct TYPE_3__ {char* short_src; int linedefined; int lastlinedefined; } ;
typedef TYPE_1__ lua_Debug ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,void const*) ;
 int FUNC_1 (int *,char*,TYPE_1__*) ;
 char* FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 void* FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,void const*,char const*,int ,char*,int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,void const*,int ) ;
 int FUNC_12 (char*,int,char*,char*,int,int) ;

__attribute__((used)) static void FUNC_13(lua_State *VAR_4, lua_State *VAR_5) {
 const void *VAR_6 = FUNC_7(VAR_4, -1);
 int VAR_7;
 lua_Debug VAR_8;
 char VAR_9[128];
 const char *VAR_10;


 if (!FUNC_0(VAR_5, VAR_6)) {
  FUNC_11(VAR_5, VAR_6, 0);

  FUNC_5(VAR_4, -1);
  FUNC_1(VAR_4, ">S", &VAR_8);
  FUNC_12(VAR_9, sizeof(VAR_9) - 1, "%s:%d~%d", VAR_8.short_src, VAR_8.linedefined, VAR_8.lastlinedefined);
  VAR_9[sizeof(VAR_9) - 1] = 0;

  for (VAR_7=1;;VAR_7++) {
   VAR_10 = FUNC_2(VAR_4,-1,VAR_7);
   if (VAR_10 == ((void*)0))
    break;
   VAR_6 = FUNC_7(VAR_4, -1);

   if (*VAR_10 != '\0' && VAR_1 == FUNC_8(VAR_4, -1)) {
    FUNC_9(VAR_5, VAR_6, VAR_10, VAR_3, VAR_9, 1);
    FUNC_3(VAR_5, VAR_2);
    FUNC_10(VAR_4, VAR_5);
    FUNC_6(VAR_5, VAR_2);
   } else if (VAR_0 == FUNC_8(VAR_4, -1)) {
    FUNC_13(VAR_4, VAR_5);
   }
   FUNC_4(VAR_4, 1);
  }
 }
}
