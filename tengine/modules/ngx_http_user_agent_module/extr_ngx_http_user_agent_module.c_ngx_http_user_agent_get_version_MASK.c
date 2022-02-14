
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t ngx_uint_t ;
struct TYPE_9__ {size_t len; char* data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_http_variable_value_t ;
struct TYPE_10__ {int left; int right; int * var; } ;
typedef TYPE_2__ ngx_http_user_agent_interval_t ;
struct TYPE_11__ {int pool; } ;
typedef TYPE_3__ ngx_conf_t ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,TYPE_3__*,int ,char*) ;
 TYPE_2__* FUNC_1 (int ,int) ;
 int * FUNC_2 (int ,int) ;

__attribute__((used)) static ngx_http_user_agent_interval_t *
FUNC_3(ngx_conf_t *VAR_8, ngx_str_t *VAR_9)
{
    char VAR_10;
    uint64_t VAR_11, VAR_12, VAR_13;
    ngx_uint_t VAR_14, VAR_15;
    ngx_http_user_agent_interval_t *VAR_16;

    VAR_10 = VAR_0;
    VAR_12 = VAR_4;
    VAR_13 = 0;
    VAR_11 = 0;
    VAR_15 = 0;

    VAR_16 = FUNC_1(VAR_8->pool, sizeof(ngx_http_user_agent_interval_t));
    if(VAR_16 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_16->var = FUNC_2(VAR_8->pool, sizeof(ngx_http_variable_value_t));
    if (VAR_16->var == ((void*)0)) {
        return ((void*)0);
    }

    VAR_16->left = VAR_6;
    VAR_16->right = VAR_5;

    for (VAR_14 = 0; VAR_14 < VAR_9->len; VAR_14++) {
        if (VAR_9->data[VAR_14] >= '0' && VAR_9->data[VAR_14] <= '9') {
            VAR_11 = VAR_11 * 10 + VAR_9->data[VAR_14] - '0';
            continue;
        }

        if (VAR_9->data[VAR_14] == '.') {
            VAR_13 += VAR_11 * VAR_12;
            VAR_11 = 0;
            VAR_12 /= 10000;

        } else if (VAR_9->data[VAR_14] == VAR_3) {
            if (VAR_14 != VAR_9->len - 1) {
                goto error;
            }

            VAR_10 = VAR_3;
        } else if (VAR_9->data[VAR_14] == VAR_0) {
            if (VAR_14 != VAR_9->len - 1) {
                goto error;
            }
        } else if (VAR_9->data[VAR_14] == VAR_1) {
            if (VAR_14 != VAR_9->len - 1) {
                goto error;
            }

            VAR_10 = VAR_1;
        } else if (VAR_9->data[VAR_14] == VAR_2) {
            VAR_10 = VAR_2;
            if (VAR_15 >= 2) {
                FUNC_0(VAR_7, VAR_8, 0, "too many versions");
                return ((void*)0);
            }

            VAR_13 += VAR_11 * VAR_12;
            VAR_16->left = VAR_13;
            VAR_15++;

            VAR_11 = 0;
            VAR_12 = VAR_4;
            VAR_13 = 0;

            if (VAR_14 + 1 >= VAR_9->len) {
                goto error;
            }

            if (!(VAR_9->data[VAR_14 + 1] >= '0'&&VAR_9->data[VAR_14 + 1] <= '9')) {
                goto error;
            }
        } else {
            goto error;
        }
    }

    VAR_13 += VAR_11 * VAR_12;
    if (VAR_10 == VAR_3 || VAR_10 == VAR_2) {
        VAR_16->right = VAR_13;

    } else if (VAR_10 == VAR_1) {
        VAR_16->left = VAR_13;

    } else if (VAR_10 == VAR_0) {
        VAR_16->left = VAR_13;
        VAR_16->right = VAR_13;
    }

    return VAR_16;

error:
    FUNC_0(VAR_7, VAR_8, 0, "invalid version");
    return ((void*)0);
}
