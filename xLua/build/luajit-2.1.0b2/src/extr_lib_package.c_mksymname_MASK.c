
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int * VAR_0 ;
 char* FUNC_0 (int *,char const*,char*,char*) ;
 char* FUNC_1 (int *,char const*,char const*) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (char const*,int ) ;

__attribute__((used)) static const char *FUNC_4(lua_State *VAR_1, const char *VAR_2,
        const char *VAR_3)
{
  const char *VAR_4;
  const char *VAR_5 = FUNC_3(VAR_2, *VAR_0);
  if (VAR_5) VAR_2 = VAR_5 + 1;
  VAR_4 = FUNC_0(VAR_1, VAR_2, ".", "_");
  VAR_4 = FUNC_1(VAR_1, VAR_3, VAR_4);
  FUNC_2(VAR_1, -2);
  return VAR_4;
}
