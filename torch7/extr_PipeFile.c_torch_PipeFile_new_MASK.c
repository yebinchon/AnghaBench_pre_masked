
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int THFile ;


 int * FUNC_0 (char const*,char const*,int) ;
 char* FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_0)
{
  const char *VAR_1 = FUNC_1(VAR_0, 1);
  const char *VAR_2 = FUNC_2(VAR_0, 2, "r");
  int VAR_3 = FUNC_3(VAR_0, 3, 0);
  THFile *VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

  FUNC_4(VAR_0, VAR_4, "torch.PipeFile");
  return 1;
}
