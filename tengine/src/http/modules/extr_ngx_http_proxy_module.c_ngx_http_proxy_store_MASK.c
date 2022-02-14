
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


struct TYPE_13__ {int len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_14__ {int complete_lengths; int complete_values; int variables; int * values; int * lengths; TYPE_3__* source; TYPE_6__* cf; } ;
typedef TYPE_4__ ngx_http_script_compile_t ;
struct TYPE_12__ {int store; scalar_t__ cache; int store_values; int store_lengths; } ;
struct TYPE_15__ {TYPE_2__ upstream; } ;
typedef TYPE_5__ ngx_http_proxy_loc_conf_t ;
struct TYPE_16__ {TYPE_1__* args; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_11__ {TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,int) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_http_proxy_loc_conf_t *VAR_7 = VAR_6;

    ngx_str_t *VAR_8;
    ngx_http_script_compile_t VAR_9;

    if (VAR_7->upstream.store != VAR_2) {
        return "is duplicate";
    }

    VAR_8 = VAR_4->args->elts;

    if (FUNC_3(VAR_8[1].data, "off") == 0) {
        VAR_7->upstream.store = 0;
        return VAR_1;
    }







    VAR_7->upstream.store = 1;

    if (FUNC_3(VAR_8[1].data, "on") == 0) {
        return VAR_1;
    }


    VAR_8[1].len++;

    FUNC_2(&VAR_9, sizeof(ngx_http_script_compile_t));

    VAR_9.cf = VAR_4;
    VAR_9.source = &VAR_8[1];
    VAR_9.lengths = &VAR_7->upstream.store_lengths;
    VAR_9.values = &VAR_7->upstream.store_values;
    VAR_9.variables = FUNC_1(&VAR_8[1]);
    VAR_9.complete_lengths = 1;
    VAR_9.complete_values = 1;

    if (FUNC_0(&VAR_9) != VAR_3) {
        return VAR_0;
    }

    return VAR_1;
}
