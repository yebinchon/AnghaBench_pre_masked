
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_upstream_vnswrr_srv_conf_t ;
struct TYPE_10__ {int rrp; int * uvnscf; } ;
typedef TYPE_3__ ngx_http_upstream_vnswrr_peer_data_t ;
typedef int ngx_http_upstream_srv_conf_t ;
struct TYPE_11__ {TYPE_1__* upstream; int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_9__ {int get; int * data; } ;
struct TYPE_8__ {TYPE_2__ peer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int *) ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_4,
    ngx_http_upstream_srv_conf_t *VAR_5)
{
    ngx_http_upstream_vnswrr_srv_conf_t *VAR_6;
    ngx_http_upstream_vnswrr_peer_data_t *VAR_7;

    VAR_6 = FUNC_0(VAR_5,
                                          VAR_3);

    VAR_7 = FUNC_2(VAR_4->pool, sizeof(ngx_http_upstream_vnswrr_peer_data_t));
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7->uvnscf = VAR_6;
    VAR_4->upstream->peer.data = &VAR_7->rrp;

    if (FUNC_1(VAR_4, VAR_5) != VAR_1) {
        return VAR_0;
    }

    VAR_4->upstream->peer.get = VAR_2;

    return VAR_1;
}
