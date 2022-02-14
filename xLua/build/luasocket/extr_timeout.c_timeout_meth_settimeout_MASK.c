
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* p_timeout ;
typedef int lua_State ;
struct TYPE_3__ {double block; double total; } ;


 int FUNC_0 (int *,int ,int,char*) ;
 double FUNC_1 (int *,int,int) ;
 char* FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int) ;

int FUNC_4(lua_State *VAR_0, p_timeout VAR_1) {
    double VAR_2 = FUNC_1(VAR_0, 2, -1);
    const char *VAR_3 = FUNC_2(VAR_0, 3, "b");
    switch (*VAR_3) {
        case 'b':
            VAR_1->block = VAR_2;
            break;
        case 'r': case 't':
            VAR_1->total = VAR_2;
            break;
        default:
            FUNC_0(VAR_0, 0, 3, "invalid timeout mode");
            break;
    }
    FUNC_3(VAR_0, 1);
    return 1;
}
