
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
typedef scalar_t__ ngx_socket_t ;
struct TYPE_13__ {int valid; int not_found; size_t len; int * data; scalar_t__ no_cacheable; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_14__ {int flags; size_t index; int data; int (* set_handler ) (TYPE_4__*,TYPE_2__*,int ) ;} ;
typedef TYPE_3__ ngx_http_variable_t ;
struct TYPE_15__ {int pool; TYPE_2__* variables; TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_16__ {int variables_hash; } ;
typedef TYPE_5__ ngx_http_core_main_conf_t ;
struct TYPE_12__ {scalar_t__ fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 TYPE_3__* FUNC_1 (int *,int ,int *,size_t) ;
 int FUNC_2 (int *,int *,size_t) ;
 int VAR_4 ;
 TYPE_5__* FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int *,int *,size_t) ;
 void* FUNC_5 (int ,size_t) ;
 int * FUNC_6 (int *,size_t,char*,...) ;
 int FUNC_7 (TYPE_4__*,TYPE_2__*,int ) ;

int
FUNC_8(ngx_http_request_t *VAR_5, u_char *VAR_6,
    size_t VAR_7, u_char *VAR_8, u_char *VAR_9, size_t VAR_10,
    u_char *VAR_11, size_t *VAR_12)
{
    u_char *VAR_13;
    ngx_uint_t VAR_14;
    ngx_http_variable_t *VAR_15;
    ngx_http_variable_value_t *VAR_16;
    ngx_http_core_main_conf_t *VAR_17;

    if (VAR_5 == ((void*)0)) {
        *VAR_12 = FUNC_6(VAR_11, *VAR_12, "no request object found")
                  - VAR_11;
        return VAR_0;
    }

    if ((VAR_5)->connection->fd == (ngx_socket_t) -1) {
        *VAR_12 = FUNC_6(VAR_11, *VAR_12,
                               "API disabled in the current context")
                  - VAR_11;
        return VAR_0;
    }

    VAR_14 = FUNC_2(VAR_8, VAR_6, VAR_7);

    FUNC_0("variable name: %.*s", (int) VAR_7, VAR_8);



    VAR_17 = FUNC_3(VAR_5, VAR_4);

    VAR_15 = FUNC_1(&VAR_17->variables_hash, VAR_14, VAR_8, VAR_7);

    if (VAR_15) {
        if (!(VAR_15->flags & VAR_1)) {
            FUNC_0("variable not changeable");
            *VAR_12 = FUNC_6(VAR_11, *VAR_12,
                                   "variable \"%*s\" not changeable",
                                   VAR_7, VAR_8)
                      - VAR_11;
            return VAR_0;
        }

        if (VAR_15->set_handler) {

            FUNC_0("set variables with set_handler");

            if (VAR_9 != ((void*)0) && VAR_10) {
                VAR_16 = FUNC_5(VAR_5->pool, sizeof(ngx_http_variable_value_t)
                                + VAR_10);
                if (VAR_16 == ((void*)0)) {
                    goto nomem;
                }

                VAR_13 = (u_char *) VAR_16 + sizeof(ngx_http_variable_value_t);
                FUNC_4(VAR_13, VAR_9, VAR_10);
                VAR_9 = VAR_13;

            } else {
                VAR_16 = FUNC_5(VAR_5->pool, sizeof(ngx_http_variable_value_t));
                if (VAR_16 == ((void*)0)) {
                    goto nomem;
                }
            }

            if (VAR_9 == ((void*)0)) {
                VAR_16->valid = 0;
                VAR_16->not_found = 1;
                VAR_16->no_cacheable = 0;
                VAR_16->data = ((void*)0);
                VAR_16->len = 0;

            } else {
                VAR_16->valid = 1;
                VAR_16->not_found = 0;
                VAR_16->no_cacheable = 0;

                VAR_16->data = VAR_9;
                VAR_16->len = VAR_10;
            }

            VAR_15->set_handler(VAR_5, VAR_16, VAR_15->data);
            return VAR_3;
        }

        if (VAR_15->flags & VAR_2) {
            VAR_16 = &VAR_5->variables[VAR_15->index];

            FUNC_0("set indexed variable");

            if (VAR_9 == ((void*)0)) {
                VAR_16->valid = 0;
                VAR_16->not_found = 1;
                VAR_16->no_cacheable = 0;

                VAR_16->data = ((void*)0);
                VAR_16->len = 0;

            } else {
                VAR_13 = FUNC_5(VAR_5->pool, VAR_10);
                if (VAR_13 == ((void*)0)) {
                    goto nomem;
                }

                FUNC_4(VAR_13, VAR_9, VAR_10);
                VAR_9 = VAR_13;

                VAR_16->valid = 1;
                VAR_16->not_found = 0;
                VAR_16->no_cacheable = 0;

                VAR_16->data = VAR_9;
                VAR_16->len = VAR_10;
            }

            return VAR_3;
        }

        *VAR_12 = FUNC_6(VAR_11, *VAR_12,
                               "variable \"%*s\" cannot be assigned "
                               "a value", VAR_7, VAR_8)
                  - VAR_11;
        return VAR_0;
    }



    *VAR_12 = FUNC_6(VAR_11, *VAR_12,
                           "variable \"%*s\" not found for writing; "
                           "maybe it is a built-in variable that is not "
                           "changeable or you forgot to use \"set $%*s '';\" "
                           "in the config file to define it first",
                           VAR_7, VAR_8, VAR_7, VAR_8)
              - VAR_11;
    return VAR_0;

nomem:

    *VAR_12 = FUNC_6(VAR_11, *VAR_12, "no memory") - VAR_11;
    return VAR_0;
}
