
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_19__ {int len; char* data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_20__ {int no_referer; int blocked_referer; int server_names; TYPE_6__* keys; } ;
typedef TYPE_3__ ngx_http_referer_conf_t ;
typedef int ngx_hash_keys_arrays_t ;
struct TYPE_21__ {TYPE_1__* args; int pool; int temp_pool; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_22__ {int temp_pool; int pool; } ;
struct TYPE_18__ {size_t nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,TYPE_4__*,int ,char*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_6__*,TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_3__*,TYPE_2__*) ;
 TYPE_6__* FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static char *
FUNC_8(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    ngx_http_referer_conf_t *VAR_8 = VAR_7;

    u_char *VAR_9;
    ngx_str_t *VAR_10, VAR_11;
    ngx_uint_t VAR_12;

    if (VAR_8->keys == ((void*)0)) {
        VAR_8->keys = FUNC_4(VAR_5->temp_pool, sizeof(ngx_hash_keys_arrays_t));
        if (VAR_8->keys == ((void*)0)) {
            return VAR_0;
        }

        VAR_8->keys->pool = VAR_5->pool;
        VAR_8->keys->temp_pool = VAR_5->pool;

        if (FUNC_1(VAR_8->keys, VAR_2) != VAR_4) {
            return VAR_0;
        }
    }

    VAR_10 = VAR_5->args->elts;

    for (VAR_12 = 1; VAR_12 < VAR_5->args->nelts; VAR_12++) {
        if (VAR_10[VAR_12].len == 0) {
            FUNC_0(VAR_3, VAR_5, 0,
                               "invalid referer \"%V\"", &VAR_10[VAR_12]);
            return VAR_0;
        }

        if (FUNC_7(VAR_10[VAR_12].data, "none") == 0) {
            VAR_8->no_referer = 1;
            continue;
        }

        if (FUNC_7(VAR_10[VAR_12].data, "blocked") == 0) {
            VAR_8->blocked_referer = 1;
            continue;
        }

        if (FUNC_7(VAR_10[VAR_12].data, "server_names") == 0) {
            VAR_8->server_names = 1;
            continue;
        }

        if (VAR_10[VAR_12].data[0] == '~') {
            if (FUNC_3(VAR_5, VAR_8, &VAR_10[VAR_12]) != VAR_4) {
                return VAR_0;
            }

            continue;
        }

        FUNC_5(&VAR_11);

        VAR_9 = (u_char *) FUNC_6(VAR_10[VAR_12].data, '/');

        if (VAR_9) {
            VAR_11.len = (VAR_10[VAR_12].data + VAR_10[VAR_12].len) - VAR_9;
            VAR_11.data = VAR_9;
            VAR_10[VAR_12].len = VAR_9 - VAR_10[VAR_12].data;
        }

        if (FUNC_2(VAR_5, VAR_8->keys, &VAR_10[VAR_12], &VAR_11) != VAR_4) {
            return VAR_0;
        }
    }

    return VAR_1;
}
