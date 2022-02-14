
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int THFile ;
typedef int THCharStorage ;


 int * FUNC_0 (char const*) ;
 int * FUNC_1 (int *,char const*) ;
 char* FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int *,char*) ;
 int * FUNC_4 (int *,int,char*) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_0)
{
  const char *VAR_1;
  THCharStorage *VAR_2 = FUNC_4(VAR_0, 1, "torch.CharStorage");
  THFile *VAR_3;

  if(VAR_2)
  {
    VAR_1 = FUNC_2(VAR_0, 2, "rw");
    VAR_3 = FUNC_1(VAR_2, VAR_1);
  }
  else
  {
    VAR_1 = FUNC_2(VAR_0, 1, "rw");
    VAR_3 = FUNC_0(VAR_1);
  }

  FUNC_3(VAR_0, VAR_3, "torch.MemoryFile");
  return 1;
}
