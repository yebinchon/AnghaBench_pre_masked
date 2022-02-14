
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_socket_t ;
struct TYPE_6__ {int log; TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_7__ {size_t connection_n; TYPE_3__* connections; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_8__ {scalar_t__ fd; int close; int error; TYPE_4__* read; int number; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_9__ {int (* handler ) (TYPE_4__*) ;scalar_t__ resolver; scalar_t__ channel; scalar_t__ accept; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_2(ngx_event_t *VAR_1)
{
    ngx_uint_t VAR_2;
    ngx_cycle_t *VAR_3;
    ngx_connection_t *VAR_4;

    VAR_3 = VAR_1->data;

    VAR_4 = VAR_3->connections;

    for (VAR_2 = 0; VAR_2 < VAR_3->connection_n; VAR_2++) {

        if (VAR_4[VAR_2].fd == (ngx_socket_t) -1
            || VAR_4[VAR_2].read == ((void*)0)
            || VAR_4[VAR_2].read->accept
            || VAR_4[VAR_2].read->channel
            || VAR_4[VAR_2].read->resolver)
        {
            continue;
        }

        FUNC_0(VAR_0, VAR_1->log, 0,
                       "*%uA shutdown timeout", VAR_4[VAR_2].number);

        VAR_4[VAR_2].close = 1;
        VAR_4[VAR_2].error = 1;

        VAR_4[VAR_2].read->handler(VAR_4[VAR_2].read);
    }
}
