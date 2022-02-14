
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_6__ {scalar_t__ count; void* head; void* sentinel; } ;
typedef TYPE_1__ ngx_http_lua_log_ringbuf_t ;
struct TYPE_7__ {int log_level; size_t len; double time; } ;
typedef TYPE_2__ ngx_http_lua_log_ringbuf_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

ngx_int_t
FUNC_2(ngx_http_lua_log_ringbuf_t *VAR_3, int *VAR_4,
    void **VAR_5, size_t *VAR_6, double *VAR_7)
{
    ngx_http_lua_log_ringbuf_header_t *VAR_8;

    if (VAR_3->count == 0) {
        return VAR_1;
    }

    VAR_8 = (ngx_http_lua_log_ringbuf_header_t *) VAR_3->head;

    if (VAR_3->head >= VAR_3->sentinel) {
        return VAR_1;
    }

    *VAR_4 = VAR_8->log_level;
    *VAR_6 = VAR_8->len;
    VAR_3->head += VAR_0;
    *VAR_5 = VAR_3->head;
    VAR_3->head += VAR_8->len;

    if (VAR_7) {
        *VAR_7 = VAR_8->time;
    }

    VAR_3->count--;

    if (VAR_3->count == 0) {
        FUNC_1(VAR_3);
    }

    VAR_3->head = FUNC_0(VAR_3);

    return VAR_2;
}
