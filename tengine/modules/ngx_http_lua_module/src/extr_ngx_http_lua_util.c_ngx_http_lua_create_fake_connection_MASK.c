
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ngx_socket_t ;
typedef int ngx_pool_t ;
struct TYPE_11__ {int * data; int * action; int connection; } ;
typedef TYPE_1__ ngx_log_t ;
struct TYPE_12__ {int error; TYPE_8__* buffer; int * pool; int log_error; TYPE_1__* log; int number; scalar_t__ fd; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_14__ {int * start; } ;
struct TYPE_13__ {TYPE_2__** files; int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,TYPE_2__*) ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int * FUNC_2 (int,TYPE_1__*) ;
 TYPE_8__* FUNC_3 (int *,int) ;
 TYPE_7__* VAR_4 ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_1__* FUNC_6 (int *,int) ;

ngx_connection_t *
FUNC_7(ngx_pool_t *VAR_5)
{
    ngx_log_t *VAR_6;
    ngx_connection_t *VAR_7;
    ngx_connection_t *VAR_8 = ((void*)0);


    if (VAR_4->files) {
        VAR_8 = VAR_4->files[0];
    }

    VAR_7 = FUNC_4(0, VAR_4->log);

    if (VAR_4->files) {
        VAR_4->files[0] = VAR_8;
    }

    if (VAR_7 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_7->fd = (ngx_socket_t) -1;
    VAR_7->number = FUNC_1(VAR_3, 1);

    if (VAR_5) {
        VAR_7->pool = VAR_5;

    } else {
        VAR_7->pool = FUNC_2(128, VAR_7->log);
        if (VAR_7->pool == ((void*)0)) {
            goto failed;
        }
    }

    VAR_6 = FUNC_6(VAR_7->pool, sizeof(ngx_log_t));
    if (VAR_6 == ((void*)0)) {
        goto failed;
    }

    VAR_7->log = VAR_6;
    VAR_7->log->connection = VAR_7->number;
    VAR_7->log->action = ((void*)0);
    VAR_7->log->data = ((void*)0);

    VAR_7->log_error = VAR_2;
    VAR_7->error = 1;

    FUNC_0("created fake connection: %p", VAR_7);

    return VAR_7;

failed:

    FUNC_5(VAR_7);
    return ((void*)0);
}
