
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_11__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_msec_t ;
struct TYPE_12__ {scalar_t__ rcs_interval; TYPE_2__ lock_file; } ;
typedef TYPE_3__ ngx_http_tfs_upstream_t ;
struct TYPE_13__ {int cycle; TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
struct TYPE_10__ {size_t nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (int ,TYPE_4__*,int ,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,int) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_7, ngx_http_tfs_upstream_t *VAR_8)
{
    ngx_str_t *VAR_9, VAR_10;
    ngx_msec_t VAR_11;
    ngx_uint_t VAR_12;

    VAR_9 = VAR_7->args->elts;

    for (VAR_12 = 1; VAR_12 < VAR_7->args->nelts; VAR_12++) {
        if (FUNC_3(VAR_9[VAR_12].data, "lock_file=", 10) == 0) {
            VAR_10.data = VAR_9[VAR_12].data + 10;
            VAR_10.len = VAR_9[VAR_12].len - 10;

            if (FUNC_0(VAR_7->cycle, &VAR_10, 0) != VAR_6) {
                goto rcs_timers_error;
            }

            VAR_8->lock_file = VAR_10;
            continue;
        }

        if (FUNC_3(VAR_9[VAR_12].data, "interval=", 9) == 0) {
            VAR_10.data = VAR_9[VAR_12].data + 9;
            VAR_10.len = VAR_9[VAR_12].len - 9;

            VAR_11 = FUNC_2(&VAR_10, 0);

            if (VAR_11 == (ngx_msec_t) VAR_2) {
                return "invalid value";
            }

            VAR_8->rcs_interval = VAR_11;
            continue;
        }

        goto rcs_timers_error;
    }

    if (VAR_8->lock_file.len == 0) {
        FUNC_1(VAR_4, VAR_7, 0,
                           "tfs_poll directive must have lock file");
        return VAR_0;
    }

    if (VAR_8->rcs_interval < VAR_3) {
        VAR_8->rcs_interval = VAR_3;
        FUNC_1(VAR_5, VAR_7, 0,
                           "tfs_poll interval is small, "
                           "so reset this value to 1000");
    }

    return VAR_1;

rcs_timers_error:
    FUNC_1(VAR_4, VAR_7, 0,
                       "invalid value \"%V\" in \"%V\" directive",
                       &VAR_9[VAR_12], &VAR_9[0]);
    return VAR_0;
}
