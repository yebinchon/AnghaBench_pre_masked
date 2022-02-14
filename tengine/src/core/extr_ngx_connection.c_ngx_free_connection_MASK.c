
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t fd; struct TYPE_4__* data; } ;
typedef TYPE_1__ ngx_connection_t ;
struct TYPE_5__ {TYPE_1__** files; int free_connection_n; TYPE_1__* free_connections; } ;


 TYPE_3__* VAR_0 ;

void
FUNC_0(ngx_connection_t *VAR_1)
{
    VAR_1->data = VAR_0->free_connections;
    VAR_0->free_connections = VAR_1;
    VAR_0->free_connection_n++;

    if (VAR_0->files && VAR_0->files[VAR_1->fd] == VAR_1) {
        VAR_0->files[VAR_1->fd] = ((void*)0);
    }
}
