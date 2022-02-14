
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_8__ {int log; } ;
typedef TYPE_3__ ngx_peer_connection_t ;
struct TYPE_9__ {TYPE_2__* server; } ;
typedef TYPE_4__ ngx_http_upstream_chash_peer_data_t ;
struct TYPE_7__ {TYPE_1__* peer; } ;
struct TYPE_6__ {int fails; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int) ;

__attribute__((used)) static void
FUNC_1(ngx_peer_connection_t *VAR_2, void *VAR_3,
    ngx_uint_t VAR_4)
{
    ngx_http_upstream_chash_peer_data_t *VAR_5 = VAR_3;
    FUNC_0(VAR_0, VAR_2->log, 0,
                  "consistent hash free  peer %ui", VAR_4);

    if (VAR_5->server == ((void*)0)) {
        return;
    }

    if (VAR_4 & VAR_1) {
        VAR_5->server->peer->fails++;
    }
}
