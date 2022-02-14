
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_pool_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {TYPE_3__* aio; int log; int fd; } ;
typedef TYPE_2__ ngx_file_t ;
struct TYPE_6__ {int ready; int log; TYPE_3__* data; } ;
struct TYPE_8__ {TYPE_1__ event; int fd; TYPE_2__* file; } ;
typedef TYPE_3__ ngx_event_aio_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int *,int) ;

ngx_int_t
FUNC_1(ngx_file_t *VAR_2, ngx_pool_t *VAR_3)
{
    ngx_event_aio_t *VAR_4;

    VAR_4 = FUNC_0(VAR_3, sizeof(ngx_event_aio_t));
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4->file = VAR_2;
    VAR_4->fd = VAR_2->fd;
    VAR_4->event.data = VAR_4;
    VAR_4->event.ready = 1;
    VAR_4->event.log = VAR_2->log;

    VAR_2->aio = VAR_4;

    return VAR_1;
}
