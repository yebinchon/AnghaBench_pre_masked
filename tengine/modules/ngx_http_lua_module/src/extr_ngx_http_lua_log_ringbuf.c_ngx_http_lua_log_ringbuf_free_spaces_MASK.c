
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; size_t size; scalar_t__ tail; scalar_t__ head; size_t data; } ;
typedef TYPE_1__ ngx_http_lua_log_ringbuf_t ;



__attribute__((used)) static size_t
FUNC_0(ngx_http_lua_log_ringbuf_t *VAR_0)
{
    if (VAR_0->count == 0) {
        return VAR_0->size;
    }

    if (VAR_0->tail > VAR_0->head) {
        return VAR_0->data + VAR_0->size - VAR_0->tail;
    }

    return VAR_0->head - VAR_0->tail;
}
