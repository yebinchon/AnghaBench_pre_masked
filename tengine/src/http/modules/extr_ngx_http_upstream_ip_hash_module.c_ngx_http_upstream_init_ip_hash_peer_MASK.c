
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


typedef int u_char ;
struct TYPE_17__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_6__ sin6_addr; } ;
struct TYPE_14__ {int s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; } ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_upstream_srv_conf_t ;
struct TYPE_18__ {int addrlen; int hash; int get_rr_peer; scalar_t__ tries; int * addr; int rrp; } ;
typedef TYPE_7__ ngx_http_upstream_ip_hash_peer_data_t ;
struct TYPE_19__ {TYPE_5__* connection; TYPE_2__* upstream; int pool; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_16__ {TYPE_4__* sockaddr; } ;
struct TYPE_15__ {int sa_family; } ;
struct TYPE_12__ {int get; int * data; } ;
struct TYPE_13__ {TYPE_1__ peer; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_8__*,int *) ;
 int * VAR_4 ;
 TYPE_7__* FUNC_1 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_5,
    ngx_http_upstream_srv_conf_t *VAR_6)
{
    struct sockaddr_in *VAR_7;



    ngx_http_upstream_ip_hash_peer_data_t *VAR_8;

    VAR_8 = FUNC_1(VAR_5->pool, sizeof(ngx_http_upstream_ip_hash_peer_data_t));
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_5->upstream->peer.data = &VAR_8->rrp;

    if (FUNC_0(VAR_5, VAR_6) != VAR_1) {
        return VAR_0;
    }

    VAR_5->upstream->peer.get = VAR_2;

    switch (VAR_5->connection->sockaddr->sa_family) {

    case 129:
        VAR_7 = (struct sockaddr_in *) VAR_5->connection->sockaddr;
        VAR_8->addr = (u_char *) &VAR_7->sin_addr.s_addr;
        VAR_8->addrlen = 3;
        break;
    default:
        VAR_8->addr = VAR_4;
        VAR_8->addrlen = 3;
    }

    VAR_8->hash = 89;
    VAR_8->tries = 0;
    VAR_8->get_rr_peer = VAR_3;

    return VAR_1;
}
