
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ handler; int * data; struct TYPE_11__* next; } ;
typedef TYPE_1__ ngx_pool_cleanup_t ;
struct TYPE_12__ {TYPE_4__* connection; } ;
typedef TYPE_2__ ngx_peer_connection_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_13__ {int * connection; } ;
typedef TYPE_3__ ngx_http_dubbo_ctx_t ;
typedef int ngx_dubbo_connection_t ;
struct TYPE_14__ {int log; TYPE_6__* pool; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_15__ {TYPE_1__* cleanup; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,TYPE_4__*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_4__*,int *) ;
 TYPE_1__* FUNC_2 (TYPE_6__*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_5,
        ngx_http_dubbo_ctx_t *VAR_6, ngx_peer_connection_t *VAR_7)
{
    ngx_connection_t *VAR_8;
    ngx_pool_cleanup_t *VAR_9;

    VAR_8 = VAR_7->connection;

    for (VAR_9 = VAR_8->pool->cleanup; VAR_9; VAR_9 = VAR_9->next) {
        if (VAR_9->handler == VAR_3) {
            VAR_6->connection = VAR_9->data;
            break;
        }
    }

    if (VAR_6->connection == ((void*)0)) {
        VAR_9 = FUNC_2(VAR_8->pool, sizeof(ngx_dubbo_connection_t));
        if (VAR_9 == ((void*)0)) {
            return VAR_0;
        }

        VAR_9->handler = VAR_3;
        VAR_6->connection = VAR_9->data;

        if(VAR_2 != FUNC_0(VAR_6->connection, VAR_8, VAR_4)) {
            return VAR_0;
        }

        FUNC_1(VAR_1, VAR_8->log, 0,
                      "dubbo: pc %p create dubbo connection %p", VAR_8, VAR_6->connection);
    }

    return VAR_2;
}
