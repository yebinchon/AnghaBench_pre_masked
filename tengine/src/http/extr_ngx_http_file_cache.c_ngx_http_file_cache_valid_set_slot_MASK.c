
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int ngx_uint_t ;
struct TYPE_13__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_14__ {int status; scalar_t__ valid; } ;
typedef TYPE_3__ ngx_http_cache_valid_t ;
struct TYPE_15__ {TYPE_1__* args; int pool; } ;
typedef TYPE_4__ ngx_conf_t ;
struct TYPE_16__ {int offset; } ;
typedef TYPE_5__ ngx_command_t ;
typedef int ngx_array_t ;
struct TYPE_12__ {int nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_4__*,int ,char*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (int ,char*) ;

char *
FUNC_6(ngx_conf_t *VAR_5, ngx_command_t *VAR_6,
    void *VAR_7)
{
    char *VAR_8 = VAR_7;

    time_t VAR_9;
    ngx_str_t *VAR_10;
    ngx_int_t VAR_11;
    ngx_uint_t VAR_12, VAR_13;
    ngx_array_t **VAR_14;
    ngx_http_cache_valid_t *VAR_15;
    static ngx_uint_t VAR_16[] = { 200, 301, 302 };

    VAR_14 = (ngx_array_t **) (VAR_8 + VAR_6->offset);

    if (*VAR_14 == VAR_2) {
        *VAR_14 = FUNC_0(VAR_5->pool, 1, sizeof(ngx_http_cache_valid_t));
        if (*VAR_14 == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_10 = VAR_5->args->elts;
    VAR_13 = VAR_5->args->nelts - 1;

    VAR_9 = FUNC_4(&VAR_10[VAR_13], 1);
    if (VAR_9 == (time_t) VAR_3) {
        FUNC_3(VAR_4, VAR_5, 0,
                           "invalid time value \"%V\"", &VAR_10[VAR_13]);
        return VAR_0;
    }

    if (VAR_13 == 1) {

        for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
            VAR_15 = FUNC_1(*VAR_14);
            if (VAR_15 == ((void*)0)) {
                return VAR_0;
            }

            VAR_15->status = VAR_16[VAR_12];
            VAR_15->valid = VAR_9;
        }

        return VAR_1;
    }

    for (VAR_12 = 1; VAR_12 < VAR_13; VAR_12++) {

        if (FUNC_5(VAR_10[VAR_12].data, "any") == 0) {

            VAR_11 = 0;

        } else {

            VAR_11 = FUNC_2(VAR_10[VAR_12].data, VAR_10[VAR_12].len);
            if (VAR_11 < 100 || VAR_11 > 599) {
                FUNC_3(VAR_4, VAR_5, 0,
                                   "invalid status \"%V\"", &VAR_10[VAR_12]);
                return VAR_0;
            }
        }

        VAR_15 = FUNC_1(*VAR_14);
        if (VAR_15 == ((void*)0)) {
            return VAR_0;
        }

        VAR_15->status = VAR_11;
        VAR_15->valid = VAR_9;
    }

    return VAR_1;
}
