
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; scalar_t__ name; int * value; } ;
typedef TYPE_1__ table_field ;
typedef int lua_State ;
typedef int lua_Integer ;
typedef int lua_CFunction ;






 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(lua_State *VAR_0, int VAR_1, const table_field *VAR_2) {
    for (int VAR_3 = 0; VAR_2[VAR_3].name; VAR_3++) {
        table_field VAR_4 = VAR_2[VAR_3];
        switch (VAR_4.value == ((void*)0) ? 130 : VAR_4.type) {
            case 131:
                FUNC_0(VAR_0, (lua_CFunction) VAR_4.value);
                break;
            case 129:
                FUNC_1(VAR_0, *((lua_Integer *) VAR_4.value));
                break;
            case 128:
                FUNC_3(VAR_0, (const char *) VAR_4.value);
                break;
            case 130:
                FUNC_2(VAR_0);
                break;
        }
        FUNC_4(VAR_0, VAR_1, VAR_4.name);
    }
}
