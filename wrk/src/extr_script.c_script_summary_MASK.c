
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {char* member_0; int * member_2; int member_1; } ;
typedef TYPE_1__ table_field ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,TYPE_1__ const*) ;

void FUNC_2(lua_State *VAR_1, uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4) {
    const table_field VAR_5[] = {
        { "duration", &VAR_0, VAR_2 },
        { "requests", &VAR_0, VAR_3 },
        { "bytes", &VAR_0, VAR_4 },
        { ((void*)0), 0, ((void*)0) },
    };
    FUNC_0(VAR_1);
    FUNC_1(VAR_1, 1, VAR_5);
}
