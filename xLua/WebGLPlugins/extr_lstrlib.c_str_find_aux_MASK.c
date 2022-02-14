
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
typedef int lua_Integer ;
struct TYPE_6__ {int src_end; } ;
typedef TYPE_1__ MatchState ;


 char* FUNC_0 (char const*,size_t,char const*,size_t) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 char* FUNC_6 (TYPE_1__*,char const*,char const*) ;
 scalar_t__ FUNC_7 (char const*,size_t) ;
 int FUNC_8 (int ,size_t) ;
 int FUNC_9 (TYPE_1__*,int *,char const*,size_t,char const*,size_t) ;
 int FUNC_10 (TYPE_1__*,char const*,char const*) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12 (lua_State *VAR_0, int VAR_1) {
  size_t VAR_2, VAR_3;
  const char *VAR_4 = FUNC_1(VAR_0, 1, &VAR_2);
  const char *VAR_5 = FUNC_1(VAR_0, 2, &VAR_3);
  lua_Integer VAR_6 = FUNC_8(FUNC_2(VAR_0, 3, 1), VAR_2);
  if (VAR_6 < 1) VAR_6 = 1;
  else if (VAR_6 > (lua_Integer)VAR_2 + 1) {
    FUNC_4(VAR_0);
    return 1;
  }

  if (VAR_1 && (FUNC_5(VAR_0, 4) || FUNC_7(VAR_5, VAR_3))) {

    const char *VAR_7 = FUNC_0(VAR_4 + VAR_6 - 1, VAR_2 - (size_t)VAR_6 + 1, VAR_5, VAR_3);
    if (VAR_7) {
      FUNC_3(VAR_0, (VAR_7 - VAR_4) + 1);
      FUNC_3(VAR_0, (VAR_7 - VAR_4) + VAR_3);
      return 2;
    }
  }
  else {
    MatchState VAR_8;
    const char *VAR_9 = VAR_4 + VAR_6 - 1;
    int VAR_10 = (*VAR_5 == '^');
    if (VAR_10) {
      VAR_5++; VAR_3--;
    }
    FUNC_9(&VAR_8, VAR_0, VAR_4, VAR_2, VAR_5, VAR_3);
    do {
      const char *VAR_11;
      FUNC_11(&VAR_8);
      if ((VAR_11=FUNC_6(&VAR_8, VAR_9, VAR_5)) != ((void*)0)) {
        if (VAR_1) {
          FUNC_3(VAR_0, (VAR_9 - VAR_4) + 1);
          FUNC_3(VAR_0, VAR_11 - VAR_4);
          return FUNC_10(&VAR_8, ((void*)0), 0) + 2;
        }
        else
          return FUNC_10(&VAR_8, VAR_9, VAR_11);
      }
    } while (VAR_9++ < VAR_8.src_end && !VAR_10);
  }
  FUNC_4(VAR_0);
  return 1;
}
