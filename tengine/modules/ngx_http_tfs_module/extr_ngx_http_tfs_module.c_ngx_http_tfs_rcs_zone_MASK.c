
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef size_t ngx_uint_t ;
struct TYPE_14__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_15__ {int * data; int init; } ;
typedef TYPE_3__ ngx_shm_zone_t ;
struct TYPE_16__ {TYPE_2__ rcs_zone_name; int * rc_ctx; } ;
typedef TYPE_4__ ngx_http_tfs_upstream_t ;
typedef int ngx_http_tfs_rc_ctx_t ;
struct TYPE_17__ {int pool; TYPE_1__* args; } ;
typedef TYPE_5__ ngx_conf_t ;
struct TYPE_13__ {int nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_5__*,int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int ,int) ;
 TYPE_3__* FUNC_3 (TYPE_5__*,TYPE_2__*,scalar_t__,int *) ;
 scalar_t__ FUNC_4 (scalar_t__,char*,int) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_7, ngx_http_tfs_upstream_t *VAR_8)
{
    ssize_t VAR_9;
    ngx_str_t *VAR_10, VAR_11, VAR_12;
    ngx_uint_t VAR_13;
    ngx_shm_zone_t *VAR_14;
    ngx_http_tfs_rc_ctx_t *VAR_15;

    VAR_10 = VAR_7->args->elts;
    VAR_9 = 0;
    VAR_12.len = 0;

    if (VAR_7->args->nelts != 3) {
        FUNC_0(VAR_3, VAR_7, 0,
                           "invalid number of arguments in "
                           "\"rcs_zone\" directive");
        return VAR_0;
    }

    for (VAR_13 = 1; VAR_13 < VAR_7->args->nelts; VAR_13++) {

        if (FUNC_4(VAR_10[VAR_13].data, "size=", 5) == 0) {
            VAR_11.len = VAR_10[VAR_13].len - 5;
            VAR_11.data = VAR_10[VAR_13].data + 5;

            VAR_9 = FUNC_1(&VAR_11);

            if (VAR_9 == VAR_2) {
                FUNC_0(VAR_3, VAR_7, 0,
                                   "invalid zone size \"%V\"", &VAR_10[VAR_13]);
                return VAR_0;
            }

            if (VAR_9 < (ssize_t) (8 * VAR_6)) {
                FUNC_0(VAR_3, VAR_7, 0,
                                   "zone \"%V\" is too small", &VAR_10[VAR_13]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_4(VAR_10[VAR_13].data, "name=", 5) == 0) {
            VAR_12.len = VAR_10[VAR_13].len - 5;
            VAR_12.data = VAR_10[VAR_13].data + 5;

            continue;
        }

        FUNC_0(VAR_3, VAR_7, 0,
                           "invalid parameter \"%V\"", &VAR_10[VAR_13]);
        return VAR_0;
    }


    if (VAR_9 == 0) {
        FUNC_0(VAR_3, VAR_7, 0,
                           "\"rcs_zone\" must have \"size\" parameter");
        return VAR_0;
    }

    if (VAR_12.len == 0) {
        FUNC_0(VAR_3, VAR_7, 0,
                           "\"rcs_zone\" must have  \"name\" parameter");
        return VAR_0;
    }

    VAR_15 = FUNC_2(VAR_7->pool, sizeof(ngx_http_tfs_rc_ctx_t));
    if (VAR_15 == ((void*)0)) {
        return VAR_0;
    }

    VAR_14 = FUNC_3(VAR_7, &VAR_12, VAR_9,
                                     &VAR_4);
    if (VAR_14 == ((void*)0)) {
        return VAR_0;
    }

    VAR_14->init = VAR_5;
    VAR_14->data = VAR_15;

    VAR_8->rc_ctx = VAR_15;
    VAR_8->rcs_zone_name = VAR_12;

    return VAR_1;
}
