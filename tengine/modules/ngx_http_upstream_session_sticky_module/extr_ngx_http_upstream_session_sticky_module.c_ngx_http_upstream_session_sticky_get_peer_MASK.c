
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
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_24__ {TYPE_3__* name; int sockaddr; int socklen; } ;
typedef TYPE_5__ ngx_peer_connection_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_25__ {size_t number; TYPE_8__* server; } ;
typedef TYPE_6__ ngx_http_upstream_ss_srv_conf_t ;
struct TYPE_18__ {int current; } ;
struct TYPE_26__ {scalar_t__ (* get_rr_peer ) (TYPE_5__*,TYPE_12__*) ;TYPE_12__ rrp; TYPE_10__* r; TYPE_6__* sscf; } ;
typedef TYPE_7__ ngx_http_upstream_ss_peer_data_t ;
struct TYPE_23__ {scalar_t__ len; int data; } ;
struct TYPE_27__ {TYPE_4__ sid; TYPE_3__* name; int peer; int sockaddr; int socklen; int check_index; } ;
typedef TYPE_8__ ngx_http_ss_server_t ;
struct TYPE_19__ {scalar_t__ len; int data; } ;
struct TYPE_28__ {int frist; scalar_t__ tries; TYPE_13__ sid; TYPE_1__* sscf; } ;
typedef TYPE_9__ ngx_http_ss_ctx_t ;
struct TYPE_17__ {TYPE_2__* connection; } ;
typedef TYPE_10__ ngx_http_request_t ;
struct TYPE_22__ {scalar_t__ len; int data; } ;
struct TYPE_21__ {int log; } ;
struct TYPE_20__ {int flag; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_9__* FUNC_0 (TYPE_10__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_13__*) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_5__*,TYPE_12__*) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_peer_connection_t *VAR_5, void *VAR_6)
{
    ngx_int_t VAR_7;
    ngx_uint_t VAR_8, VAR_9;
    ngx_http_ss_ctx_t *VAR_10;
    ngx_http_request_t *VAR_11;
    ngx_http_ss_server_t *VAR_12;
    ngx_http_upstream_ss_srv_conf_t *VAR_13;
    ngx_http_upstream_ss_peer_data_t *VAR_14 = VAR_6;

    VAR_13 = VAR_14->sscf;
    VAR_11 = VAR_14->r;
    VAR_9 = VAR_13->number;
    VAR_12 = VAR_13->server;

    VAR_10 = FUNC_0(VAR_11, VAR_4);

    if (VAR_10->frist == 1 || VAR_10->sid.len == 0) {
        goto failed;
    }

    if (VAR_10->tries == 0
        && !(VAR_10->sscf->flag & VAR_1))
    {
        goto failed;
    }

    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
        if (VAR_10->sid.len == VAR_12[VAR_8].sid.len
            && FUNC_3(VAR_10->sid.data, VAR_12[VAR_8].sid.data,
                           VAR_10->sid.len) == 0)
        {
            VAR_5->name = VAR_12[VAR_8].name;
            VAR_5->socklen = VAR_12[VAR_8].socklen;
            VAR_5->sockaddr = VAR_12[VAR_8].sockaddr;

            VAR_10->sid.len = VAR_12[VAR_8].sid.len;
            VAR_10->sid.data = VAR_12[VAR_8].sid.data;
            VAR_14->rrp.current = VAR_12[VAR_8].peer;
            VAR_10->tries--;

            return VAR_3;
        }
    }

failed:
    if (VAR_10->frist != 1 &&
        (VAR_10->sscf->flag & VAR_1))
    {
        return VAR_0;
    }

    FUNC_2(VAR_2, VAR_11->connection->log, 0,
                   "session sticky failed, sid[%V]", &VAR_10->sid);

    VAR_7 = VAR_14->get_rr_peer(VAR_5, &VAR_14->rrp);
    if (VAR_7 != VAR_3) {
        return VAR_7;
    }

    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
        if (VAR_12[VAR_8].name->len == VAR_5->name->len
            && FUNC_3(VAR_12[VAR_8].name->data, VAR_5->name->data,
                           VAR_5->name->len) == 0)
        {
            VAR_10->sid.len = VAR_12[VAR_8].sid.len;
            VAR_10->sid.data = VAR_12[VAR_8].sid.data;
            break;
        }
    }
    VAR_10->frist = 1;

    return VAR_7;
}
