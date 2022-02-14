
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int lua_State ;
struct TYPE_3__ {int * gcroot; } ;
typedef TYPE_1__ global_State ;
typedef int GCstr ;


 TYPE_1__* FUNC_0 (int *) ;
 size_t VAR_0 ;
 char* FUNC_1 (int ) ;
 int VAR_1 ;
 int * FUNC_2 (int *,char const*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(lua_State *VAR_2)
{

  const char *VAR_3 = FUNC_1(VAR_1);

  global_State *VAR_4 = FUNC_0(VAR_2);
  const char *VAR_5, *VAR_6;
  uint32_t VAR_7;
  for (VAR_7 = 0, VAR_5 = VAR_3; *VAR_5; VAR_7++, VAR_5 = VAR_6) {
    GCstr *VAR_8;
    for (VAR_6 = VAR_5+2; *VAR_6 && *VAR_6 != '_'; VAR_6++) ;
    VAR_8 = FUNC_2(VAR_2, VAR_5, (size_t)(VAR_6-VAR_5));

    FUNC_4(VAR_4->gcroot[VAR_0+VAR_7], FUNC_3(VAR_8));
  }
}
