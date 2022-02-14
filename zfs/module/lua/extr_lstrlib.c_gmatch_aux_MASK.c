
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int lua_Integer ;
struct TYPE_4__ {scalar_t__ matchdepth; char const* src_init; char const* src_end; char const* p_end; scalar_t__ level; int * L; } ;
typedef TYPE_1__ MatchState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 char* FUNC_4 (int *,int ,size_t*) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (TYPE_1__*,char const*,char const*) ;
 int FUNC_7 (TYPE_1__*,char const*,char const*) ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_1) {
  MatchState VAR_2;
  size_t VAR_3, VAR_4;
  const char *VAR_5 = FUNC_4(VAR_1, FUNC_5(1), &VAR_3);
  const char *VAR_6 = FUNC_4(VAR_1, FUNC_5(2), &VAR_4);
  const char *VAR_7;
  VAR_2.L = VAR_1;
  VAR_2.matchdepth = VAR_0;
  VAR_2.src_init = VAR_5;
  VAR_2.src_end = VAR_5+VAR_3;
  VAR_2.p_end = VAR_6 + VAR_4;
  for (VAR_7 = VAR_5 + (size_t)FUNC_3(VAR_1, FUNC_5(3));
       VAR_7 <= VAR_2.src_end;
       VAR_7++) {
    const char *VAR_8;
    VAR_2.level = 0;
    FUNC_0(VAR_2.matchdepth == VAR_0);
    if ((VAR_8 = FUNC_6(&VAR_2, VAR_7, VAR_6)) != ((void*)0)) {
      lua_Integer VAR_9 = VAR_8-VAR_5;
      if (VAR_8 == VAR_7) VAR_9++;
      FUNC_1(VAR_1, VAR_9);
      FUNC_2(VAR_1, FUNC_5(3));
      return FUNC_7(&VAR_2, VAR_7, VAR_8);
    }
  }
  return 0;
}
