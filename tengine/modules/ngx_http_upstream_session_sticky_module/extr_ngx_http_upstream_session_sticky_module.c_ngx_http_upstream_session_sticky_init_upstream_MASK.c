
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_24__ {int number; int flag; TYPE_10__* server; } ;
typedef TYPE_5__ ngx_http_upstream_ss_srv_conf_t ;
struct TYPE_23__ {int init; scalar_t__ data; } ;
struct TYPE_25__ {TYPE_4__ peer; } ;
typedef TYPE_6__ ngx_http_upstream_srv_conf_t ;
struct TYPE_26__ {int number; TYPE_8__* peer; } ;
typedef TYPE_7__ ngx_http_upstream_rr_peers_t ;
struct TYPE_22__ {scalar_t__ len; int data; } ;
struct TYPE_20__ {scalar_t__ len; int data; } ;
struct TYPE_27__ {TYPE_3__ id; TYPE_1__ name; int check_index; int socklen; int sockaddr; struct TYPE_27__* next; } ;
typedef TYPE_8__ ngx_http_upstream_rr_peer_t ;
typedef int ngx_http_ss_server_t ;
struct TYPE_28__ {int pool; } ;
typedef TYPE_9__ ngx_conf_t ;
struct TYPE_21__ {scalar_t__ len; int data; } ;
struct TYPE_19__ {TYPE_2__ sid; int check_index; TYPE_8__* peer; int socklen; int sockaddr; TYPE_1__* name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__* FUNC_0 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_9__*,TYPE_6__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_9__*,TYPE_10__*) ;
 TYPE_10__* FUNC_3 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_conf_t *VAR_5,
    ngx_http_upstream_srv_conf_t *VAR_6)
{
    ngx_uint_t VAR_7, VAR_8;
    ngx_http_upstream_rr_peer_t *VAR_9;
    ngx_http_upstream_rr_peers_t *VAR_10;
    ngx_http_upstream_ss_srv_conf_t *VAR_11;

    if (FUNC_1(VAR_5, VAR_6) != VAR_2) {
        return VAR_0;
    }

    VAR_11 = FUNC_0(VAR_6,
                                    VAR_4);
    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    VAR_10 = (ngx_http_upstream_rr_peers_t *) VAR_6->peer.data;
    VAR_7 = VAR_10->number;

    VAR_11->server = FUNC_3(VAR_5->pool, VAR_7 * sizeof(ngx_http_ss_server_t));
    if (VAR_11->server == ((void*)0)) {
        return VAR_0;
    }

    VAR_11->number = VAR_7;

    for (VAR_9 = VAR_10->peer, VAR_8 = 0; VAR_9; VAR_9 = VAR_9->next, VAR_8++) {

        VAR_11->server[VAR_8].name = &VAR_9->name;
        VAR_11->server[VAR_8].sockaddr = VAR_9->sockaddr;
        VAR_11->server[VAR_8].socklen = VAR_9->socklen;

        VAR_11->server[VAR_8].peer = VAR_9;




        if (VAR_11->flag & VAR_1) {
            if (VAR_9->id.len == 0) {
                VAR_11->server[VAR_8].sid.data = VAR_9->name.data;
                VAR_11->server[VAR_8].sid.len = VAR_9->name.len;
                continue;
            }

            VAR_11->server[VAR_8].sid.data = VAR_9->id.data;
            VAR_11->server[VAR_8].sid.len = VAR_9->id.len;

        } else if (FUNC_2(
                                                VAR_5, &VAR_11->server[VAR_8]) != VAR_2)
        {
            return VAR_0;
        }
    }

    VAR_6->peer.init = VAR_3;

    return VAR_2;
}
