
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int THGenerator ;
typedef int THFile ;


 int FUNC_0 (int *,unsigned char*,int) ;
 void* FUNC_1 (int *,int,char*) ;
 char* VAR_0 ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_1)
{
  THGenerator *VAR_2 = FUNC_1(VAR_1, 1, VAR_0);
  THFile *VAR_3 = FUNC_1(VAR_1, 2, "torch.File");

  FUNC_0(VAR_3, (unsigned char *)VAR_2, sizeof(THGenerator));
  return 0;
}
