
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int cTValue ;
struct TYPE_4__ {int firstline; } ;
typedef TYPE_1__ GCproto ;
typedef int GCfunc ;
typedef scalar_t__ BCLine ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int *) ;
 int * FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int *,char*,char const*,...) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(lua_State *VAR_1, const char *VAR_2,
       cTValue *VAR_3, cTValue *VAR_4)
{
  if (VAR_3) {
    GCfunc *VAR_5 = FUNC_1(VAR_3);
    if (FUNC_3(VAR_5)) {
      BCLine VAR_6 = FUNC_0(VAR_1, VAR_5, VAR_4);
      if (VAR_6 >= 0) {
 GCproto *VAR_7 = FUNC_2(VAR_5);
 char VAR_8[VAR_0];
 FUNC_4(VAR_8, FUNC_6(VAR_7), VAR_7->firstline);
 FUNC_5(VAR_1, "%s:%d: %s", VAR_8, VAR_6, VAR_2);
 return;
      }
    }
  }
  FUNC_5(VAR_1, "%s", VAR_2);
}
