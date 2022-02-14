
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ lua_CFunction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (void*,char const*) ;
 void* FUNC_1 (int *,char const*,int) ;
 void** FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (int *,void*,char const*) ;
 scalar_t__ FUNC_4 (int *,char const*,int ,char const*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,scalar_t__) ;
 char const* FUNC_8 (int *,char const*,int ) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_6, const char *VAR_7, const char *VAR_8, int VAR_9)
{
  void **VAR_10 = FUNC_2(VAR_6, VAR_7);
  if (*VAR_10 == ((void*)0)) *VAR_10 = FUNC_1(VAR_6, VAR_7, (*VAR_8 == '*'));
  if (*VAR_10 == ((void*)0)) {
    return VAR_2;
  } else if (*VAR_8 == '*') {
    FUNC_6(VAR_6, 1);
    return 0;
  } else {
    const char *VAR_11 = VAR_9 ? VAR_8 : FUNC_8(VAR_6, VAR_8, VAR_5);
    lua_CFunction VAR_12 = FUNC_3(VAR_6, *VAR_10, VAR_11);
    if (VAR_12) {
      FUNC_7(VAR_6, VAR_12);
      return 0;
    }
    if (!VAR_9) {
      const char *VAR_13 = FUNC_0(*VAR_10, FUNC_8(VAR_6, VAR_8, VAR_4));
      FUNC_5(VAR_6, 1);
      if (VAR_13) {
 if (FUNC_4(VAR_6, VAR_13, VAR_0, VAR_8) != 0)
   return VAR_3;
 return 0;
      }
    }
    return VAR_1;
  }
}
