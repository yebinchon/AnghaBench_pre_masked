
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_12__ {int len; int valid; char* data; scalar_t__ not_found; scalar_t__ no_cacheable; } ;
struct TYPE_13__ {TYPE_2__ value; scalar_t__ percent; } ;
typedef TYPE_3__ ngx_stream_split_clients_part_t ;
struct TYPE_14__ {int parts; } ;
typedef TYPE_4__ ngx_stream_split_clients_ctx_t ;
struct TYPE_15__ {int len; char* data; } ;
typedef TYPE_5__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_16__ {TYPE_1__* args; TYPE_4__* ctx; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_11__ {TYPE_5__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ,TYPE_6__*,int ,char*,TYPE_5__*) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_int_t VAR_7;
    ngx_str_t *VAR_8;
    ngx_stream_split_clients_ctx_t *VAR_9;
    ngx_stream_split_clients_part_t *VAR_10;

    VAR_9 = VAR_4->ctx;
    VAR_8 = VAR_4->args->elts;

    VAR_10 = FUNC_0(&VAR_9->parts);
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_8[0].len == 1 && VAR_8[0].data[0] == '*') {
        VAR_10->percent = 0;

    } else {
        if (VAR_8[0].len == 0 || VAR_8[0].data[VAR_8[0].len - 1] != '%') {
            goto invalid;
        }

        VAR_7 = FUNC_1(VAR_8[0].data, VAR_8[0].len - 1, 2);
        if (VAR_7 == VAR_2 || VAR_7 == 0) {
            goto invalid;
        }

        VAR_10->percent = (uint32_t) VAR_7;
    }

    VAR_10->value.len = VAR_8[1].len;
    VAR_10->value.valid = 1;
    VAR_10->value.no_cacheable = 0;
    VAR_10->value.not_found = 0;
    VAR_10->value.data = VAR_8[1].data;

    return VAR_1;

invalid:

    FUNC_2(VAR_3, VAR_4, 0,
                       "invalid percent value \"%V\"", &VAR_8[0]);
    return VAR_0;
}
