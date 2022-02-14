
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {char const* src_end; int * L; } ;
struct TYPE_5__ {char* src; char const* lastmatch; TYPE_2__ ms; int p; } ;
typedef TYPE_1__ GMatchState ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (TYPE_2__*,char const*,int ) ;
 int FUNC_3 (TYPE_2__*,char const*,char const*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_0) {
  GMatchState *VAR_1 = (GMatchState *)FUNC_0(VAR_0, FUNC_1(3));
  const char *VAR_2;
  VAR_1->ms.L = VAR_0;
  for (VAR_2 = VAR_1->src; VAR_2 <= VAR_1->ms.src_end; VAR_2++) {
    const char *VAR_3;
    FUNC_4(&VAR_1->ms);
    if ((VAR_3 = FUNC_2(&VAR_1->ms, VAR_2, VAR_1->p)) != ((void*)0) && VAR_3 != VAR_1->lastmatch) {
      VAR_1->src = VAR_1->lastmatch = VAR_3;
      return FUNC_3(&VAR_1->ms, VAR_2, VAR_3);
    }
  }
  return 0;
}
