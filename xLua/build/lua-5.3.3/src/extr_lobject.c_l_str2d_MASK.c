
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Number ;


 int VAR_0 ;
 int FUNC_0 (char const) ;
 char* FUNC_1 (char const*,int *,int) ;
 int FUNC_2 (int ) ;
 char FUNC_3 () ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,char*) ;

__attribute__((used)) static const char *FUNC_8 (const char *VAR_1, lua_Number *VAR_2) {
  const char *VAR_3;
  const char *VAR_4 = FUNC_7(VAR_1, ".xXnN");
  int VAR_5 = VAR_4 ? FUNC_2(FUNC_0(*VAR_4)) : 0;
  if (VAR_5 == 'n')
    return ((void*)0);
  VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_5);
  if (VAR_3 == ((void*)0)) {
    char VAR_6[VAR_0 + 1];
    char *VAR_7 = FUNC_4(VAR_1, '.');
    if (FUNC_6(VAR_1) > VAR_0 || VAR_7 == ((void*)0))
      return ((void*)0);
    FUNC_5(VAR_6, VAR_1);
    VAR_6[VAR_7 - VAR_1] = FUNC_3();
    VAR_3 = FUNC_1(VAR_6, VAR_2, VAR_5);
    if (VAR_3 != ((void*)0))
      VAR_3 = VAR_1 + (VAR_3 - VAR_6);
  }
  return VAR_3;
}
