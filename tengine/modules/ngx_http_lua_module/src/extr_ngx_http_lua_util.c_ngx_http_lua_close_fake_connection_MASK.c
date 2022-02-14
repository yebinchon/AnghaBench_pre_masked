
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ngx_socket_t ;
typedef int ngx_pool_t ;
struct TYPE_7__ {int destroyed; scalar_t__ fd; TYPE_5__* write; TYPE_5__* read; int * pool; int log; } ;
typedef TYPE_1__ ngx_connection_t ;
struct TYPE_9__ {TYPE_1__** files; } ;
struct TYPE_8__ {int closed; scalar_t__ timer_set; } ;


 int VAR_0 ;
 TYPE_6__* VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_1__*) ;

void
FUNC_4(ngx_connection_t *VAR_2)
{
    ngx_pool_t *VAR_3;
    ngx_connection_t *VAR_4 = ((void*)0);

    FUNC_3(VAR_0, VAR_2->log, 0,
                   "http lua close fake http connection %p", VAR_2);

    VAR_2->destroyed = 1;

    VAR_3 = VAR_2->pool;

    if (VAR_2->read->timer_set) {
        FUNC_0(VAR_2->read);
    }

    if (VAR_2->write->timer_set) {
        FUNC_0(VAR_2->write);
    }

    VAR_2->read->closed = 1;
    VAR_2->write->closed = 1;



    VAR_2->fd = 0;

    if (VAR_1->files) {
        VAR_4 = VAR_1->files[0];
    }

    FUNC_2(VAR_2);

    VAR_2->fd = (ngx_socket_t) -1;

    if (VAR_1->files) {
        VAR_1->files[0] = VAR_4;
    }

    if (VAR_3) {
        FUNC_1(VAR_3);
    }
}
