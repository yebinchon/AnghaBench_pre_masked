
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ count; scalar_t__ head; } ;
typedef TYPE_1__ ngx_http_lua_log_ringbuf_t ;
struct TYPE_7__ {scalar_t__ len; } ;
typedef TYPE_2__ ngx_http_lua_log_ringbuf_header_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(ngx_http_lua_log_ringbuf_t *VAR_1)
{
    ngx_http_lua_log_ringbuf_header_t *VAR_2;

    if (VAR_1->count == 0) {
        return;
    }

    VAR_2 = (ngx_http_lua_log_ringbuf_header_t *) VAR_1->head;

    VAR_1->head += VAR_0 + VAR_2->len;
    VAR_1->count--;

    if (VAR_1->count == 0) {
        FUNC_1(VAR_1);
    }

    VAR_1->head = FUNC_0(VAR_1);

    return;
}
