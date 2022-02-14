
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_15__ {scalar_t__ status_alive; } ;
struct TYPE_14__ {int len; int data; } ;
struct TYPE_16__ {scalar_t__ check_type_conf; TYPE_4__ code; TYPE_3__ send; } ;
typedef TYPE_5__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_12__ {size_t nelts; TYPE_7__* elts; } ;
struct TYPE_17__ {TYPE_1__ peers; } ;
typedef TYPE_6__ ngx_http_upstream_check_peers_t ;
struct TYPE_18__ {TYPE_5__* conf; TYPE_2__* peer_addr; scalar_t__ delete; } ;
typedef TYPE_7__ ngx_http_upstream_check_peer_t ;
struct TYPE_19__ {int socklen; int sockaddr; } ;
typedef TYPE_8__ ngx_addr_t ;
struct TYPE_13__ {int sockaddr; int socklen; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static ngx_uint_t
FUNC_2(ngx_http_upstream_check_peers_t *VAR_1,
    ngx_addr_t *VAR_2, ngx_http_upstream_check_srv_conf_t *VAR_3)
{
    ngx_uint_t VAR_4;
    ngx_http_upstream_check_peer_t *VAR_5;
    ngx_http_upstream_check_srv_conf_t *VAR_6;

    VAR_5 = VAR_1->peers.elts;
    for (VAR_4 = 0; VAR_4 < VAR_1->peers.nelts; VAR_4++) {

        if (VAR_5[VAR_4].delete) {
            continue;
        }

        if (VAR_5[VAR_4].peer_addr->socklen != VAR_2->socklen) {
            continue;
        }

        if (FUNC_0(VAR_5[VAR_4].peer_addr->sockaddr,
                       VAR_2->sockaddr, VAR_2->socklen) != 0) {
            continue;
        }

        VAR_6 = VAR_5[VAR_4].conf;

        if (VAR_6->check_type_conf != VAR_3->check_type_conf) {
            continue;
        }

        if (VAR_6->send.len != VAR_3->send.len) {
            continue;
        }

        if (FUNC_1(VAR_6->send.data,
                        VAR_3->send.data, VAR_3->send.len) != 0) {
            continue;
        }

        if (VAR_6->code.status_alive != VAR_3->code.status_alive) {
            continue;
        }

        return VAR_4;
    }

    return VAR_0;
}
