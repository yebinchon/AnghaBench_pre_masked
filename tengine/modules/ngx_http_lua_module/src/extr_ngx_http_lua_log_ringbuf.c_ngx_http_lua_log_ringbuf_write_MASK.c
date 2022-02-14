
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_6__ {size_t size; size_t data; size_t tail; scalar_t__ head; scalar_t__ sentinel; scalar_t__ count; } ;
typedef TYPE_1__ ngx_http_lua_log_ringbuf_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,void*,size_t) ;
 size_t FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

ngx_int_t
FUNC_3(ngx_http_lua_log_ringbuf_t *VAR_3, int VAR_4,
    void *VAR_5, size_t VAR_6)
{
    if (VAR_6 + VAR_0 > VAR_3->size) {
        return VAR_1;
    }

    if (FUNC_1(VAR_3) < VAR_6 + VAR_0) {

        if ((size_t)(VAR_3->data + VAR_3->size - VAR_3->tail) < VAR_6 + VAR_0) {

            while (VAR_3->head >= VAR_3->tail && VAR_3->count) {


                FUNC_2(VAR_3);
            }

            VAR_3->sentinel = VAR_3->tail;
            VAR_3->tail = VAR_3->data;
        }

        while (FUNC_1(VAR_3) < VAR_6 + VAR_0) {
            FUNC_2(VAR_3);
        }
    }

    FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);

    return VAR_2;
}
