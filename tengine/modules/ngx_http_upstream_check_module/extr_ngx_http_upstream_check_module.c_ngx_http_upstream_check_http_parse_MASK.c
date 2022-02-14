
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_18__ {int status_alive; } ;
struct TYPE_19__ {TYPE_4__ code; } ;
typedef TYPE_5__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_17__ {TYPE_2__* connection; } ;
struct TYPE_20__ {TYPE_3__ pc; TYPE_1__* check_peer_addr; TYPE_7__* check_data; TYPE_5__* conf; } ;
typedef TYPE_6__ ngx_http_upstream_check_peer_t ;
struct TYPE_13__ {int code; } ;
struct TYPE_22__ {scalar_t__ last; scalar_t__ pos; } ;
struct TYPE_21__ {TYPE_10__ status; TYPE_9__ recv; } ;
typedef TYPE_7__ ngx_http_upstream_check_ctx_t ;
struct TYPE_16__ {int error; } ;
struct TYPE_15__ {int name; } ;
struct TYPE_14__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_12__* VAR_11 ;
 scalar_t__ FUNC_0 (TYPE_7__*,TYPE_9__*,TYPE_10__*) ;
 int FUNC_1 (int ,int ,int ,char*,int,int) ;
 int FUNC_2 (int ,int ,int ,char*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_upstream_check_peer_t *VAR_12)
{
    ngx_int_t VAR_13;
    ngx_uint_t VAR_14, VAR_15;
    ngx_http_upstream_check_ctx_t *VAR_16;
    ngx_http_upstream_check_srv_conf_t *VAR_17;

    VAR_17 = VAR_12->conf;
    VAR_16 = VAR_12->check_data;

    if ((VAR_16->recv.last - VAR_16->recv.pos) > 0) {

        VAR_13 = FUNC_0(VAR_16,
                                                       &VAR_16->recv,
                                                       &VAR_16->status);
        if (VAR_13 == VAR_0) {
            return VAR_13;
        }

        if (VAR_13 == VAR_7) {
            FUNC_2(VAR_9, VAR_11->log, 0,
                          "http parse status line error with peer: %V ",
                          &VAR_12->check_peer_addr->name);
            return VAR_13;
        }

        VAR_14 = VAR_16->status.code;

        if (VAR_14 > 0 && VAR_14 < 200) {
            VAR_15 = VAR_1;
        } else if (VAR_14 >= 200 && VAR_14 < 300) {
            VAR_15 = VAR_2;
        } else if (VAR_14 >= 300 && VAR_14 < 400) {
            VAR_15 = VAR_3;
        } else if (VAR_14 >= 400 && VAR_14 < 500) {
            VAR_12->pc.connection->error = 1;
            VAR_15 = VAR_4;
        } else if (VAR_14 >= 500 && VAR_14 < 600) {
            VAR_12->pc.connection->error = 1;
            VAR_15 = VAR_5;
        } else {
            VAR_12->pc.connection->error = 1;
            VAR_15 = VAR_6;
        }

        FUNC_1(VAR_8, VAR_11->log, 0,
                       "http_parse: code_n: %ui, conf: %ui",
                       VAR_15, VAR_17->code.status_alive);

        if (VAR_15 & VAR_17->code.status_alive) {
            return VAR_10;
        } else {
            return VAR_7;
        }
    } else {
        return VAR_0;
    }

    return VAR_10;
}
