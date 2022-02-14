
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_18__ {size_t len; char* data; } ;
struct TYPE_15__ {TYPE_6__ value; int key; scalar_t__ hash; } ;
typedef TYPE_3__ ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {TYPE_3__* location; scalar_t__ status; int headers; } ;
struct TYPE_16__ {TYPE_2__ headers_out; TYPE_1__* connection; int pool; scalar_t__ header_sent; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_17__ {int exited; scalar_t__ exit_code; scalar_t__ header_sent; } ;
typedef TYPE_5__ ngx_http_lua_ctx_t ;
typedef int lua_State ;
struct TYPE_13__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (int *,int,size_t*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (char*,int) ;
 TYPE_5__* FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (int *,TYPE_5__*,int) ;
 int FUNC_9 (int *,TYPE_5__*) ;
 TYPE_4__* FUNC_10 (int *) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 TYPE_3__* FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int ,char*,TYPE_6__*,scalar_t__) ;
 int FUNC_13 (char*,char*,size_t) ;
 char* FUNC_14 (int ,size_t) ;
 int FUNC_15 (int *,char*) ;

__attribute__((used)) static int
FUNC_16(lua_State *VAR_11)
{
    ngx_http_lua_ctx_t *VAR_12;
    ngx_int_t VAR_13;
    int VAR_14;
    u_char *VAR_15;
    u_char *VAR_16;
    size_t VAR_17;
    ngx_table_elt_t *VAR_18;
    ngx_http_request_t *VAR_19;

    VAR_14 = FUNC_4(VAR_11);

    if (VAR_14 != 1 && VAR_14 != 2) {
        return FUNC_3(VAR_11, "expecting one or two arguments");
    }

    VAR_15 = (u_char *) FUNC_1(VAR_11, 1, &VAR_17);

    if (VAR_14 == 2) {
        VAR_13 = (ngx_int_t) FUNC_2(VAR_11, 2);

        if (VAR_13 != VAR_4
            && VAR_13 != VAR_3
            && VAR_13 != VAR_6
            && VAR_13 != VAR_5
            && VAR_13 != VAR_7)
        {
            return FUNC_3(VAR_11, "only ngx.HTTP_MOVED_TEMPORARILY, "
                              "ngx.HTTP_MOVED_PERMANENTLY, "
                              "ngx.HTTP_PERMANENT_REDIRECT, "
                              "ngx.HTTP_SEE_OTHER, and "
                              "ngx.HTTP_TEMPORARY_REDIRECT are allowed");
        }

    } else {
        VAR_13 = VAR_4;
    }

    VAR_19 = FUNC_10(VAR_11);
    if (VAR_19 == ((void*)0)) {
        return FUNC_3(VAR_11, "no request object found");
    }

    VAR_12 = FUNC_7(VAR_19, VAR_10);
    if (VAR_12 == ((void*)0)) {
        return FUNC_3(VAR_11, "no request ctx found");
    }

    FUNC_8(VAR_11, VAR_12, VAR_2
                               | VAR_0
                               | VAR_1);

    FUNC_9(VAR_11, VAR_12);

    if (VAR_19->header_sent || VAR_12->header_sent) {
        return FUNC_3(VAR_11, "attempt to call ngx.redirect after sending out "
                          "the headers");
    }

    VAR_16 = FUNC_14(VAR_19->pool, VAR_17);
    if (VAR_16 == ((void*)0)) {
        return FUNC_3(VAR_11, "no memory");
    }

    FUNC_13(VAR_16, VAR_15, VAR_17);

    VAR_18 = FUNC_11(&VAR_19->headers_out.headers);
    if (VAR_18 == ((void*)0)) {
        return FUNC_3(VAR_11, "no memory");
    }

    VAR_18->hash = VAR_9;
    VAR_18->value.len = VAR_17;
    VAR_18->value.data = VAR_16;
    FUNC_15(&VAR_18->key, "Location");

    VAR_19->headers_out.status = VAR_13;

    VAR_12->exit_code = VAR_13;
    VAR_12->exited = 1;

    FUNC_12(VAR_8, VAR_19->connection->log, 0,
                   "lua redirect to \"%V\" with code %i",
                   &VAR_18->value, VAR_12->exit_code);

    if (VAR_17 && VAR_16[0] != '/') {
        VAR_19->headers_out.location = VAR_18;
    }






    return FUNC_5(VAR_11, 0);
}
