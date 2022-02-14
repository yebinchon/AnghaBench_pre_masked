
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int THFile ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,size_t) ;
 int FUNC_1 (int *,int,int ) ;
 int * FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int ) ;
 char* FUNC_4 (int *,int,size_t*) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_1)
{
  THFile *VAR_2 = FUNC_2(VAR_1, 1, "torch.File");
  const char *VAR_3 = ((void*)0);
  size_t VAR_4;

  FUNC_1(VAR_1, 2, VAR_0);
  VAR_3 = FUNC_4(VAR_1, 2, &VAR_4);
  FUNC_3(VAR_1, FUNC_0(VAR_2, VAR_3, VAR_4));
  return 1;
}
