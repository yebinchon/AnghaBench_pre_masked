
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int packet_number; int others; int protocol_version; } ;
typedef TYPE_2__ ngx_mysql_handshake_init_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {TYPE_4__* check_data; } ;
typedef TYPE_3__ ngx_http_upstream_check_peer_t ;
struct TYPE_7__ {size_t last; size_t pos; } ;
struct TYPE_10__ {TYPE_1__ recv; } ;
typedef TYPE_4__ ngx_http_upstream_check_ctx_t ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*,int,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_upstream_check_peer_t *VAR_5)
{
    size_t VAR_6;
    ngx_mysql_handshake_init_t *VAR_7;
    ngx_http_upstream_check_ctx_t *VAR_8;

    VAR_8 = VAR_5->check_data;

    VAR_6 = VAR_8->recv.last - VAR_8->recv.pos;
    if (VAR_6 < sizeof(ngx_mysql_handshake_init_t)) {
        return VAR_0;
    }

    VAR_7 = (ngx_mysql_handshake_init_t *) VAR_8->recv.pos;

    FUNC_0(VAR_2, VAR_4->log, 0,
                   "mysql_parse: packet_number=%ud, protocol=%ud, server=%s",
                   VAR_7->packet_number, VAR_7->protocol_version,
                   VAR_7->others);


    if (VAR_7->packet_number != 0x00) {
        return VAR_1;
    }

    return VAR_3;
}
