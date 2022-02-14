
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_6__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int ngx_pool_t ;
struct TYPE_7__ {int socklen; struct sockaddr* sockaddr; } ;
typedef TYPE_1__ ngx_peer_connection_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int peer_addr_text; TYPE_1__ peer; } ;
typedef TYPE_2__ ngx_http_tfs_peer_connection_t ;
struct TYPE_9__ {int ip; int port; } ;
typedef TYPE_3__ ngx_http_tfs_inet_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_6__) ;
 struct sockaddr_in* FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int ) ;

ngx_int_t
FUNC_5(ngx_pool_t *VAR_3, ngx_http_tfs_peer_connection_t *VAR_4,
    ngx_http_tfs_inet_t *VAR_5)
{
    struct sockaddr_in *VAR_6;
    ngx_peer_connection_t *VAR_7;

    if (VAR_5 == ((void*)0)) {
        return VAR_1;
    }

    VAR_6 = FUNC_2(VAR_3, sizeof(struct sockaddr_in));
    if (VAR_6 == ((void*)0)) {
        return VAR_1;
    }

    VAR_6->sin_family = VAR_0;
    VAR_6->sin_port = FUNC_0(VAR_5->port);
    VAR_6->sin_addr.s_addr = VAR_5->ip;

    VAR_7 = &VAR_4->peer;
    VAR_7->sockaddr = (struct sockaddr *) VAR_6;
    VAR_7->socklen = sizeof(struct sockaddr_in);

    FUNC_3(VAR_4->peer_addr_text, "%s:%d",
                FUNC_1(VAR_6->sin_addr),
                FUNC_4(VAR_6->sin_port));

    return VAR_2;
}
