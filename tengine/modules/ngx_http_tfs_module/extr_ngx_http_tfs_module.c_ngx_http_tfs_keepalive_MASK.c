
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_10__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {int * conn_pool; } ;
typedef TYPE_3__ ngx_http_tfs_main_conf_t ;
typedef int ngx_http_connection_pool_t ;
struct TYPE_12__ {int pool; TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
struct TYPE_13__ {int name; } ;
typedef TYPE_5__ ngx_command_t ;
struct TYPE_9__ {size_t nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,TYPE_4__*,int ,char*,...) ;
 int * FUNC_2 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,int) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_http_tfs_main_conf_t *VAR_7 = VAR_6;

    ngx_int_t VAR_8, VAR_9;
    ngx_str_t *VAR_10, VAR_11;
    ngx_uint_t VAR_12;
    ngx_http_connection_pool_t *VAR_13;

    VAR_10 = VAR_4->args->elts;
    VAR_8 = 0;
    VAR_9 = 0;

    for (VAR_12 = 1; VAR_12 < VAR_4->args->nelts; VAR_12++) {
        if (FUNC_3(VAR_10[VAR_12].data, "max_cached=", 11) == 0) {

            VAR_11.len = VAR_10[VAR_12].len - 11;
            VAR_11.data = VAR_10[VAR_12].data + 11;

            VAR_8 = FUNC_0(VAR_11.data, VAR_11.len);

            if (VAR_8 == VAR_2 || VAR_8 == 0) {
                goto invalid;
            }
            continue;
        }

        if (FUNC_3(VAR_10[VAR_12].data, "bucket_count=", 13) == 0) {

            VAR_11.len = VAR_10[VAR_12].len - 13;
            VAR_11.data = VAR_10[VAR_12].data + 13;

            VAR_9 = FUNC_0(VAR_11.data, VAR_11.len);
            if (VAR_9 == VAR_2 || VAR_9 == 0) {
                goto invalid;
            }
            continue;
        }

        FUNC_1(VAR_3, VAR_4, 0,
                           "invalid parameter \"%V\"", &VAR_10[VAR_12]);
        return VAR_0;
    }

    VAR_13 = FUNC_2(VAR_4->pool, VAR_8, VAR_9);
    if (VAR_13 == ((void*)0)) {
        FUNC_1(VAR_3, VAR_4, 0, "connection pool init failed");
        return VAR_0;
    }

    VAR_7->conn_pool = VAR_13;
    return VAR_1;

invalid:
    FUNC_1(VAR_3, VAR_4, 0,
                       "invalid value \"%V\" in \"%V\" directive",
                       &VAR_10[VAR_12], &VAR_5->name);
    return VAR_0;
}
