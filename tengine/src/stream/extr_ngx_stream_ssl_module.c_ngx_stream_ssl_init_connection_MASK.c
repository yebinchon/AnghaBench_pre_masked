
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int sec; scalar_t__ msec; } ;
typedef TYPE_2__ ngx_time_t ;
struct TYPE_13__ {int handshake_timeout; } ;
typedef TYPE_3__ ngx_stream_ssl_conf_t ;
typedef int ngx_stream_session_t ;
struct TYPE_14__ {scalar_t__ tcp_nodelay; } ;
typedef TYPE_4__ ngx_stream_core_srv_conf_t ;
typedef int ngx_ssl_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {TYPE_1__* ssl; int read; int * data; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_11__ {int handler; scalar_t__ handshake_start_msec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int VAR_3 ;
 void* FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 TYPE_2__* FUNC_5 () ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_ssl_t *VAR_6, ngx_connection_t *VAR_7)
{
    ngx_int_t VAR_8;
    ngx_stream_session_t *VAR_9;
    ngx_stream_ssl_conf_t *VAR_10;
    ngx_stream_core_srv_conf_t *VAR_11;

    VAR_9 = VAR_7->data;

    VAR_11 = FUNC_3(VAR_9, VAR_3);

    if (VAR_11->tcp_nodelay && FUNC_4(VAR_7) != VAR_2) {
        return VAR_1;
    }

    if (FUNC_1(VAR_6, VAR_7, 0) != VAR_2) {
        return VAR_1;
    }
    VAR_8 = FUNC_2(VAR_7);

    if (VAR_8 == VAR_1) {
        return VAR_1;
    }

    if (VAR_8 == VAR_0) {
        VAR_10 = FUNC_3(VAR_9, VAR_5);

        FUNC_0(VAR_7->read, VAR_10->handshake_timeout);

        VAR_7->ssl->handler = VAR_4;

        return VAR_0;
    }



    return VAR_2;
}
