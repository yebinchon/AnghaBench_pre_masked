
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef int * off_t ;
typedef int ngx_queue_t ;
struct TYPE_11__ {int cached; TYPE_5__* connection; int log; int socklen; scalar_t__ sockaddr; } ;
typedef TYPE_3__ ngx_peer_connection_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {int queue; int index; int socklen; int sockaddr; TYPE_5__* connection; } ;
typedef TYPE_4__ ngx_http_upstream_keepalive_cache_t ;
struct TYPE_13__ {TYPE_8__* read; TYPE_2__* pool; TYPE_1__* write; int log; scalar_t__ idle; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_14__ {scalar_t__ timer_set; int log; } ;
struct TYPE_10__ {int log; } ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_5__*) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_peer_connection_t *VAR_3,
    ngx_queue_t *VAR_4, ngx_queue_t *VAR_5, off_t VAR_6)
{
    ngx_queue_t *VAR_7;
    ngx_connection_t *VAR_8;

    ngx_http_upstream_keepalive_cache_t *VAR_9;

    for (VAR_7 = FUNC_3(VAR_4);
         VAR_7 != FUNC_7(VAR_4);
         VAR_7 = FUNC_5(VAR_7))
    {
        VAR_9 = (ngx_http_upstream_keepalive_cache_t *) ((u_char *) VAR_7 - VAR_6);
        VAR_8 = VAR_9->connection;

        if (FUNC_2((u_char *) &VAR_9->sockaddr, (u_char *) VAR_3->sockaddr,
                         VAR_9->socklen, VAR_3->socklen)
            == 0)
        {
            FUNC_6(&VAR_9->index);
            FUNC_6(&VAR_9->queue);
            FUNC_4(VAR_5, &VAR_9->queue);

            FUNC_1(VAR_1, VAR_3->log, 0,
                           "get keepalive peer: using connection %p", VAR_8);

            VAR_8->idle = 0;
            VAR_8->log = VAR_3->log;
            VAR_8->read->log = VAR_3->log;
            VAR_8->write->log = VAR_3->log;
            VAR_8->pool->log = VAR_3->log;

            if (VAR_8->read->timer_set) {
                FUNC_0(VAR_8->read);
            }

            VAR_3->connection = VAR_8;
            VAR_3->cached = 1;

            return VAR_0;
        }
    }

    return VAR_2;
}
