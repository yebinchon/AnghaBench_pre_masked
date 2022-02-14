
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_26__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_29__ {int host; int * srv_conf; } ;
typedef TYPE_2__ ngx_http_upstream_srv_conf_t ;
struct TYPE_30__ {scalar_t__ check_interval; scalar_t__ port; scalar_t__ unique; } ;
typedef TYPE_3__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_28__ {scalar_t__ nelts; } ;
struct TYPE_31__ {int checksum; TYPE_26__ peers; } ;
typedef TYPE_4__ ngx_http_upstream_check_peers_t ;
struct TYPE_32__ {scalar_t__ index; TYPE_8__* peer_addr; TYPE_8__* check_peer_addr; int * upstream_name; TYPE_3__* conf; } ;
typedef TYPE_5__ ngx_http_upstream_check_peer_t ;
struct TYPE_33__ {TYPE_4__* peers; } ;
typedef TYPE_6__ ngx_http_upstream_check_main_conf_t ;
struct TYPE_34__ {int pool; int log; } ;
typedef TYPE_7__ ngx_conf_t ;
struct TYPE_27__ {int len; int data; } ;
struct TYPE_35__ {TYPE_1__ name; } ;
typedef TYPE_8__ ngx_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__* FUNC_0 (TYPE_26__*) ;
 TYPE_6__* FUNC_1 (TYPE_7__*,int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*,TYPE_8__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_8__*,TYPE_8__*,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (TYPE_4__*,TYPE_8__*,TYPE_3__*) ;
 int FUNC_6 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_7 (TYPE_5__*,int) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 TYPE_8__* FUNC_9 (int ,int) ;
 scalar_t__ VAR_5 ;

ngx_uint_t
FUNC_10(ngx_conf_t *VAR_6,
    ngx_http_upstream_srv_conf_t *VAR_7, ngx_addr_t *VAR_8)
{
    ngx_uint_t VAR_9;
    ngx_http_upstream_check_peer_t *VAR_10;
    ngx_http_upstream_check_peers_t *VAR_11;
    ngx_http_upstream_check_srv_conf_t *VAR_12;
    ngx_http_upstream_check_main_conf_t *VAR_13;

    if (VAR_7->srv_conf == ((void*)0)) {
        return VAR_0;
    }

    VAR_12 = FUNC_2(VAR_7, VAR_4);

    if(VAR_12->check_interval == 0) {
        return VAR_0;
    }

    FUNC_6(VAR_1, VAR_6->log, 0,
                   "http upstream check add upstream process: %ui",
                   VAR_5);

    if (VAR_5 == VAR_3) {
        return FUNC_3(VAR_6->pool, VAR_7, VAR_8);
    }

    VAR_13 = FUNC_1(VAR_6,
                                               VAR_4);
    VAR_11 = VAR_13->peers;

    if (VAR_12->unique) {
        VAR_9 = FUNC_5(VAR_11, VAR_8, VAR_12);
        if (VAR_9 != (ngx_uint_t) VAR_0) {
            return VAR_9;
        }
    }

    VAR_10 = FUNC_0(&VAR_11->peers);
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_7(VAR_10, sizeof(ngx_http_upstream_check_peer_t));

    VAR_10->index = VAR_11->peers.nelts - 1;
    VAR_10->conf = VAR_12;
    VAR_10->upstream_name = &VAR_7->host;
    VAR_10->peer_addr = VAR_8;

    if (VAR_12->port) {
        VAR_10->check_peer_addr = FUNC_9(VAR_6->pool, sizeof(ngx_addr_t));
        if (VAR_10->check_peer_addr == ((void*)0)) {
            return VAR_0;
        }

        if (FUNC_4(VAR_6->pool,
                VAR_10->check_peer_addr, VAR_8, VAR_12->port)
            != VAR_2) {

            return VAR_0;
        }

    } else {
        VAR_10->check_peer_addr = VAR_10->peer_addr;
    }

    VAR_11->checksum +=
        FUNC_8(VAR_8->name.data, VAR_8->name.len);

    return VAR_10->index;
}
