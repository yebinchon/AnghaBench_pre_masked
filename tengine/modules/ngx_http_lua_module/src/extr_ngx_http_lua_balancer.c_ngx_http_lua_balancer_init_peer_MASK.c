
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_upstream_srv_conf_t ;
struct TYPE_10__ {TYPE_2__* upstream; int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
typedef int ngx_http_lua_srv_conf_t ;
struct TYPE_11__ {TYPE_3__* request; int * conf; int rrp; } ;
typedef TYPE_4__ ngx_http_lua_balancer_peer_data_t ;
struct TYPE_8__ {int save_session; int set_session; int free; int get; int * data; } ;
struct TYPE_9__ {TYPE_1__ peer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *) ;
 TYPE_4__* FUNC_2 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_7,
    ngx_http_upstream_srv_conf_t *VAR_8)
{
    ngx_http_lua_srv_conf_t *VAR_9;
    ngx_http_lua_balancer_peer_data_t *VAR_10;

    VAR_10 = FUNC_2(VAR_7->pool, sizeof(ngx_http_lua_balancer_peer_data_t));
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7->upstream->peer.data = &VAR_10->rrp;

    if (FUNC_1(VAR_7, VAR_8) != VAR_1) {
        return VAR_0;
    }

    VAR_7->upstream->peer.get = VAR_3;
    VAR_7->upstream->peer.free = VAR_2;






    VAR_9 = FUNC_0(VAR_8, VAR_6);

    VAR_10->conf = VAR_9;
    VAR_10->request = VAR_7;

    return VAR_1;
}
