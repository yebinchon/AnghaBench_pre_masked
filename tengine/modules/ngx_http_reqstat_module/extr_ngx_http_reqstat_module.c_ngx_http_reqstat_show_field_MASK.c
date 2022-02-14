
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
typedef struct TYPE_12__ TYPE_11__ ;


typedef size_t ngx_uint_t ;
struct TYPE_16__ {char* data; scalar_t__ len; } ;
typedef TYPE_4__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_17__ {TYPE_2__* user_defined_str; int * user_select; } ;
typedef TYPE_5__ ngx_http_reqstat_conf_t ;
struct TYPE_18__ {int log; TYPE_1__* args; int pool; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_15__ {scalar_t__ len; char* data; } ;
struct TYPE_14__ {size_t nelts; TYPE_4__* elts; } ;
struct TYPE_13__ {int nelts; TYPE_4__* elts; } ;
struct TYPE_12__ {scalar_t__ index; TYPE_3__ name; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_11__* VAR_4 ;
 int * FUNC_0 (int ,int,int) ;
 int* FUNC_1 (int *,int) ;
 TYPE_5__* FUNC_2 (TYPE_6__*,int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (char*,char*,scalar_t__) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    ngx_int_t VAR_9, *VAR_10;
    ngx_str_t *VAR_11, *VAR_12;
    ngx_uint_t VAR_13, VAR_14;
    ngx_http_reqstat_conf_t *VAR_15, *VAR_16;

    VAR_16 = VAR_8;
    VAR_15 = FUNC_2(VAR_6, VAR_5);

    VAR_16->user_select = FUNC_0(VAR_6->pool, VAR_6->args->nelts - 1,
                                         sizeof(ngx_int_t));
    if (VAR_16->user_select == ((void*)0)) {
        return VAR_0;
    }

    VAR_10 = FUNC_1(VAR_16->user_select, VAR_6->args->nelts - 1);
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    VAR_11 = VAR_6->args->elts;
    for (VAR_13 = 1; VAR_13 < VAR_6->args->nelts; VAR_13++) {
        VAR_9 = 0;

        if (VAR_11[VAR_13].data[0] == '$') {
            VAR_11[VAR_13].data++;
            VAR_11[VAR_13].len--;

            if (VAR_15->user_defined_str) {

                VAR_12 = VAR_15->user_defined_str->elts;

                for (VAR_14 = 0; VAR_14 < VAR_15->user_defined_str->nelts; VAR_14++) {
                    if (VAR_11[VAR_13].len != VAR_12[VAR_14].len
                            || FUNC_4(VAR_11[VAR_13].data, VAR_12[VAR_14].data, VAR_11[VAR_13].len)
                            != 0)
                    {
                        continue;
                    }

                    *VAR_10++ = VAR_2 + VAR_14;
                    VAR_9 = 1;
                    break;
                }
            }

        } else {
            for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
                if (VAR_11[VAR_13].len != VAR_4[VAR_14].name.len
                    || FUNC_4(VAR_4[VAR_14].name.data,
                                   VAR_11[VAR_13].data, VAR_11[VAR_13].len) != 0)
                {
                    continue;
                }

                *VAR_10++ = VAR_4[VAR_14].index;
                VAR_9 = 1;
                break;
            }
        }

        if (!VAR_9) {
            FUNC_3(VAR_3, VAR_6->log, 0,
                          "field \"%V\" does not exist",
                          &VAR_11[VAR_13]);

            return VAR_0;
        }
    }

    return VAR_1;
}
