
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {long double msec; scalar_t__ sec; } ;
typedef TYPE_1__ ngx_time_t ;
struct TYPE_7__ {scalar_t__ tail; scalar_t__ sentinel; int count; } ;
typedef TYPE_2__ ngx_http_lua_log_ringbuf_t ;
struct TYPE_8__ {int len; int log_level; scalar_t__ time; } ;
typedef TYPE_3__ ngx_http_lua_log_ringbuf_header_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,void*,int) ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(ngx_http_lua_log_ringbuf_t *VAR_1,
    int VAR_2, void *VAR_3, int VAR_4)
{
    ngx_http_lua_log_ringbuf_header_t *VAR_5;
    ngx_time_t *VAR_6;

    VAR_5 = (ngx_http_lua_log_ringbuf_header_t *) VAR_1->tail;
    VAR_5->len = VAR_4;
    VAR_5->log_level = VAR_2;

    VAR_6 = FUNC_1();
    VAR_5->time = VAR_6->sec + VAR_6->msec / 1000.0L;

    VAR_1->tail += VAR_0;
    FUNC_0(VAR_1->tail, VAR_3, VAR_4);
    VAR_1->tail += VAR_4;
    VAR_1->count++;

    if (VAR_1->tail > VAR_1->sentinel) {
        VAR_1->sentinel = VAR_1->tail;
    }

    return;
}
