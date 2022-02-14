
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_19__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_msec_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_33__ {scalar_t__ tries; scalar_t__ start_time; scalar_t__ resolved; TYPE_10__* connection; scalar_t__ cached; int * sockaddr; int data; int (* free ) (TYPE_9__*,int ,int) ;} ;
struct TYPE_30__ {scalar_t__ cache_status; scalar_t__ (* reinit_request ) (TYPE_6__*) ;TYPE_9__ peer; TYPE_2__* conf; scalar_t__ request_sent; TYPE_1__* state; scalar_t__ multi; } ;
typedef TYPE_5__ ngx_http_upstream_t ;
struct TYPE_31__ {int method; TYPE_19__* connection; TYPE_3__* cache; scalar_t__ request_body_no_buffering; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_32__ {scalar_t__ retry_cached_connection; } ;
typedef TYPE_7__ ngx_http_core_loc_conf_t ;
struct TYPE_29__ {int no_wait_shutdown; int no_send_shutdown; } ;
struct TYPE_28__ {scalar_t__ stale_error; } ;
struct TYPE_27__ {scalar_t__ next_upstream_timeout; int next_upstream; int cache_use_stale; } ;
struct TYPE_26__ {int status; int bytes_sent; } ;
struct TYPE_25__ {int log; scalar_t__ error; } ;
struct TYPE_24__ {int fd; scalar_t__ pool; TYPE_4__* ssl; int sent; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;






 int VAR_16 ;

 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (TYPE_10__*) ;
 scalar_t__ VAR_24 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_25 ;
 TYPE_7__* FUNC_2 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_19__*,int) ;
 scalar_t__ FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_6__*,TYPE_5__*,int) ;
 int FUNC_8 (int ,int ,int ,char*,int) ;
 int FUNC_9 (int ,int ,int ,char*,...) ;
 int FUNC_10 (TYPE_10__*) ;
 int FUNC_11 (TYPE_9__*,int ,int) ;
 scalar_t__ FUNC_12 (TYPE_6__*) ;

__attribute__((used)) static void
FUNC_13(ngx_http_request_t *VAR_26, ngx_http_upstream_t *VAR_27,
    ngx_uint_t VAR_28)
{
    ngx_msec_t VAR_29;
    ngx_uint_t VAR_30, VAR_31;





    FUNC_8(VAR_18, VAR_26->connection->log, 0,
                   "http next upstream, %xi", VAR_28);
    if (VAR_27->peer.sockaddr) {

        if (VAR_27->peer.connection) {
            VAR_27->state->bytes_sent = VAR_27->peer.connection->sent;
        }

        if (VAR_28 == 134
            || VAR_28 == 133)
        {
            VAR_31 = VAR_23;

        } else {
            VAR_31 = VAR_22;
        }

        VAR_27->peer.free(&VAR_27->peer, VAR_27->peer.data, VAR_31);
        VAR_27->peer.sockaddr = ((void*)0);
    }

    if (VAR_28 == 128) {
        FUNC_9(VAR_19, VAR_26->connection->log, VAR_1,
                      "upstream timed out");
    }





    if (VAR_27->peer.cached && VAR_28 == VAR_15



       )
    {

        VAR_27->peer.tries++;
    }

    switch (VAR_28) {

    case 128:
    case 129:
        VAR_30 = VAR_7;
        break;

    case 131:
        VAR_30 = VAR_8;
        break;

    case 130:
        VAR_30 = VAR_13;
        break;

    case 134:
        VAR_30 = VAR_6;
        break;

    case 133:
        VAR_30 = VAR_10;
        break;

    case 132:
        VAR_30 = VAR_14;
        break;






    default:
        VAR_30 = VAR_2;
    }

    if (VAR_26->connection->error) {
        FUNC_7(VAR_26, VAR_27,
                                           VAR_5);
        return;
    }

    VAR_27->state->status = VAR_30;

    VAR_29 = VAR_27->conf->next_upstream_timeout;

    if (VAR_27->request_sent
        && (VAR_26->method & (VAR_12|VAR_9|VAR_11)))
    {
        VAR_28 |= VAR_16;
    }

    if (VAR_27->peer.tries == 0
        || ((VAR_27->conf->next_upstream & VAR_28) != VAR_28)
        || (VAR_27->request_sent && VAR_26->request_body_no_buffering)
        || (VAR_29 && VAR_24 - VAR_27->peer.start_time >= VAR_29))
    {
        FUNC_7(VAR_26, VAR_27, VAR_30);
        return;
    }

    if (VAR_27->peer.connection) {
        FUNC_8(VAR_18, VAR_26->connection->log, 0,
                       "close http upstream connection: %d",
                       VAR_27->peer.connection->fd);
        if (VAR_27->peer.connection->pool) {
            FUNC_1(VAR_27->peer.connection->pool);
        }

        FUNC_0(VAR_27->peer.connection);
        VAR_27->peer.connection = ((void*)0);
    }




    FUNC_6(VAR_26, VAR_27);
}
