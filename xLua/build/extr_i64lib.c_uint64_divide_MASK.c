
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(lua_State* VAR_0) {
 uint64_t VAR_1 = FUNC_2(VAR_0, 1);
 uint64_t VAR_2 = FUNC_2(VAR_0, 2);
 if (VAR_2 == 0) {
        return FUNC_0(VAR_0, "div by zero");
    }
 FUNC_1(VAR_0, VAR_1 / VAR_2);
 return 1;
}
