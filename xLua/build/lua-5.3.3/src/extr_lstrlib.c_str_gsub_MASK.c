
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
typedef scalar_t__ lua_Integer ;
typedef int luaL_Buffer ;
struct TYPE_6__ {char const* src_end; } ;
typedef TYPE_1__ MatchState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *,char const*,char const*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (int *,int,int,char*) ;
 int FUNC_4 (int *,int *) ;
 char* FUNC_5 (int *,int,size_t*) ;
 scalar_t__ FUNC_6 (int *,int,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,int) ;
 char* FUNC_10 (TYPE_1__*,char const*,char const*) ;
 int FUNC_11 (TYPE_1__*,int *,char const*,size_t,char const*,size_t) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_13 (lua_State *VAR_4) {
  size_t VAR_5, VAR_6;
  const char *VAR_7 = FUNC_5(VAR_4, 1, &VAR_5);
  const char *VAR_8 = FUNC_5(VAR_4, 2, &VAR_6);
  const char *VAR_9 = ((void*)0);
  int VAR_10 = FUNC_9(VAR_4, 3);
  lua_Integer VAR_11 = FUNC_6(VAR_4, 4, VAR_5 + 1);
  int VAR_12 = (*VAR_8 == '^');
  lua_Integer VAR_13 = 0;
  MatchState VAR_14;
  luaL_Buffer VAR_15;
  FUNC_3(VAR_4, VAR_10 == VAR_1 || VAR_10 == VAR_2 ||
                   VAR_10 == VAR_0 || VAR_10 == VAR_3, 3,
                      "string/function/table expected");
  FUNC_4(VAR_4, &VAR_15);
  if (VAR_12) {
    VAR_8++; VAR_6--;
  }
  FUNC_11(&VAR_14, VAR_4, VAR_7, VAR_5, VAR_8, VAR_6);
  while (VAR_13 < VAR_11) {
    const char *VAR_16;
    FUNC_12(&VAR_14);
    if ((VAR_16 = FUNC_10(&VAR_14, VAR_7, VAR_8)) != ((void*)0) && VAR_16 != VAR_9) {
      VAR_13++;
      FUNC_0(&VAR_14, &VAR_15, VAR_7, VAR_16, VAR_10);
      VAR_7 = VAR_9 = VAR_16;
    }
    else if (VAR_7 < VAR_14.src_end)
      FUNC_1(&VAR_15, *VAR_7++);
    else break;
    if (VAR_12) break;
  }
  FUNC_2(&VAR_15, VAR_7, VAR_14.src_end-VAR_7);
  FUNC_7(&VAR_15);
  FUNC_8(VAR_4, VAR_13);
  return 2;
}
