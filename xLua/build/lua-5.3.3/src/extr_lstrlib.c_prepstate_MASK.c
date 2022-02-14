
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {char const* src_init; char const* src_end; char const* p_end; int matchdepth; int * L; } ;
typedef TYPE_1__ MatchState ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0 (MatchState *VAR_1, lua_State *VAR_2,
                       const char *VAR_3, size_t VAR_4, const char *VAR_5, size_t VAR_6) {
  VAR_1->L = VAR_2;
  VAR_1->matchdepth = VAR_0;
  VAR_1->src_init = VAR_3;
  VAR_1->src_end = VAR_3 + VAR_4;
  VAR_1->p_end = VAR_5 + VAR_6;
}
