
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; scalar_t__ size; scalar_t__ data; scalar_t__ sentinel; scalar_t__ head; scalar_t__ tail; } ;
typedef TYPE_1__ ngx_http_lua_log_ringbuf_t ;



void
FUNC_0(ngx_http_lua_log_ringbuf_t *VAR_0)
{
    VAR_0->tail = VAR_0->data;
    VAR_0->head = VAR_0->data;
    VAR_0->sentinel = VAR_0->data + VAR_0->size;
    VAR_0->count = 0;

    return;
}
