
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_13__ {size_t len; char* data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_14__ {int valid; int not_found; char* data; size_t len; scalar_t__ no_cacheable; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_15__ {int flags; size_t index; int data; int (* set_handler ) (TYPE_4__*,TYPE_2__*,int ) ;} ;
typedef TYPE_3__ ngx_http_variable_t ;
struct TYPE_16__ {TYPE_2__* variables; int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_17__ {int variables_hash; } ;
typedef TYPE_5__ ngx_http_core_main_conf_t ;
typedef int lua_State ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int,char const*) ;
 scalar_t__ FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *,char*,...) ;
 char* FUNC_4 (int *,size_t) ;
 char* FUNC_5 (int *,char*,int ) ;
 scalar_t__ FUNC_6 (int *,int,size_t*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 TYPE_3__* FUNC_9 (int *,int ,char*,size_t) ;
 int FUNC_10 (char*,char*,size_t) ;
 int VAR_2 ;
 TYPE_5__* FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_13 (int *) ;
 int FUNC_14 (char*,char*,size_t) ;
 void* FUNC_15 (int ,int) ;
 int FUNC_16 (TYPE_4__*,TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_17(lua_State *VAR_3)
{
    ngx_http_variable_t *VAR_4;
    ngx_http_variable_value_t *VAR_5;
    ngx_http_core_main_conf_t *VAR_6;
    u_char *VAR_7, *VAR_8, *VAR_9;
    size_t VAR_10;
    ngx_str_t VAR_11;
    ngx_uint_t VAR_12;
    ngx_http_request_t *VAR_13;
    int VAR_14;
    const char *VAR_15;

    VAR_13 = FUNC_13(VAR_3);
    if (VAR_13 == ((void*)0)) {
        return FUNC_3(VAR_3, "no request object found");
    }

    FUNC_12(VAR_3, VAR_13);





    if (FUNC_7(VAR_3, 2) != 128) {
        return FUNC_3(VAR_3, "bad variable name");
    }

    VAR_7 = (u_char *) FUNC_6(VAR_3, 2, &VAR_10);

    VAR_8 = FUNC_4(VAR_3, VAR_10 + 1);

    VAR_12 = FUNC_10(VAR_8, VAR_7, VAR_10);
    VAR_8[VAR_10] = '\0';

    VAR_11.len = VAR_10;
    VAR_11.data = VAR_8;



    VAR_14 = FUNC_7(VAR_3, 3);
    switch (VAR_14) {
    case 129:
    case 128:
        VAR_7 = (u_char *) FUNC_2(VAR_3, 3, &VAR_10);

        VAR_9 = FUNC_15(VAR_13->pool, VAR_10);
        if (VAR_9 == ((void*)0)) {
            return FUNC_3(VAR_3, "memory allocation error");
        }

        FUNC_14(VAR_9, VAR_7, VAR_10);

        break;

    case 130:


        VAR_9 = ((void*)0);
        VAR_10 = 0;

        break;

    default:
        VAR_15 = FUNC_5(VAR_3, "string, number, or nil expected, "
                              "but got %s", FUNC_8(VAR_3, VAR_14));
        return FUNC_1(VAR_3, 1, VAR_15);
    }



    VAR_6 = FUNC_11(VAR_13, VAR_2);

    VAR_4 = FUNC_9(&VAR_6->variables_hash, VAR_12, VAR_11.data, VAR_11.len);

    if (VAR_4) {
        if (!(VAR_4->flags & VAR_0)) {
            return FUNC_3(VAR_3, "variable \"%s\" not changeable", VAR_8);
        }

        if (VAR_4->set_handler) {

            FUNC_0("set variables with set_handler");

            VAR_5 = FUNC_15(VAR_13->pool, sizeof(ngx_http_variable_value_t));
            if (VAR_5 == ((void*)0)) {
                return FUNC_3(VAR_3, "no memory");
            }

            if (VAR_14 == 130) {
                VAR_5->valid = 0;
                VAR_5->not_found = 1;
                VAR_5->no_cacheable = 0;
                VAR_5->data = ((void*)0);
                VAR_5->len = 0;

            } else {
                VAR_5->valid = 1;
                VAR_5->not_found = 0;
                VAR_5->no_cacheable = 0;

                VAR_5->data = VAR_9;
                VAR_5->len = VAR_10;
            }

            VAR_4->set_handler(VAR_13, VAR_5, VAR_4->data);

            return 0;
        }

        if (VAR_4->flags & VAR_1) {
            VAR_5 = &VAR_13->variables[VAR_4->index];

            FUNC_0("set indexed variable");

            if (VAR_14 == 130) {
                VAR_5->valid = 0;
                VAR_5->not_found = 1;
                VAR_5->no_cacheable = 0;

                VAR_5->data = ((void*)0);
                VAR_5->len = 0;

            } else {
                VAR_5->valid = 1;
                VAR_5->not_found = 0;
                VAR_5->no_cacheable = 0;

                VAR_5->data = VAR_9;
                VAR_5->len = VAR_10;
            }

            return 0;
        }

        return FUNC_3(VAR_3, "variable \"%s\" cannot be assigned a value",
                          VAR_8);
    }



    return FUNC_3(VAR_3, "variable \"%s\" not found for writing; "
                      "maybe it is a built-in variable that is not changeable "
                      "or you forgot to use \"set $%s '';\" "
                      "in the config file to define it first",
                      VAR_8, VAR_8);
}
