
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Table ;
typedef int TValue ;
typedef int TMS ;


 int * FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int const*,int const*) ;

__attribute__((used)) static const TValue *FUNC_2 (lua_State *VAR_0, Table *VAR_1, Table *VAR_2,
                                  TMS VAR_3) {
  const TValue *VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3);
  const TValue *VAR_5;
  if (VAR_4 == ((void*)0)) return ((void*)0);
  if (VAR_1 == VAR_2) return VAR_4;
  VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_3);
  if (VAR_5 == ((void*)0)) return ((void*)0);
  if (FUNC_1(VAR_4, VAR_5))
    return VAR_4;
  return ((void*)0);
}
