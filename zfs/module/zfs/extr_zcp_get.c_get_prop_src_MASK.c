
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zfs_prop_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(lua_State *VAR_1, const char *VAR_2, zfs_prop_t VAR_3)
{
 if (FUNC_3(VAR_3) || (VAR_3 == VAR_0)) {
  FUNC_0(VAR_1);
 } else {
  const char *VAR_4;
  if (FUNC_2("", VAR_2) == 0) {
   VAR_4 = "default";
  } else {
   VAR_4 = VAR_2;
  }
  (void) FUNC_1(VAR_1, VAR_4);
 }
}
