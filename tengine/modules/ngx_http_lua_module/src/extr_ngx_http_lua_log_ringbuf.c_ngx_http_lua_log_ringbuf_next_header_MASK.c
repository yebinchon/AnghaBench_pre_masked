
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; scalar_t__ head; scalar_t__ data; scalar_t__ sentinel; } ;
typedef TYPE_1__ ngx_http_lua_log_ringbuf_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void *
FUNC_0(ngx_http_lua_log_ringbuf_t *VAR_1)
{

    if (VAR_1->size - (VAR_1->head - VAR_1->data) < VAR_0)
    {
        return VAR_1->data;
    }


    if (VAR_1->head >= VAR_1->sentinel) {
        return VAR_1->data;
    }

    return VAR_1->head;
}
