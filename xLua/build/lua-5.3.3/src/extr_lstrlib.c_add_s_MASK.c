
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int luaL_Buffer ;
struct TYPE_4__ {int * L; } ;
typedef TYPE_1__ MatchState ;


 char const VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char const) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *,int) ;
 char* FUNC_7 (int *,int,size_t*) ;
 int FUNC_8 (TYPE_1__*,char const,char const*,char const*) ;
 int FUNC_9 (char const) ;

__attribute__((used)) static void FUNC_10 (MatchState *VAR_1, luaL_Buffer *VAR_2, const char *VAR_3,
                                                   const char *VAR_4) {
  size_t VAR_5, VAR_6;
  lua_State *VAR_7 = VAR_1->L;
  const char *VAR_8 = FUNC_7(VAR_7, 3, &VAR_5);
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
    if (VAR_8[VAR_6] != VAR_0)
      FUNC_1(VAR_2, VAR_8[VAR_6]);
    else {
      VAR_6++;
      if (!FUNC_0(FUNC_9(VAR_8[VAR_6]))) {
        if (VAR_8[VAR_6] != VAR_0)
          FUNC_4(VAR_7, "invalid use of '%c' in replacement string", VAR_0);
        FUNC_1(VAR_2, VAR_8[VAR_6]);
      }
      else if (VAR_8[VAR_6] == '0')
          FUNC_2(VAR_2, VAR_3, VAR_4 - VAR_3);
      else {
        FUNC_8(VAR_1, VAR_8[VAR_6] - '1', VAR_3, VAR_4);
        FUNC_5(VAR_7, -1, ((void*)0));
        FUNC_6(VAR_7, -2);
        FUNC_3(VAR_2);
      }
    }
  }
}
