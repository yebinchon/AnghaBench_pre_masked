
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint16_t ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
typedef int ngx_int_t ;
struct TYPE_12__ {int version; } ;
struct TYPE_18__ {int tfs_peer_count; int log; TYPE_1__ r_ctx; TYPE_5__* loc_conf; TYPE_8__* tfs_peer_servers; int pool; TYPE_2__* main_conf; } ;
typedef TYPE_7__ ngx_http_tfs_t ;
struct TYPE_17__ {void* log_error; int free; int get; TYPE_9__* data; int * name; int log; scalar_t__ sockaddr; int socklen; } ;
struct TYPE_19__ {TYPE_6__ peer; int peer_addr_text; } ;
typedef TYPE_8__ ngx_http_tfs_peer_connection_t ;
struct TYPE_20__ {int free_peer; int get_peer; } ;
typedef TYPE_9__ ngx_http_connection_pool_t ;
struct TYPE_16__ {TYPE_4__* upstream; } ;
struct TYPE_15__ {TYPE_3__* ups_addr; scalar_t__ enable_rcs; } ;
struct TYPE_14__ {int socklen; scalar_t__ sockaddr; } ;
struct TYPE_13__ {TYPE_9__* conn_pool; } ;


 int VAR_0 ;
 void* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_0 (int ) ;
 int VAR_10 ;
 TYPE_8__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,char*,int ) ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int VAR_13 ;

ngx_int_t
FUNC_4(ngx_http_tfs_t *VAR_14)
{
    char *VAR_15;
    uint16_t VAR_16;
    ngx_http_connection_pool_t *VAR_17;
    ngx_http_tfs_peer_connection_t *VAR_18, *VAR_19, *VAR_20,
                                    *VAR_21, *VAR_22;

    VAR_17 = VAR_14->main_conf->conn_pool;

    VAR_14->tfs_peer_servers = FUNC_1(VAR_14->pool,
        sizeof(ngx_http_tfs_peer_connection_t) * VAR_7);
    if (VAR_14->tfs_peer_servers == ((void*)0)) {
        return VAR_0;
    }

    VAR_19 = &VAR_14->tfs_peer_servers[VAR_4];
    VAR_22 = &VAR_14->tfs_peer_servers[VAR_2];
    VAR_20 = &VAR_14->tfs_peer_servers[VAR_6];
    VAR_21 = &VAR_14->tfs_peer_servers[VAR_3];


    if (VAR_14->loc_conf->upstream->enable_rcs) {
        VAR_18 = &VAR_14->tfs_peer_servers[VAR_5];
        VAR_18->peer.sockaddr = VAR_14->loc_conf->upstream->ups_addr->sockaddr;
        VAR_18->peer.socklen = VAR_14->loc_conf->upstream->ups_addr->socklen;
        VAR_18->peer.log = VAR_14->log;
        VAR_18->peer.name = &VAR_12;
        VAR_18->peer.data = VAR_17;
        VAR_18->peer.get = VAR_17->get_peer;
        VAR_18->peer.free = VAR_17->free_peer;
        VAR_18->peer.log_error = VAR_1;
        VAR_15 = FUNC_0(((struct sockaddr_in*)
                          (VAR_18->peer.sockaddr))->sin_addr);
        VAR_16 = FUNC_3(((struct sockaddr_in*)
                      (VAR_18->peer.sockaddr))->sin_port);
        FUNC_2(VAR_18->peer_addr_text, "%s:%d", VAR_15, VAR_16);

    } else {
        VAR_19->peer.sockaddr = VAR_14->loc_conf->upstream->ups_addr->sockaddr;
        VAR_19->peer.socklen = VAR_14->loc_conf->upstream->ups_addr->socklen;
        VAR_15 = FUNC_0(((struct sockaddr_in*)
                          (VAR_19->peer.sockaddr))->sin_addr);
        VAR_16 = FUNC_3(((struct sockaddr_in*)
                      (VAR_19->peer.sockaddr))->sin_port);
        FUNC_2(VAR_19->peer_addr_text, "%s:%d", VAR_15, VAR_16);
    }


    VAR_19->peer.log = VAR_14->log;
    VAR_19->peer.name = &VAR_11;
    VAR_19->peer.data = VAR_17;
    VAR_19->peer.get = VAR_17->get_peer;
    VAR_19->peer.free = VAR_17->free_peer;
    VAR_19->peer.log_error = VAR_1;


    VAR_22->peer.log = VAR_14->log;
    VAR_22->peer.name = &VAR_9;
    VAR_22->peer.data = VAR_17;
    VAR_22->peer.get = VAR_17->get_peer;
    VAR_22->peer.free = VAR_17->free_peer;
    VAR_22->peer.log_error = VAR_1;

    if (VAR_14->r_ctx.version == 1) {
        VAR_14->tfs_peer_count = 3;

    } else {

        VAR_20->peer.log = VAR_14->log;
        VAR_20->peer.name = &VAR_13;
        VAR_20->peer.data = VAR_17;
        VAR_20->peer.get = VAR_17->get_peer;
        VAR_20->peer.free = VAR_17->free_peer;
        VAR_20->peer.log_error = VAR_1;


        VAR_21->peer.log = VAR_14->log;
        VAR_21->peer.name = &VAR_10;
        VAR_21->peer.data = VAR_17;
        VAR_21->peer.get = VAR_17->get_peer;
        VAR_21->peer.free = VAR_17->free_peer;
        VAR_21->peer.log_error = VAR_1;

        VAR_14->tfs_peer_count = 5;
    }

    return VAR_8;
}
