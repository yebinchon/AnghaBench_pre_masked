
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; int filter_level; scalar_t__ count; void* data; void* sentinel; void* head; void* tail; } ;
typedef TYPE_1__ ngx_http_lua_log_ringbuf_t ;


 int VAR_0 ;

void
FUNC_0(ngx_http_lua_log_ringbuf_t *VAR_1, void *VAR_2,
    size_t VAR_3)
{
    VAR_1->data = VAR_2;
    VAR_1->size = VAR_3;

    VAR_1->tail = VAR_1->data;
    VAR_1->head = VAR_1->data;
    VAR_1->sentinel = VAR_1->data + VAR_1->size;
    VAR_1->count = 0;
    VAR_1->filter_level = VAR_0;

    return;
}
