
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_16__ {size_t len; int * data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef scalar_t__ (* ngx_http_script_len_code_pt ) (TYPE_4__*) ;
struct TYPE_17__ {int flushed; int * pos; void* ip; TYPE_7__* request; } ;
typedef TYPE_4__ ngx_http_script_engine_t ;
typedef int (* ngx_http_script_code_pt ) (TYPE_4__*) ;
struct TYPE_18__ {int pool; TYPE_2__* variables; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_14__ {size_t nelts; } ;
struct TYPE_19__ {TYPE_1__ variables; } ;
typedef TYPE_8__ ngx_http_core_main_conf_t ;
struct TYPE_15__ {scalar_t__ not_found; scalar_t__ valid; scalar_t__ no_cacheable; } ;


 int VAR_0 ;
 TYPE_8__* FUNC_0 (TYPE_7__*,int ) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int * FUNC_2 (int ,size_t) ;

u_char *
FUNC_3(ngx_http_request_t *VAR_1, ngx_str_t *VAR_2,
    void *VAR_3, size_t VAR_4, void *VAR_5)
{
    ngx_uint_t VAR_6;
    ngx_http_script_code_pt VAR_7;
    ngx_http_script_len_code_pt VAR_8;
    ngx_http_script_engine_t VAR_9;
    ngx_http_core_main_conf_t *VAR_10;

    VAR_10 = FUNC_0(VAR_1, VAR_0);

    for (VAR_6 = 0; VAR_6 < VAR_10->variables.nelts; VAR_6++) {
        if (VAR_1->variables[VAR_6].no_cacheable) {
            VAR_1->variables[VAR_6].valid = 0;
            VAR_1->variables[VAR_6].not_found = 0;
        }
    }

    FUNC_1(&VAR_9, sizeof(ngx_http_script_engine_t));

    VAR_9.ip = VAR_3;
    VAR_9.request = VAR_1;
    VAR_9.flushed = 1;

    while (*(uintptr_t *) VAR_9.ip) {
        VAR_8 = *(ngx_http_script_len_code_pt *) VAR_9.ip;
        VAR_4 += VAR_8(&VAR_9);
    }


    VAR_2->len = VAR_4;
    VAR_2->data = FUNC_2(VAR_1->pool, VAR_4);
    if (VAR_2->data == ((void*)0)) {
        return ((void*)0);
    }

    VAR_9.ip = VAR_5;
    VAR_9.pos = VAR_2->data;

    while (*(uintptr_t *) VAR_9.ip) {
        VAR_7 = *(ngx_http_script_code_pt *) VAR_9.ip;
        VAR_7((ngx_http_script_engine_t *) &VAR_9);
    }

    return VAR_9.pos;
}
