
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_2__ sin_addr; } ;
struct TYPE_11__ {scalar_t__ rc_servers_count; scalar_t__ rcserver_index; int * rc_servers; TYPE_1__* ups_addr; } ;
typedef TYPE_4__ ngx_http_tfs_upstream_t ;
struct TYPE_12__ {TYPE_3__* loc_conf; } ;
typedef TYPE_5__ ngx_http_tfs_t ;
struct TYPE_13__ {int port; int ip; } ;
typedef TYPE_6__ ngx_http_tfs_inet_t ;
struct TYPE_10__ {TYPE_4__* upstream; } ;
struct TYPE_8__ {scalar_t__ sockaddr; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(ngx_http_tfs_t *VAR_0)
{
    struct sockaddr_in *VAR_1;
    ngx_http_tfs_inet_t *VAR_2;
    ngx_http_tfs_upstream_t *VAR_3;

    VAR_3 = VAR_0->loc_conf->upstream;

    if (VAR_3->rc_servers_count == 0) {
        return;
    }

    if (++VAR_3->rcserver_index >= VAR_3->rc_servers_count) {
        VAR_3->rcserver_index = 0;
    }

    VAR_1 = (struct sockaddr_in *)VAR_3->ups_addr->sockaddr;
    VAR_2 = (ngx_http_tfs_inet_t*)&VAR_3->rc_servers[VAR_3->rcserver_index];
    VAR_1->sin_addr.s_addr = VAR_2->ip;
    VAR_1->sin_port = FUNC_0(VAR_2->port);
}
