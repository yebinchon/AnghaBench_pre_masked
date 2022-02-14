
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int minor; int major; } ;
struct TYPE_10__ {int minor; int major; } ;
struct TYPE_12__ {scalar_t__ msg_type; scalar_t__ handshake_type; TYPE_3__ hello_version; int length; TYPE_2__ version; } ;
typedef TYPE_4__ ngx_ssl_server_hello_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {TYPE_6__* check_data; } ;
typedef TYPE_5__ ngx_http_upstream_check_peer_t ;
struct TYPE_9__ {size_t last; size_t pos; } ;
struct TYPE_14__ {TYPE_1__ recv; } ;
typedef TYPE_6__ ngx_http_upstream_check_ctx_t ;
struct TYPE_15__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_8__* VAR_6 ;
 int FUNC_0 (int ,int ,int ,char*,scalar_t__,int ,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_upstream_check_peer_t *VAR_7)
{
    size_t VAR_8;
    ngx_ssl_server_hello_t *VAR_9;
    ngx_http_upstream_check_ctx_t *VAR_10;

    VAR_10 = VAR_7->check_data;

    VAR_8 = VAR_10->recv.last - VAR_10->recv.pos;
    if (VAR_8 < sizeof(ngx_ssl_server_hello_t)) {
        return VAR_0;
    }

    VAR_9 = (ngx_ssl_server_hello_t *) VAR_10->recv.pos;

    FUNC_0(VAR_2, VAR_6->log, 0,
                   "http check ssl_parse, type: %ud, version: %ud.%ud, "
                   "length: %ud, handshanke_type: %ud, hello_version: %ud.%ud",
                   VAR_9->msg_type, VAR_9->version.major, VAR_9->version.minor,
                   FUNC_1(VAR_9->length), VAR_9->handshake_type,
                   VAR_9->hello_version.major, VAR_9->hello_version.minor);

    if (VAR_9->msg_type != VAR_4) {
        return VAR_1;
    }

    if (VAR_9->handshake_type != VAR_5) {
        return VAR_1;
    }

    return VAR_3;
}
