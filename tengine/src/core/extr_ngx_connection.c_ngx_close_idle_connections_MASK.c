
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_socket_t ;
struct TYPE_5__ {size_t connection_n; TYPE_2__* connections; } ;
typedef TYPE_1__ ngx_cycle_t ;
struct TYPE_6__ {scalar_t__ fd; int close; TYPE_3__* read; scalar_t__ idle; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_7__ {int (* handler ) (TYPE_3__*) ;} ;


 int FUNC_0 (TYPE_3__*) ;

void
FUNC_1(ngx_cycle_t *VAR_0)
{
    ngx_uint_t VAR_1;
    ngx_connection_t *VAR_2;

    VAR_2 = VAR_0->connections;

    for (VAR_1 = 0; VAR_1 < VAR_0->connection_n; VAR_1++) {



        if (VAR_2[VAR_1].fd != (ngx_socket_t) -1 && VAR_2[VAR_1].idle) {
            VAR_2[VAR_1].close = 1;
            VAR_2[VAR_1].read->handler(VAR_2[VAR_1].read);
        }
    }
}
