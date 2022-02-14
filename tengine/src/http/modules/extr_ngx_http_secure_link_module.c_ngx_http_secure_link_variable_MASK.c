
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ time_t ;
struct TYPE_27__ {int len; int * data; } ;
typedef TYPE_4__ ngx_str_t ;
typedef int ngx_md5_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_28__ {int len; int valid; int not_found; scalar_t__ no_cacheable; int * data; } ;
typedef TYPE_5__ ngx_http_variable_value_t ;
struct TYPE_25__ {int len; int * data; } ;
struct TYPE_29__ {TYPE_2__ expires; } ;
typedef TYPE_6__ ngx_http_secure_link_ctx_t ;
struct TYPE_24__ {scalar_t__ data; } ;
struct TYPE_30__ {int * md5; int * variable; TYPE_1__ secret; } ;
typedef TYPE_7__ ngx_http_secure_link_conf_t ;
struct TYPE_31__ {TYPE_3__* connection; int pool; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_26__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_8__*,int *,TYPE_4__*) ;
 TYPE_7__* FUNC_3 (TYPE_8__*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_8__*,TYPE_7__*,TYPE_5__*,uintptr_t) ;
 int FUNC_5 (TYPE_8__*,TYPE_6__*,int ) ;
 int FUNC_6 (int ,int ,int ,char*,TYPE_4__*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int) ;
 scalar_t__ FUNC_10 (int *,int *,int) ;
 TYPE_6__* FUNC_11 (int ,int) ;
 int * FUNC_12 (int *,int *,char) ;
 scalar_t__ FUNC_13 () ;

__attribute__((used)) static ngx_int_t
FUNC_14(ngx_http_request_t *VAR_4,
    ngx_http_variable_value_t *VAR_5, uintptr_t VAR_6)
{
    u_char *VAR_7, *VAR_8;
    ngx_str_t VAR_9, VAR_10;
    time_t VAR_11;
    ngx_md5_t VAR_12;
    ngx_http_secure_link_ctx_t *VAR_13;
    ngx_http_secure_link_conf_t *VAR_14;
    u_char VAR_15[18], VAR_16[16];

    VAR_14 = FUNC_3(VAR_4, VAR_3);

    if (VAR_14->secret.data) {
        return FUNC_4(VAR_4, VAR_14, VAR_5, VAR_6);
    }

    if (VAR_14->variable == ((void*)0) || VAR_14->md5 == ((void*)0)) {
        goto not_found;
    }

    if (FUNC_2(VAR_4, VAR_14->variable, &VAR_9) != VAR_2) {
        return VAR_0;
    }

    FUNC_6(VAR_1, VAR_4->connection->log, 0,
                   "secure link: \"%V\"", &VAR_9);

    VAR_8 = VAR_9.data + VAR_9.len;

    VAR_7 = FUNC_12(VAR_9.data, VAR_8, ',');
    VAR_11 = 0;

    if (VAR_7) {
        VAR_9.len = VAR_7++ - VAR_9.data;

        VAR_11 = FUNC_0(VAR_7, VAR_8 - VAR_7);
        if (VAR_11 <= 0) {
            goto not_found;
        }

        VAR_13 = FUNC_11(VAR_4->pool, sizeof(ngx_http_secure_link_ctx_t));
        if (VAR_13 == ((void*)0)) {
            return VAR_0;
        }

        FUNC_5(VAR_4, VAR_13, VAR_3);

        VAR_13->expires.len = VAR_8 - VAR_7;
        VAR_13->expires.data = VAR_7;
    }

    if (VAR_9.len > 24) {
        goto not_found;
    }

    VAR_10.data = VAR_15;

    if (FUNC_1(&VAR_10, &VAR_9) != VAR_2) {
        goto not_found;
    }

    if (VAR_10.len != 16) {
        goto not_found;
    }

    if (FUNC_2(VAR_4, VAR_14->md5, &VAR_9) != VAR_2) {
        return VAR_0;
    }

    FUNC_6(VAR_1, VAR_4->connection->log, 0,
                   "secure link md5: \"%V\"", &VAR_9);

    FUNC_8(&VAR_12);
    FUNC_9(&VAR_12, VAR_9.data, VAR_9.len);
    FUNC_7(VAR_16, &VAR_12);

    if (FUNC_10(VAR_15, VAR_16, 16) != 0) {
        goto not_found;
    }

    VAR_5->data = (u_char *) ((VAR_11 && VAR_11 < FUNC_13()) ? "0" : "1");
    VAR_5->len = 1;
    VAR_5->valid = 1;
    VAR_5->no_cacheable = 0;
    VAR_5->not_found = 0;

    return VAR_2;

not_found:

    VAR_5->not_found = 1;

    return VAR_2;
}
