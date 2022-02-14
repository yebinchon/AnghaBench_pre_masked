
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_17__ {int verify; } ;
typedef TYPE_4__ ngx_http_ssl_srv_conf_t ;
struct TYPE_18__ {int stat_writing; int read_event_handler; scalar_t__ stat_reading; TYPE_1__* http_connection; TYPE_6__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_19__ {TYPE_3__* write; TYPE_12__* read; TYPE_2__* ssl; int log; } ;
typedef TYPE_6__ ngx_connection_t ;
typedef int X509 ;
struct TYPE_16__ {void* handler; } ;
struct TYPE_15__ {int connection; int session_ctx; } ;
struct TYPE_14__ {scalar_t__ ssl; } ;
struct TYPE_13__ {void* handler; scalar_t__ timer_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 long FUNC_2 (int ) ;
 long VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (long) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_12__*) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_5__*,int ) ;
 TYPE_4__* FUNC_8 (TYPE_5__*,int ) ;
 int FUNC_9 (TYPE_5__*) ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ,int ,int ,char*,...) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (long) ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_13(ngx_http_request_t *VAR_10)
{
    ngx_connection_t *VAR_11;

    VAR_11 = VAR_10->connection;
    if (VAR_11->read->timer_set) {
        FUNC_6(VAR_11->read);
    }
    VAR_11->read->handler = VAR_6;
    VAR_11->write->handler = VAR_6;
    VAR_10->read_event_handler = VAR_5;

    FUNC_9(VAR_10);
}
