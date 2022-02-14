
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_5__ {scalar_t__ tries; int log; } ;
typedef TYPE_1__ ngx_peer_connection_t ;
struct TYPE_6__ {int last_peer_state; scalar_t__ socklen; scalar_t__ sockaddr; } ;
typedef TYPE_2__ ngx_http_lua_balancer_peer_data_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,void*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__) ;

void
FUNC_2(ngx_peer_connection_t *VAR_1, void *VAR_2,
    ngx_uint_t VAR_3)
{
    ngx_http_lua_balancer_peer_data_t *VAR_4 = VAR_2;

    FUNC_1(VAR_0, VAR_1->log, 0,
                   "lua balancer free peer, tries: %ui", VAR_1->tries);

    if (VAR_4->sockaddr && VAR_4->socklen) {
        VAR_4->last_peer_state = (int) VAR_3;

        if (VAR_1->tries) {
            VAR_1->tries--;
        }

        return;
    }



    FUNC_0(VAR_1, VAR_2, VAR_3);
}
