
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(lua_State *VAR_1, char **VAR_2)
{
  int VAR_3;
  const char *VAR_4 = VAR_2[0];
  if (FUNC_9(VAR_4, "-") == 0 && FUNC_9(VAR_2[-1], "--") != 0)
    VAR_4 = ((void*)0);
  VAR_3 = FUNC_1(VAR_1, VAR_4);
  if (VAR_3 == VAR_0) {

    int VAR_5 = 0;
    FUNC_2(VAR_1, "arg");
    if (FUNC_4(VAR_1, -1)) {
      do {
 VAR_5++;
 FUNC_6(VAR_1, -VAR_5, VAR_5);
      } while (!FUNC_3(VAR_1, -1));
      FUNC_5(VAR_1, 1);
      FUNC_7(VAR_1, -VAR_5);
      VAR_5--;
    } else {
      FUNC_5(VAR_1, 1);
    }
    VAR_3 = FUNC_0(VAR_1, VAR_5, 0);
  }
  return FUNC_8(VAR_1, VAR_3);
}
