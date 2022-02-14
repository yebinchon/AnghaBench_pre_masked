
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int THFile ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,char*,char*,char,char) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_0)
{
  THFile *VAR_1 = FUNC_3(VAR_0, 1, "torch.MemoryFile");
  FUNC_4(VAR_0, "torch.MemoryFile [status: %s -- mode: %c%c]",
                  (FUNC_0(VAR_1) ? "open" : "closed"),
                  (FUNC_1(VAR_1) ? 'r' : ' '),
                  (FUNC_2(VAR_1) ? 'w' : ' '));
  return 1;
}
