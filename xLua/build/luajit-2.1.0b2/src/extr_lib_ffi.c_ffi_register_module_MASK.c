
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef int cTValue ;
typedef int GCtab ;


 char* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 int * FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(lua_State *VAR_1)
{
  cTValue *VAR_2 = FUNC_3(FUNC_6(FUNC_5(VAR_1)), FUNC_2(VAR_1, "_LOADED"));
  if (VAR_2 && FUNC_7(VAR_2)) {
    GCtab *VAR_3 = FUNC_6(VAR_2);
    FUNC_0(VAR_1, FUNC_4(VAR_1, VAR_3, FUNC_2(VAR_1, VAR_0)), VAR_1->top-1);
    FUNC_1(VAR_1, VAR_3);
  }
}
