
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int time_t ;
typedef size_t ngx_uint_t ;
struct TYPE_9__ {scalar_t__ data; scalar_t__ len; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {int * open_file_cache; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
struct TYPE_11__ {int pool; TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_8__ {size_t nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,TYPE_4__*,int ,char*,...) ;
 int * FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,char*,int) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    ngx_http_core_loc_conf_t *VAR_8 = VAR_7;

    time_t VAR_9;
    ngx_str_t *VAR_10, VAR_11;
    ngx_int_t VAR_12;
    ngx_uint_t VAR_13;

    if (VAR_8->open_file_cache != VAR_2) {
        return "is duplicate";
    }

    VAR_10 = VAR_5->args->elts;

    VAR_12 = 0;
    VAR_9 = 60;

    for (VAR_13 = 1; VAR_13 < VAR_5->args->nelts; VAR_13++) {

        if (FUNC_5(VAR_10[VAR_13].data, "max=", 4) == 0) {

            VAR_12 = FUNC_0(VAR_10[VAR_13].data + 4, VAR_10[VAR_13].len - 4);
            if (VAR_12 <= 0) {
                goto failed;
            }

            continue;
        }

        if (FUNC_5(VAR_10[VAR_13].data, "inactive=", 9) == 0) {

            VAR_11.len = VAR_10[VAR_13].len - 9;
            VAR_11.data = VAR_10[VAR_13].data + 9;

            VAR_9 = FUNC_3(&VAR_11, 1);
            if (VAR_9 == (time_t) VAR_3) {
                goto failed;
            }

            continue;
        }

        if (FUNC_4(VAR_10[VAR_13].data, "off") == 0) {

            VAR_8->open_file_cache = ((void*)0);

            continue;
        }

    failed:

        FUNC_1(VAR_4, VAR_5, 0,
                           "invalid \"open_file_cache\" parameter \"%V\"",
                           &VAR_10[VAR_13]);
        return VAR_0;
    }

    if (VAR_8->open_file_cache == ((void*)0)) {
        return VAR_1;
    }

    if (VAR_12 == 0) {
        FUNC_1(VAR_4, VAR_5, 0,
                        "\"open_file_cache\" must have the \"max\" parameter");
        return VAR_0;
    }

    VAR_8->open_file_cache = FUNC_2(VAR_5->pool, VAR_12, VAR_9);
    if (VAR_8->open_file_cache) {
        return VAR_1;
    }

    return VAR_0;
}
