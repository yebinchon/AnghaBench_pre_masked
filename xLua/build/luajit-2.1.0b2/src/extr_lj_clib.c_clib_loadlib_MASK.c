
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* FUNC_0 (int *,char const*) ;
 char* FUNC_1 (int *,int ) ;
 char* FUNC_2 () ;
 void* FUNC_3 (char const*,int) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,char const*,int) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void *FUNC_8(lua_State *VAR_3, const char *VAR_4, int VAR_5)
{
  void *VAR_6 = FUNC_3(FUNC_0(VAR_3, VAR_4),
     VAR_1 | (VAR_5?VAR_0:VAR_2));
  if (!VAR_6) {
    const char *VAR_7, *VAR_8 = FUNC_2();
    if (*VAR_8 == '/' && (VAR_7 = FUNC_6(VAR_8, ':')) &&
 (VAR_4 = FUNC_1(VAR_3, FUNC_7(FUNC_5(VAR_3, VAR_8, VAR_7-VAR_8))))) {
      VAR_6 = FUNC_3(VAR_4, VAR_1 | (VAR_5?VAR_0:VAR_2));
      if (VAR_6) return VAR_6;
      VAR_8 = FUNC_2();
    }
    FUNC_4(VAR_3, VAR_8);
  }
  return VAR_6;
}
