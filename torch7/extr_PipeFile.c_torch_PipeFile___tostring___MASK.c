
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int THFile ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *,char*,int ,char*,char,char) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_0)
{
  THFile *VAR_1 = FUNC_4(VAR_0, 1, "torch.PipeFile");
  FUNC_5(VAR_0, "torch.PipeFile on <%s> [status: %s -- mode: %c%c]",
                  FUNC_0(VAR_1),
                  (FUNC_1(VAR_1) ? "open" : "closed"),
                  (FUNC_2(VAR_1) ? 'r' : ' '),
                  (FUNC_3(VAR_1) ? 'w' : ' '));
  return 1;
}
