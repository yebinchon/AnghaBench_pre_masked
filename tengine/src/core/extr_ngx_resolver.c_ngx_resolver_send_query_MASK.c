
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct TYPE_12__ {TYPE_5__* elts; } ;
struct TYPE_14__ {TYPE_2__* log; TYPE_1__ connections; } ;
typedef TYPE_3__ ngx_resolver_t ;
struct TYPE_15__ {size_t last_connection; scalar_t__ naddrs; scalar_t__ naddrs6; int qlen; int query6; scalar_t__ tcp6; int query; scalar_t__ tcp; } ;
typedef TYPE_4__ ngx_resolver_node_t ;
struct TYPE_13__ {char* action; TYPE_5__* data; int * handler; } ;
struct TYPE_16__ {TYPE_2__ log; } ;
typedef TYPE_5__ ngx_resolver_connection_t ;
typedef scalar_t__ ngx_int_t ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_5__*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_5__*,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_resolver_t *VAR_2, ngx_resolver_node_t *VAR_3)
{
    ngx_int_t VAR_4;
    ngx_resolver_connection_t *VAR_5;

    VAR_5 = VAR_2->connections.elts;
    VAR_5 = &VAR_5[VAR_3->last_connection];

    if (VAR_5->log.handler == ((void*)0)) {
        VAR_5->log = *VAR_2->log;
        VAR_5->log.handler = VAR_1;
        VAR_5->log.data = VAR_5;
        VAR_5->log.action = "resolving";
    }

    if (VAR_3->naddrs == (u_short) -1) {
        VAR_4 = VAR_3->tcp ? FUNC_0(VAR_2, VAR_5, VAR_3->query, VAR_3->qlen)
                     : FUNC_1(VAR_2, VAR_5, VAR_3->query, VAR_3->qlen);

        if (VAR_4 != VAR_0) {
            return VAR_4;
        }
    }
    return VAR_0;
}
