
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* d_servers; int down_servers; int number; TYPE_5__* tree; TYPE_4__*** real_node; } ;
typedef TYPE_3__ ngx_http_upstream_chash_srv_conf_t ;
struct TYPE_11__ {size_t rnindex; int down; size_t index; TYPE_1__* peer; } ;
typedef TYPE_4__ ngx_http_upstream_chash_server_t ;
struct TYPE_12__ {int (* del ) (TYPE_5__*,int,int,int ,size_t) ;} ;
struct TYPE_9__ {int queue; scalar_t__ timeout; } ;
struct TYPE_8__ {scalar_t__ fail_timeout; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_5__*,int,int,int ,size_t) ;

__attribute__((used)) static void
FUNC_3(ngx_http_upstream_chash_srv_conf_t *VAR_0,
    ngx_http_upstream_chash_server_t *VAR_1)
{
    ngx_http_upstream_chash_server_t **VAR_2, *VAR_3;
    VAR_2 = VAR_0->real_node[VAR_1->rnindex];

    for (; *VAR_2; VAR_2++) {
        VAR_3 = *VAR_2;
        if (!VAR_3->down) {
            VAR_0->tree->del(VAR_0->tree, 1, 1, VAR_0->number, VAR_3->index);
            VAR_3->down = 1;
            VAR_0->d_servers[VAR_3->index].timeout = FUNC_1()
                                               + VAR_3->peer->fail_timeout;
            FUNC_0(&VAR_0->down_servers,
                                  &VAR_0->d_servers[VAR_3->index].queue);
        }
    }
}
