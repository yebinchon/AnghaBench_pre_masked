
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int method; int method_name; } ;
typedef TYPE_1__ ngx_http_request_t ;
typedef int lua_State ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_15)
{
    int VAR_16;
    int VAR_17;
    ngx_http_request_t *VAR_18;

    VAR_16 = FUNC_2(VAR_15);
    if (VAR_16 != 1) {
        return FUNC_1(VAR_15, "only one argument expected but got %d", VAR_16);
    }

    VAR_17 = FUNC_0(VAR_15, 1);

    VAR_18 = FUNC_4(VAR_15);
    if (VAR_18 == ((void*)0)) {
        return FUNC_1(VAR_15, "request object not found");
    }

    FUNC_3(VAR_15, VAR_18);

    switch (VAR_17) {
        case 140:
            VAR_18->method_name = VAR_2;
            break;

        case 133:
            VAR_18->method_name = VAR_9;
            break;

        case 130:
            VAR_18->method_name = VAR_12;
            break;

        case 139:
            VAR_18->method_name = VAR_3;
            break;

        case 141:
            VAR_18->method_name = VAR_1;
            break;

        case 135:
            VAR_18->method_name = VAR_7;
            break;

        case 137:
            VAR_18->method_name = VAR_5;
            break;

        case 142:
            VAR_18->method_name = VAR_0;
            break;

        case 136:
            VAR_18->method_name = VAR_6;
            break;

        case 132:
            VAR_18->method_name = VAR_10;
            break;

        case 131:
            VAR_18->method_name = VAR_11;
            break;

        case 138:
            VAR_18->method_name = VAR_4;
            break;

        case 128:
            VAR_18->method_name = VAR_14;
            break;

        case 134:
            VAR_18->method_name = VAR_8;
            break;

        case 129:
            VAR_18->method_name = VAR_13;
            break;

        default:
            return FUNC_1(VAR_15, "unsupported HTTP method: %d", VAR_17);
    }

    VAR_18->method = VAR_17;

    return 0;
}
